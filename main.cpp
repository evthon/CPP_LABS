#include <iostream>
using namespace std;

void task1_1 (double num1, double num2) {

    cout << "This function with double numbers types" << endl;
    if (num1 > num2) {
        cout << "1 number larger than 2 number";
    } else if (num1 == num2) {
        cout << "1 number equals 2 number";
    } else {
        cout << "1 number less than 2 number";
    }

}

void task1_2 (int num1, int num2) {

    cout << "\nThis function with double numbers types" << endl;
    if (num1 > num2) {
        cout << "1 number larger than 2 number";
    } else if (num1 == num2) {
        cout << "1 number equals 2 number";
    } else {
        cout << "1 number less than 2 number";
    }

}

template <typename T1>
void task2 (T1 num1, T1 num2) {

    if (num1 > num2) {
        cout << "1 number larger than 2 number";
    } else if (num1 == num2) {
        cout << "1 number equals 2 number";
    } else {
        cout << "1 number less than 2 number";
    }

}

template <typename T2>
T2 task3 (T2 num1, T2 num2) {

    if (num1 > num2) {
        cout << "1 number larger than 2 number";
    } else if (num1 == num2) {
        cout << "1 number equals 2 number";
    } else {
        cout << "1 number less than 2 number";
    }

}

template <typename T3>
void task5 () {

}

int main() {
    int N, num1, num2;

    cout << "Task: ";
    cin >> N;
    cout << "Input the numbers: " << endl;
    cin >> num1;
    cin >> num2;
    switch (N) {
        case 1:
            task1_1(num1,num2);
            task1_2(num1,num2);
            break;
        case 2:
            task2(num1, num2);
            break;
        case 3:
            task3(num1, num2);
            break;
    }

    return 0;
}