#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

void task1() {

    FILE *testFile;

    testFile =  fopen(R"(D:\MyProject\University\C++\test.txt)", "w");

    fprintf_s(testFile, "Hello\n");

    fclose(testFile);
}

void  task2() {
    FILE *testFile;
    char arr[] = "21-10-18\n";
    char *arr_point = arr;
    testFile =  fopen(R"(D:\MyProject\University\C++\test.txt)", "a");
    fprintf_s(testFile, arr_point);
    fclose(testFile);
}

void task3() {
    FILE *testFile;
    double y;
    testFile =  fopen(R"(D:\MyProject\University\C++\test.txt)", "a");
    fprintf_s(testFile, " X    Y\n");
    for (int i=0; i<=5; i++) {
        fprintf_s(testFile, "%d   ", i);
        y = 2*i/3.0;
        y = int(y*1000)/1000.0;
        cout << endl;
        fprintf_s(testFile, "%.3f\n", y);
    }
    fclose(testFile);
}

void task4() {
    FILE *testFile = fopen(R"(D:\MyProject\University\C++\test.txt)", "rt");
    char arr[50], arr1[50];
    if (testFile == nullptr) {
        printf_s("Error reading the file");
    } else {
        while (!feof(testFile)) {
            fscanf(testFile,"%s%s",arr, arr1);
            printf_s("%s   %s\n", arr, arr1);
        }
    }
    fclose(testFile);
}

void task5() {
    double A = 0, B = 2, X = 0.01;
    double (*sinn)(double);
    sinn = sin;
    FILE *tableFile = fopen(R"(D:\MyProject\University\C++\table.csv)", "w");

    for (A;A<=B;A+=X) {
        fprintf_s(tableFile,"%f\n", sinn(A*PI));
    }

    fclose(tableFile);
}

void task6() {
    float a, b, X; int A = 28; char filename[20]; char path[100] = "D:\\MyProject\\University\\C++\\",  path_end[] = ".txt";
    double (*sinn)(double);
    sinn = sin;

    cout << "Input the name of the settings file: ";
    cin >> filename;
    for (int i=0; i<20; i++) {
        if((int)filename[i]>65 && (int)filename[i]<122) {
            path[A] = filename[i];
            cout << filename[i] << endl;
            A++;
        }
    }
    for (int i=0; i<4; i++, A++) {
        path[A] = path_end[i];
    }
    cout << endl << path;

    FILE *settingsFile = fopen(path, "rt");
    if (settingsFile == nullptr) {
        cout << endl << "error reading the file";
    } else {
        fscanf(settingsFile, "%f %f %f", &a, &b, &X);

        cout << endl << a << "   " << b << "   " << X << endl;

        FILE *tableFile = fopen(R"(D:\MyProject\University\C++\table.csv)", "w");

        for (a;a<=b;a+=X) {
            fprintf_s(tableFile,"%f\n", sinn(a*PI));
        }

        fclose(tableFile);
        fclose(settingsFile);
    }

}

int main() {
    int N;
    cout << "Task: ";
    cin >> N;

    switch (N) {
        case 1:
            task1();
            break;
        default:
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
    }


    return 0;
}