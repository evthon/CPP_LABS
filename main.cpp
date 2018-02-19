#include <iostream>
#define file_name "test.txt"
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
    result_file = fopen("result.txt", "w");
    while(!feof(file)) {
        fread(&arr[i], sizeof(float), 1, file);
        printf_s(result_file, )
        i++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    fclose(file);
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
    }

    return 0;
}