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
            a[i][j] = rand() % 10;
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
        s = 0;
        cout << mas[j] << endl;

    }
}

void task2() {
    int result[10];
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 100 - 50;
            cout << a[i][j] << " ";
        }
        cout << endl;
    };
    result[0]=1;
    cout << "Ответ: " << endl;
    for (int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            result[i]*=a[j][i];
        }
        result[i+1] = 1;
        cout << result[i] << " ";
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
        if(a[i][i] > 0) {
            result += a[i][i];
        }
    };
    cout << "Ответ = " << result;
}

void task4() {
    int result = 0, N=1;
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 4;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<10; i++, N++) {
        for(int j=N; j<10; j++ ) {
            result+=a[i][j];
        }
    }
    cout << "Ответ = " << result;
}

void task6() {
    int mas[10];
    int a[10][10];
    int s = 0;
    int k1 = 0;
    int k2 = 0;
    cout << " введите k1" << endl;
    cin >> k1;
    cout << " введите k2" << endl;
    cin >> k2;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10 ;
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        swap(a[k1][i], a[k2][i]);
    }
    cout << " новый массив" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
}
void task7() {
    int mas[10];
    int a[10][10];
    int s = 0;
    int k1 = 0;
    int k2 = 0;
    cout << " введите k1" << endl;
    cin >> k1;
    cout << " введите k2" << endl;
    cin >> k2;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++) {
        swap(a[i][k1], a[i][k2]);
    }
    cout << " новый массив" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
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
        case 2: {
            task2();
            break;
        }
        case 3: {
            task3();
            break;
        }
        case 4: {
            task4();
            break;
        }
        case 6: {
            task6();
            break;
        }
        case 7: {
            task7();
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}