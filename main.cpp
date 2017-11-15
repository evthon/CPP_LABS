#include <iostream>
#include "windows.h"
using namespace std;

void task1() {
    int a,b,P,S;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    S = a*b;
    P = (a+b)*2;
    cout << "Площадь = " << S << endl << "Периметр = " << P << endl;
}

void task2() {
    double r,L,S;
    cout << "Введите d: ";
    cin >> r;
    r=r/2;
    S = 3.14*r*r;
    L = 2*3.14*r;
    cout << "Площадь = " << S << endl << "Длина окружрости = " << L << endl;
}

void task3() {
    double r1,r2,S1,S2,S12;
    cout << "Введите R1: ";
    cin >> r1;
    cout << "Введите R2: ";
    cin >> r2;
    S1 = 3.14*r1*r1;
    S2 = 3.14*r2*r2;
    S12 = S1-S2;
    cout << "Площадь первого круга = " << S1 << endl << "Площадь второго круга = " << S2 << endl << "Площадь кольца = " << S12 << endl;
}

void task4() {
    int a,b,sum;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    sum = (a+b)/2;
    cout << "Ответ = " << sum;
}

void task5() {
    int a,b,c,sum;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    sum = (a+b+c)/3;
    cout << "Ответ = " << sum;
}

void task6() {
    float x,a,y,price;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите A: ";
    cin >> a;
    price = a/x;
    cout << "Один кг стоит: " << price << endl;
    cout << "Введите Y: ";
    cin >> y;
    price*=y;
    cout << "Y килограм стоит: " << price;
}

void task7() {
    float V, T, S;
    cout << "Введите V: ";
    cin >> V;
    cout << "Введите T: ";
    cin >> T;
    S = V*T;
    cout << "Растояние = " << S << endl;
}

void task8() {
    int H=17, t=1, S;
    S = (10*t*t)/2;
    S = H-S;
    cout << "Ответ = " << S;
}

void task9() {
    float V1,T,V2,S1,S2,S12;
    cout << "Введите V1: ";
    cin >> V1;
    cout << "Введите V2: ";
    cin >> V2;
    cout << "Введите T: ";
    cin >> T;
    S1 = V1*T;
    S2 = V2*T;
    S12 = S1-S2;
    cout << "Если в одну сторону: " << S12 << endl;
    S12 = S1+S2;
    cout << "Если в разные стороны: " << S12 << endl;
}

void task10() {
    float TemF, TemC;
    cout << "Введит темературу в градусах Фаренгейта: ";
    cin >> TemF;
    TemC = (TemF-32)*5/9;
    cout << "Температура по Цельсию = " << TemC;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите номер задания: ";
    cin >> n;
    switch(n) {
        case 1: {
            task1();
            break;
        }
        case 2: {
            task2();
            break;
        }
        case 3: {
            task3();
            break;
        }
        case 4: {
            task4();
            break;
        }
        case 5: {
            task5();
            break;
        }
        case 6: {
            task6();
            break;
        }
        case 7: {
            task7();
            break;
        }
        case 8: {
            task8();
            break;
        }
        case 9: {
            task9();
            break;
        }
        case 10: {
            task10();
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}