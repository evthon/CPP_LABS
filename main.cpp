#include "windows.h"
#include <iostream>

using namespace std;
void task12_1() {
    int mas[10];
    int a[10][10];
    int s = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "  ";

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
        cout << mas[j] << "   ";

    }
}
void task12_2() {
    int mas[10];
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    };
    mas[0] = 1;
    cout << "Ответ: " << endl;
    for (int i = 0; i<10; i++) {
        mas[i] = 1;
        for (int j = 0; j<10; j++) {
            mas[i] *= a[j][i];
        }
        cout << mas[i] << " ";
    }
}
void task12_3() {
    int sum = 0;
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    };
    for (int i = 0; i < 10; i++) {
        if (a[i][i] > 0) {
            sum += a[i][i];
        }
    };
    cout << "Ответ = " << sum;
}
void task12_4() {
    int result = 0, N = 1;
    int a[10][10];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 4;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i<5; i++, N++) {
        for (int j = N; j<5; j++) {
            result += a[i][j];
        }
    }
    cout << "Ответ = " << result;
}

void task12_5() {
    int a[10][10];
    int sum = 0;
    int min = 0;
    int n = 0;
    int m = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10;
            sum += a[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    sum = sum / 2;
    int j = 0;
    for (int i = 0; i<10; i++) {
        if ((sum - a[i][j])<min) {
            min = sum - a[i][j];
            n = i;
            m = j;
        }
        cout << a[i][j] << " ";
        cout << a[i][j] << " ";
        cout << a[i][j] << " ";

    }
}
void task12_6() {
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
            a[i][j] = rand() % 10;
            cout << a[i][j] << "  ";

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
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
}
void task12_7() {
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
            a[i][j] = rand() % 10;
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        swap(a[i][k1], a[i][k2]);
    }
    cout << " новый массив" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
}
void task12_8() {
    int a[10][10];
    int m = 0;
    int k = -1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10 + 1;
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
    cout << " новый массив" << endl;
    for (int i = 0; i < 10; i++) {
        k++;
        for (int j = 0; j < k; j++)
        {
            m = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = m;
        }

    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
}
void task12_10() {
    int a[10][10];
    int b[10][10];
    int c[10][10];
    cout << " 1 массив" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 4;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << " 2 массив" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            b[i][j] = rand() % 4;
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << " новый массив" << endl;
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++) {
            c[i][j] = b[i][j] + a[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void task12_12() {
    double a[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j >= 0; j--) {
            a[i][j] = a[j][i] = (i + j) / (2.0*(j + i + 1));
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
}
void task12_9() {
    int result = 0, N = 1;
    int a[10][10];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 4;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << " новый массив" << endl;
    int sum = 0;
    int k = -1;
    for (int i = 0; i < 5; i++) {
        k++;
        for (int j = 0; j < k; j++)
        {
            a[i][j] = 0;
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
}
void task12_11() {
    int a[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 10 + 1;
            cout << a[i][j] << "  ";

        }
        cout << endl;
    }
    int mas[10];
    cout << " вектор" << endl;
    for (int i = 0; i < 10; i++) {
        mas[i] = a[i][i];
        cout << mas[i] << "  ";
    }
    cout << endl;
    cout << " новый массив " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            a[i][j] = a[i][j] / mas[i];
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите номер задания" << endl;
    int task = 0;
    cin >> task;

    switch (task) {
        case 1:
            task12_1();
            break;
        case 2:
            task12_2();
            break;
        case 3:
            task12_3();
            break;
        case 4:
            task12_4();
            break;
        case 5:
            task12_5();
            break;
        case 6:
            task12_6();
            break;
        case 7:
            task12_7();
            break;
        case 8:
            task12_8();
            break;
        case 9:
            task12_9();
            break;
        case 10:
            task12_10();
            break;
        case 11:
            task12_11();
            break;
        case 12:
            task12_12();
            break;
        case 0:
            task12_1();
            task12_2();
            task12_3();
            task12_4();
            task12_5();
            task12_6();
            task12_7();
            task12_8();
            task12_9();
            task12_10();
            task12_11();
            task12_12();

        default:
            cout << "Неверный номер задания" << endl;
            break;

    }
}



