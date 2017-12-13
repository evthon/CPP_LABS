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

void task8(int n,float *test) {

}

int main() {
    int a;
    cout << "Введите номер задания: ";
    cin >> a;
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
        case 7:
            float *pointr;
            int n = 0;
            cin >> n;
            float testVal[n];
            pointr = testVal;
            task7(n, pointr);
            int i = 0;
            for (i = 0; i < n; i++) {
                cout << i << " :" << pointr[i] << endl;
            }
            break;
    }
    return 0;
}