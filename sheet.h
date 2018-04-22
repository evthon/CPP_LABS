//
// Created on 4/22/2018.
//

#ifndef TEMPPROJECT_SHEET_H
#define TEMPPROJECT_SHEET_H
#define X 5

#include <iostream>

class sheet {

private:
    int num, subject_key, mark, num_cor, subject_key_cor, size;
    char name[30], subject[15];
    FILE *file;

public:
    sheet () {
        size = sizeof(int)*3+45;
    }

    void input () {

        file = fopen("sheet_list","r+b");

        printf("Input student's ticket number: ");
        scanf("%d", &num);
        printf("Input sdudent's name: ");
        scanf("%s", name);
        printf("Input the key of subject: ");
        scanf("%d", &subject_key);
        printf("Input the subject's name: ");
        scanf("%s", subject);
        printf("Input the mark: ");
        scanf("%d", &mark);

        fseek(file, 0, SEEK_END);
        fwrite(&num, sizeof(int), 1, file);
        fwrite(&name, 30, 1, file);
        fwrite(&subject_key, sizeof(int), 1, file);
        fwrite(&subject, 15, 1, file);
        fwrite(&mark, sizeof(int), 1, file);

        fclose(file);

    }

    void output () {

        file = fopen("sheet_list","r+b");
        while(true) {
            fread(&num, sizeof(int), 1, file);
            fread(&name, 30, 1, file);
            fread(&subject_key, sizeof(int), 1, file);
            fread(&subject, 15, 1, file);
            fread(&mark, sizeof(int), 1, file);
            if (feof(file)) break;
            printf("%d-%s-%d-%s-%d\n", num, name, subject_key, subject, mark);
        }
        fclose(file);

    }

    void correct () {

        file = fopen("sheet_list","r+b");
        printf("Input student's ticket number: ");
        scanf("%d", &num_cor);
        printf("Input the key of subject: ");
        scanf("%d", &subject_key_cor);
        while (!feof(file)) {
            fread(&num, sizeof(int), 1, file);
            fseek(file, 30, SEEK_CUR);
            fread(&subject_key, sizeof(int), 1, file);
            fseek(file, 15 + sizeof(int), SEEK_CUR);
            if (num_cor == num && subject_key_cor == subject_key) {
//                printf("Input student's ticket number: ");  //Раскоментировать для полного редактирования
//                scanf("%d", &num);
//                printf("Input sdudent's name: ");
//                scanf("%s", name);
//                printf("Input the key of subject: ");
//                scanf("%d", &subject_key);
//                printf("Input the subject's name: ");
//                scanf("%s", subject);
                scanf("%s", subject);
                printf("Input the mark: ");
                scanf("%d", &mark);
                fseek(file, -sizeof(int), SEEK_CUR); //size*-1 для всего
//                fwrite(&num, sizeof(int), 1, file);
//                fwrite(&name, 30, 1, file);
//                fwrite(&subject_key, sizeof(int), 1, file);
//                fwrite(&subject, 15, 1, file);
                fwrite(&mark, sizeof(int), 1, file);
                break;
            }
        }
        fclose(file);

    }

    void middle_mark () {
        float mid_num = 0;
        int counter = 0, subject_key_cor, mid_counter = 0;

        file = fopen("sheet_list","r+b");
        printf("Input the key of subject: ");
        scanf("%d", &subject_key_cor);
        while(true) {
            fseek(file, (sizeof(int)+30+size*counter), SEEK_SET);
            fread(&subject_key, sizeof(int), 1, file);
            if (subject_key == subject_key_cor) {
                fseek(file, (45+2*sizeof(int)+counter*size), SEEK_SET);
                fread(&mark, sizeof(int), 1, file);
                mid_num+=mark;
                mid_counter++;
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }
        switch (counter) {
            case 0:
                printf("\nMiddle mark not found!");
                break;
            default:
                mid_num/=mid_counter;
                printf("\nMiddle mark = %.1f\n", mid_num);
        }
        fclose(file);

    }

    void subject_inf () {
        int counter = 0, subject_key_cor;

        file = fopen("sheet_list","r+b");
        printf("Input the key of subject: ");
        scanf("%d", &subject_key_cor);
        while (true) {
            fseek(file, sizeof(int)+30+counter*size, SEEK_SET);
            fread(&subject_key, sizeof(int), 1, file);
            if (subject_key == subject_key_cor) {
                fseek(file, sizeof(int)*2+30+counter*size, SEEK_SET);
                fread(&subject, 15, 1, file);
                printf("\n%s:\n", subject);

                while (true) {
                    fseek(file, sizeof(int)+30+counter*size, SEEK_SET);
                    fread(&subject_key, sizeof(int), 1, file);
                    if (subject_key == subject_key_cor) {
                        fseek(file, size*counter, SEEK_SET);
                        fread(&num, sizeof(int), 1, file);
                        fseek(file, sizeof(int)+size*counter, SEEK_SET);
                        fread(&name, 30, 1, file);
                        fseek(file, sizeof(int)*2+45+size*counter, SEEK_SET);
                        fread(&mark, sizeof(int), 1, file);
                        printf("%d-%s-%d\n", num, name, mark);
                    }
                    counter++;
                    if (fgetc(file) == EOF) break;
                }

                break;
            }
            counter++;
            if (fgetc(file) == EOF) {
                printf("This subject not found!");
                break;
            }
        }

    }

    void students_inf () {
        int num_cor, counter = 0;

        file = fopen("sheet_list", "r+b");
        printf("Input student's ticket number: ");
        scanf("%d", &num_cor);

        while (true) {
            fseek(file, size*counter, SEEK_SET);
            fread(&num, sizeof(int), 1, file);
            if (num == num_cor) {
                fseek(file, size*counter+sizeof(int), SEEK_SET);
                fread(&name, sizeof(name), 1, file);
                printf("\n%s:\n", name);
                while (true) {
                    fseek(file, size*counter, SEEK_SET);
                    fread(&num, sizeof(int), 1, file);
                    if (num == num_cor) {
                        fseek(file, size*counter+2*sizeof(int)+sizeof(name), SEEK_SET);
                        fread(&subject, sizeof(subject), 1, file);
                        fseek(file, size*counter+2*sizeof(int)+sizeof(name)+sizeof(subject), SEEK_SET);
                        fread(&mark, sizeof(int), 1, file);
                        printf("%s-%d\n", subject, mark);
                    }
                    counter++;
                    if (fgetc(file) == EOF) break;
                }
                break;
            }
            counter++;
            if (fgetc(file) == EOF) {
                printf("Student not found!");
                break;
            }
        }

        fclose(file);

    }

    void students_list () {
        int counter = 0, *mass, mass_counter = 0, mass_size = 10;
        bool test;

        mass = (int*) calloc(mass_size, sizeof(int));
        file = fopen("sheet_list", "r+b");

        while (true) {
            test = true;
            fseek(file, size*counter, SEEK_SET);
            fread(&num, sizeof(int), 1, file);
            for (int i = 0; i < mass_counter; i++) {
                if(mass[i] == num) {
                    test = false;
                    break;
                }
            }
            if (test) {
                fseek(file, size*counter+sizeof(int), SEEK_SET);
                fread(&name, sizeof(name), 1, file);
                mass[mass_counter] = num;
                mass_counter++;
                if (mass_counter >= mass_size) {
                    mass = (int*) realloc(mass, (mass_size+10, sizeof(int)));
                    mass_size+=10;
                }
                printf("%d-%s\n", num, name);
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }

        fclose(file);
        free(mass);

    }

    void subjects_list () {
        int counter = 0, *mass, mass_counter = 0, mass_size = 10;
        bool test;

        mass = (int*) calloc(mass_size, sizeof(int));
        file = fopen("sheet_list", "r+b");

        while (true) {
            test = true;
            fseek(file, size*counter+sizeof(int)+sizeof(name), SEEK_SET);
            fread(&subject_key, sizeof(int), 1, file);
            for (int i = 0; i < mass_counter; i++) {
                if(mass[i] == subject_key) {
                    test = false;
                    break;
                }
            }
            if (test) {
                fseek(file, size*counter+sizeof(int)*2+sizeof(name), SEEK_SET);
                fread(&subject, sizeof(subject), 1, file);
                mass[mass_counter] = subject_key;
                mass_counter++;
                if (mass_counter >= mass_size) {
                    mass = (int*) realloc(mass, (mass_size+10, sizeof(int)));
                    mass_size+=10;
                }
                printf("%d-%s\n", subject_key, subject);
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }

        fclose(file);
        free(mass);

    }

    void subjects_list_mid () {
        int counter = 0, *mass, mass_counter = 0, mass_size = 10, mid_counter = 0, subject_key_cor;
        bool test;
        float mid_num = 0;

        mass = (int*) calloc(mass_size, sizeof(int));
        file = fopen("sheet_list", "r+b");

        while (true) {
            test = true;
            fseek(file, size*counter+sizeof(int)+sizeof(name), SEEK_SET);
            fread(&subject_key, sizeof(int), 1, file);
            for (int i = 0; i < mass_counter; i++) {
                if(mass[i] == subject_key) {
                    test = false;
                    break;
                }
            }
            if (test) {
                mass[mass_counter] = subject_key;
                mass_counter++;
                if (mass_counter >= mass_size) {
                    mass = (int*) realloc(mass, (mass_size+10, sizeof(int)));
                    mass_size+=10;
                }
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }

        for (int j = 0; j < mass_counter; j++) {
            mid_num = 0; mid_counter = 0; counter = 0;
            while(true) {
                fseek(file, (sizeof(int)+30+size*counter), SEEK_SET);
                fread(&subject_key, sizeof(int), 1, file);
                if (subject_key == mass[j]) {
                    fseek(file, (45+2*sizeof(int)+counter*size), SEEK_SET);
                    fread(&mark, sizeof(int), 1, file);
                    mid_num+=mark;
                    mid_counter++;
                    fseek(file, counter*size+2*sizeof(int)+sizeof(name), SEEK_SET);
                    fread(&subject, sizeof(subject), 1, file);
                    fseek(file, (sizeof(int)+30+size*counter), SEEK_SET);
                    fread(&subject_key_cor, sizeof(int), 1, file);
                }
                counter++;
                if (fgetc(file) == EOF) break;
            }
            mid_num/=mid_counter;
            printf("%d-%s-%.1f\n", subject_key_cor, subject, mid_num);

        }

        fclose(file);
        free(mass);

    }

    void students_list_mid () {
        int counter = 0, *mass, mass_counter = 0, mass_size = 10, mid_counter, num_cor;
        bool test;
        float mid_num;

        mass = (int*) calloc(mass_size, sizeof(int));
        file = fopen("sheet_list", "r+b");

        while (true) {
            test = true;
            fseek(file, size*counter, SEEK_SET);
            fread(&num, sizeof(int), 1, file);
            for (int i = 0; i < mass_counter; i++) {
                if(mass[i] == num) {
                    test = false;
                    break;
                }
            }
            if (test) {
                mass[mass_counter] = num;
                mass_counter++;
                if (mass_counter >= mass_size) {
                    mass = (int*) realloc(mass, (mass_size+10, sizeof(int)));
                    mass_size+=10;
                }
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }

        for (int j = 0; j < mass_counter; j++) {
            mid_num = 0; mid_counter = 0; counter = 0;
            while(true) {
                fseek(file, size*counter, SEEK_SET);
                fread(&num, sizeof(int), 1, file);
                if (num == mass[j]) {
                    fseek(file, (45+2*sizeof(int)+counter*size), SEEK_SET);
                    fread(&mark, sizeof(int), 1, file);
                    mid_num+=mark;
                    mid_counter++;
                    fseek(file, counter*size+sizeof(int), SEEK_SET);
                    fread(&name, sizeof(name), 1, file);
                    fseek(file, size*counter, SEEK_SET);
                    fread(&num_cor, sizeof(int), 1, file);
                }
                counter++;
                if (fgetc(file) == EOF) break;
            }
            mid_num/=mid_counter;
            printf("%d-%s-%.1f\n", num_cor, name, mid_num);

        }

        fclose(file);
        free(mass);

    }

    void students_list_grants () {
        int counter = 0, *mass, mass_counter = 0, mass_size = 10, mid_counter, num_cor;
        bool test;
        float mid_num;

        mass = (int*) calloc(mass_size, sizeof(int));
        file = fopen("sheet_list", "r+b");

        while (true) {
            test = true;
            fseek(file, size*counter, SEEK_SET);
            fread(&num, sizeof(int), 1, file);
            for (int i = 0; i < mass_counter; i++) {
                if(mass[i] == num) {
                    test = false;
                    break;
                }
            }
            if (test) {
                mass[mass_counter] = num;
                mass_counter++;
                if (mass_counter >= mass_size) {
                    mass = (int*) realloc(mass, (mass_size+10, sizeof(int)));
                    mass_size+=10;
                }
            }
            counter++;
            if (fgetc(file) == EOF) break;
        }

        for (int j = 0; j < mass_counter; j++) {
            mid_num = 0; mid_counter = 0; counter = 0;
            while(true) {
                fseek(file, size*counter, SEEK_SET);
                fread(&num, sizeof(int), 1, file);
                if (num == mass[j]) {
                    fseek(file, (45+2*sizeof(int)+counter*size), SEEK_SET);
                    fread(&mark, sizeof(int), 1, file);
                    mid_num+=mark;
                    mid_counter++;
                    fseek(file, counter*size+sizeof(int), SEEK_SET);
                    fread(&name, sizeof(name), 1, file);
                    fseek(file, size*counter, SEEK_SET);
                    fread(&num_cor, sizeof(int), 1, file);
                }
                counter++;
                if (fgetc(file) == EOF) break;
            }
            mid_num/=mid_counter;
            if (mid_num >= X) printf("%d-%s\n", num_cor, name);


        }

        fclose(file);
        free(mass);

    }

};

#endif //TEMPPROJECT_SHEET_H
