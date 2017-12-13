#include <iostream>
using namespace std;

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

void task7(int n,float *arr) {
    int i = 0;
    arr[0] = 0.5;
    for (i = 1; i < n; i++) {
        arr[i] = (i+1.0)/(2.0 * i);
        cout << i << ": " << arr[i] << endl;
    }
}

void task8(int n,float *arr, int *minVal, int *maxVal) {
    *minVal = arr[0];
    *maxVal = arr[0];
    for (int i = 0; i < n; i++) {
        cout << "arr = " << arr[i] << endl;
        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
        }
        if (arr[i] < *minVal) {
            *minVal = arr[i];
        }
    }
}

int main() {
    int a;
    cout << "Введите номер задания: ";
    cin >> a;

    float *arr_pointer;
    int n = 0;
    int i = 0;
    int maxVal = 0;
    int minVal = 0;
    float positiveSum = 0;
    switch (a) {
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
            float task8arr[n];
            for (i = 0; i < n; i++) {
                cout << "arr[" << i << "]:" << endl;
                cin >> task8arr[i];
            }
            arr_pointer = task8arr;
            task8(n, arr_pointer, point_min_val, point_max_val);
            cout << "min: " << minVal << endl;
            cout << "max: " << maxVal << endl;
            break;
        }
    }
    return 0;
}