#include <iostream>
using namespace std;

struct myComplex {
    double Rl, Im;

    void input() {
        cout << "Input the real part: ";
        cin >> Rl;
        cout << endl << "Input the imaginary part: ";
        cin >> Im;
    }
    void output() {
        cout << Rl << " + " << Im;
    }
    void num00() {
        Rl = 0;
        Im = 0;
    }
    void num10() {
        Rl = 1;
        Im = 0;
    }
    void num01() {
        Rl = 0;
        Im = 1;
    }
} ;

myComplex task6(myComplex num1, myComplex num2, int N) {

    switch (N) {
        case 1:
            num1.Rl += num2.Rl;
            num1.Im += num2.Im;
            return num1;
        case 2:
            num1.Rl -= num2.Rl;
            num1.Im -= num2.Im;
            return num1;
        case 3:
            num1.Rl *= num2.Rl;
            num1.Im *= num2.Im;
            return num1;
        case 4:
            num1.Rl /= num2.Rl;
            num1.Im /= num2.Im;
            return num1;
    }
}

void task2() {
        myComplex number, *point_number = &number;

        point_number->Rl = 2;
        point_number->Im = 1.723;
        cout << point_number->Rl << " + " << point_number->Im;
}

void task5() {
    myComplex number;

    number.input();
    number.output();
    number.num10();
    number.output();
}

int main() {
    int N;

    cout << "Task: ";
    cin >> N;

    switch (N) {
        case 2:
            task2();
            break;
        case 5:
            task5();
            break;
        case 6:
            myComplex a, b;
            a.num10();
            b.num01();
            task6(a, b, 1).output();
            break;
    }


    return 0;
}