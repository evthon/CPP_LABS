#include <iostream>
using namespace std;

void task6(int a, int b, int c) {
    int temp = 0;

    bool passed = false;

    while (!passed) {
        passed = true;
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
            passed = false;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
            passed = false;
        }
    }
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}

void task7() {

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
            cin >> a;
            cin >> b;
            cin >> c;
            task6(a,b,c);
            break;
        default:
            break;
    }
    return 0;
}