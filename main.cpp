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

template <typename T5>
void task5 (T5* mass, int length, T5 num) {
    int result;

    for (int i = 0; i < length; i++) {
        if (mass[i] > num) result++;
    }
    cout << "Result = " << result;

}

template <typename T6>
T6* task6 (T6 t) {
    int n;T6* mass;

    cout << "Length of mass: ";
    cin >> n;
    mass = new T6[n];

    return mass;
}

int main() {
    int N, num1, num2;

    cout << "Task: ";
    cin >> N;
    switch (N) {
        case 1:
            cout << "Input the numbers: " << endl;
            cin >> num1;
            cin >> num2;
            task1_1(num1,num2);
            task1_2(num1,num2);
            break;
        case 2:
            cout << "Input the numbers: " << endl;
            cin >> num1;
            cin >> num2;
            task2(num1, num2);
            break;
        case 3:
            cout << "Input the numbers: " << endl;
            cin >> num1;
            cin >> num2;
            task3(num1, num2);
            break;
        case 5:
            double* mass;
            mass = new double[5];
            for (int i = 0; i < 5; ++i) {
                mass[i] = i*2;
                cout << mass[i] << " ";
            }
            task5(mass, 5, 3.0);
            break;
        case 6:
            double *mass1, t=0;
            mass1 = task6(t);
            mass1[0] = 1.46;
            cout << mass1[0];
            break;
    }

    return 0;
}