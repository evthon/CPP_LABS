#include <iostream>
#include "windows.h"
#include "math.h"
using namespace std;

void task1(int *x, int *y) {
    if (*x<0) {
        *y = -2.0 / *x;
    }
    if ((*x >= 3) && (*x <= 9)) { ;
        *y = (*x)*(*x)*(*x);
    }
    if (*x >= 9) {
        *y = -*x;
    }
    if ((*x >= 0) && (*x<3)) {
        *y = 26.2;
    }
}

void task6(int *a, int *b, int *c) {
    int temp = 0;

    while (true) {
        if (*a > *b) {
            temp = *a;
            *a = *b;
            *b = temp;
        }
        if (*b > *c) {
            temp = *b;
            *b = *c;
            *c = temp;
        } else {
            break;
        }
    }
}

void task2(int *n, int *sum) {
    for (int i = 1; i <= *n; i++) {
        *sum += (i + 1.0) / (2.0*i);
    }
}

void task3(int *d, int *k) {
    *k = ((*k)*10) + *d;
}

void task4(int *x, int *y) {
    int z = 0;
    z = *x;
    *x = *y;
    *y = z;
}

double task5(int *x, int *y) {
    double average1 = 0;
    double average2 = 0;
    average1 = (*x + *y) * 1.0 / 2;
    average2 = sqrt(*x * (*y));
    *x = average1;
    *y = average2;
}

void task7(int n,float *test) {
    int i = 0;
    test[0] = 0.5;
    for (i = 1; i < n; i++) {
        test[i] = (i+1.0)/(2.0 * i);
        cout << i << ": " << test[i] << endl;
    }
}

void task8(int n,float *arr, int *minVal, int *maxVal, float *posSum) {
    *minVal = arr[0];
    *maxVal = arr[0];
    for (int i = 0; i < n; i++) {
        cout << "arr = " << arr[i] << endl;
        if (arr[i] > 0) {
            *posSum += arr[i];
        }
        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
        }
        if (arr[i] < *minVal) {
            *minVal = arr[i];
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;
    cout << "Введите номер задания: ";
    cin >> a;
    float *arr_pointer;
    int n = 0;
    int i = 0;
    int maxVal = 0;
    int minVal = 0;
    float positiveSum = 0;
    int x, y, *p_x, *p_y;
    switch (a) {
        case 1:
            p_x = &x;
            p_y = &y;
            cout << "Введите Х: ";
            cin >> x;
            task1(p_x, p_y);
            cout << "Ответ = " << y;
            break;
        case 2:
            p_x = &x;
            p_y = &y;
            cout << "Введите Х: ";
            cin >> x;
            task2(p_x, p_y);
            cout << "Ответ = " << y;
            break;
        case 3:
            p_x = &x;
            p_y = &y;
            cout << "Введите D: ";
            cin >> x;
            cout << "Введите K: ";
            cin >> y;
            task3(p_x, p_y);
            cout << "Ответ = " << y;
            break;
        case 4:
            p_x = &x;
            p_y = &y;
            cout << "Введите x: ";
            cin >> x;
            cout << "Введите y: ";
            cin >> y;
            task4(p_x, p_y);
            cout << "X = " << x << "   ";
            cout << "Y= " << y;
            break;
        case 5:
            p_x = &x;
            p_y = &y;
            cout << "Введите x: ";
            cin >> x;
            cout << "Введите y: ";
            cin >> y;
            task5(p_x, p_y);
            cout << "Арифметическое = " << x << "   ";
            cout << "Геометрическое = " << y;
            break;
        case 6:
            int a;
            int b;
            int c;
            cout << "type a" << endl;
            cin >> a;
            cout << "type b" << endl;
            cin >> b;
            cout << "type c" << endl;
            cin >> c;
            int *point_a;
            point_a = &a;
            int *point_b;
            point_b = &b;
            int *point_c;
            point_c = &c;

            task6(point_a, point_b, point_c);

            cout << "a: " << a << " b: " << b << " c: " << c << endl;
            break;
        case 7: {
            cout << "n:" << n << endl;
            cin >> n;
            float task7arr[n];
            arr_pointer = task7arr;
            task7(n, arr_pointer);
            for (i = 0; i < n; i++) {
                cout << i << " :" << arr_pointer[i] << endl;
            }
            break;
        }
        case 8: {
            cout << "type n" << endl;
            cin >> n;
            int *point_max_val = &maxVal;
            int *point_min_val = &minVal;
            float *pointer_pos_sum = &positiveSum;
            float task8arr[n];
            for (i = 0; i < n; i++) {
                cout << "arr[" << i << "]:" << endl;
                cin >> task8arr[i];
            }
            arr_pointer = task8arr;
            task8(n, arr_pointer, point_min_val, point_max_val, pointer_pos_sum);
            cout << "min: " << minVal << endl;
            cout << "max: " << maxVal << endl;
            cout << "positive sum: " << positiveSum << endl;
            break;
        }
    }
    return 0;
}