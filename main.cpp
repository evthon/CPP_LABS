#include <iostream>
#include "windows.h"
using namespace std;

void task1() {
    int mas[10];
    int a[10][10];
    int s = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 100 - 50;
            cout << a[i][j]<< " " ;

        }
        cout << endl;
    }
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++)
        {
            s += a[j][i];
        }
        mas[j] = s;
        cout << mas[j] << endl;

    }
}

void task3() {
    int result = 0;
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 100 - 50;
            cout << a[i][j] << " ";
        }
        cout << endl;
    };
    for (int i = 0; i < 10; i++) {
        result += a[i][i];
    };
    cout << "Ответ = " << result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;
    cout << "Введите номер задания: ";
    cin >> a;
    switch (a) {
        case 1: {
            task1();
            break;
        }
        case 3: {
            task3();
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}