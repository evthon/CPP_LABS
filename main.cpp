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


int main() {
    int N;
    cout << "Input the task number: ";
    cin >> N;

    switch (N) {
        case 1:
            task1();
    }

    return 0;
}