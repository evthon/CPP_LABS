#include <iostream>
#define file_name "test.txt"
#include <cmath>
#define kub(a) sqrt(a*a*a)
using namespace std;

void task1() {
    float element = 0.5;
    float arr[10];
    FILE *file;
    file = fopen(file_name, "wb");
    for (int i=0; i<10; i++) {
        arr[i] = element;
        element*=2*(i+1);
        fwrite(&arr[i], sizeof(float), 1, file);
    }
    fclose(file);
}

void task2() {
    float arr[10];
    FILE *file;
    file = fopen(file_name, "rb");
    fread(arr, sizeof(float), 10, file);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    fclose(file);
}

void task3() {
    float arr[10];
    FILE *file;
    int i = 0;
    file = fopen(file_name, "rb");
    while(!feof(file)) {
        fread(&arr[i], sizeof(float), 1, file);
        i++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    fclose(file);
}

void task4() {
    float arr[10];
    FILE *file;
    FILE *result_file;
    int i = 0;
    file = fopen(file_name, "rb");
    result_file = fopen("result.txt", "wt");
    while(!feof(file)) {
        fread(&arr[i], sizeof(float), 1, file);
        cout << arr[i] << " ";
        fprintf_s(result_file, "%.3f\n" , arr[i]);
        i++;
    }
    fclose(file);
    fclose(result_file);
}

void task5() {
    int number;
    float entry;
    FILE *file;
    file = fopen(file_name, "rb+");
    cout << "Input the elemint number in array: "; cin >> number;
    fseek(file, sizeof(float)*number, SEEK_SET);
    cout << "Input element: "; cin >> entry;
    fwrite(&entry, sizeof(float), 1, file);
    fclose(file);
    task3();
}

void task6() {
    FILE *file;
    file = fopen(file_name, "rb");
    float a;
    for (int i = 0; i < 5; i++) {
        fseek(file, (sizeof(float)*i*-1), SEEK_END);
        fread(&a, sizeof(float), 1, file);
        cout << a << " ";
    }
    fclose(file);
}

void task7() {
    int a = kub(3);
    cout << a;
}


int main() {
    int N;
    cout << "Input the task number: ";
    cin >> N;

    switch (N) {
        case 1:
            task1();
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
        case 7:
            task7();
            break;
        case 8:
           cout << kub(2);
    }

    return 0;
}