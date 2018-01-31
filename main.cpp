#include <iostream>
using namespace std;

void task1() {

    FILE *testFile;

    testFile =  fopen(R"(D:\MyProject\University\C++\test.txt)", "w");

    fprintf_s(testFile, "Hello");

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
    float y;
    testFile =  fopen(R"(D:\MyProject\University\C++\test.txt)", "a");
    fprintf_s(testFile, "\n X    Y\n");
    for (int i=0; i<=5; i++) {
        fprintf_s(testFile, "%d   ", i);
        y = 2*i/3;
        fprintf_s(testFile, "%f\n", y);
    }
    fclose(testFile);
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

    }


    return 0;
}