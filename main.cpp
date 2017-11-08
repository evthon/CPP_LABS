#include <iostream>
using namespace std;

int pow(int num, int power) {
    int curPow = 1;
    while (curPow < power) {
        num = num * num;
        curPow++;
    }
    return num;
}

void task9_1() {
    cout << "Type a:" << endl;
    int a = 0;
    scanf("%d", &a);
    cout << "Type b:" << endl;
    int b = 0;
    scanf("%d", &b);

    int progress = 0;

    int amount = 0;

    while (progress < a) {
        if (progress + b < a) {
            progress += b;
            amount++;
        } else {
            break;
        }
    }

    int freeSpace = a - progress;

    cout << "amount: " << amount << endl;
    cout << "free space: " << freeSpace << endl;
}

void task9_2() {
    cout << "Type a:" << endl;
    int a = 0;
    scanf("%d", &a);
    cout << "Type b:" << endl;
    int b = 0;
    scanf("%d", &b);

    int ch = 0;
    while (a >= b) {
        a = a - b;
        ch++;
    }
    cout << "result: " << ch << endl;
    cout << "rest: " << a << endl;
}

void task9_3() {
    cout << "Type n:" << endl;
    int n = 0;
    int k = 1;

    scanf("%d", &n);

    if (n > 1) {
        while (pow(3,k) < n) {
            cout << "pow (3," << k << ") = " << pow(3,k) << endl;
            k++;
        }
    }
    cout << "result: " << k << endl;
}

void task9_4() {
    float a = 0;
    cout << "Type a" << endl;
    scanf("%f", &a);

    float s = 0;
    float k = 1;

    while (s < a) {
        cout << "sum " << s << endl;
        s = s + 1 / k;
        k++;
    }
    cout << "max к " << k << endl;
    cout << "sum " << s << endl;
}

void task9_5() {
    float cash = 1000;

    float percent = 4;

    percent = percent / 100;

    int months = 0;

    while (cash <= 1100) {
        cout << cash << endl;
        cash = cash * (1 + percent);
        months++;
    }

    cout << "months: " << months << endl;
    cout << "amount: " << cash << endl;
}

void task9_6() {
    int a = 0;
    int b = 0;
    cout << "Type a:" << endl;
    scanf("%d", &a);
    cout << "Type b:" << endl;
    scanf("%d", &b);
    int nod = 0;
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    cout << "result: " << a << endl;
}

int main() {

    setlocale(LC_ALL, "RUS");

    int command = 0;

    scanf("%d", &command);

    cout << "Task " << command << endl;

    switch (command) {
        case 1:
            task9_1();
            break;
        case 2:
            task9_2();
            break;
        case 3:
            task9_3();
            break;
        case 4:
            task9_4();
            break;
        case 5:
            task9_5();
            break;
        case 6:
            task9_6();
            break;
    }
    return 0;
}