#include <iostream>
using namespace std;

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

int pow(int num, int power) {
    int curPow = 1;
    while (curPow < power) {
        num = num * num;
        curPow++;
    }
    return num;
}

void task9_3() {
    cout << "Type n:" << endl;
    int n = 0;
    int k = 0;

    scanf("%d", &n);

    if (n > 1) {
        while (pow(3,k) < n) {
            k++;
        }
    }
    k--;
    cout << "result: " << k << endl;
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
        case 3:
            task9_3();
            break;
        case 5:

            break;
        case 7:

            break;
    }
    return 0;
}