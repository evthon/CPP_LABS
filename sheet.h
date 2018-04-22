//
// Created on 4/22/2018.
//

#ifndef TEMPPROJECT_SHEET_H
#define TEMPPROJECT_SHEET_H

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
                printf("\nMiddle mark = %f\n", mid_num);
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
            if (fgetc(file) == EOF) break;
        }

    }

};

#endif //TEMPPROJECT_SHEET_H
