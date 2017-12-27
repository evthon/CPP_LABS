#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

void task1() {
    int a = 0;
    cout << "Введите a: " << endl;
    scanf("%d", &a);

    int b = 0;
    cout << "Введите b: " << endl;
    scanf("%d", &b);

    int c = 0;
    cout << "Введите c: " << endl;
    scanf("%d", &c);

    int maxVal = a;
    char max = 'a';

    if (b > maxVal) {
        maxVal = b;
        max = 'b';
    }

    if (c > maxVal) {
        maxVal = c;
        max = 'c';
    }

    cout << "наибольшее число: " <<  max << " (" << maxVal << ")" << endl;
}

void task2() {
    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;

    cout << "Введите a: " << endl;
    scanf("%d", &a);

    cout << "Введите b: " << endl;
    scanf("%d", &b);

    cout << "Введите c: " << endl;
    scanf("%d", &c);

    for (;;) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
            continue;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
            continue;
        }
        break;
    }

    cout << "Отсортировано: " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
}

void task3() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cout << "Введите a: " << endl;
    scanf("%d", &a);

    cout << "Введите b: " << endl;
    scanf("%d", &b);

    cout << "Введите c: " << endl;
    scanf("%d", &c);

    cout << "Введите d: " << endl;
    scanf("%d", &d);

    cout << "Введите e: " << endl;
    scanf("%d", &e);

    cout << "Числа, меньше чем a (" << a << "), но больше или равны b (" << b << "):" << endl;
    if (b < a) {
        cout << "b" << endl;
    }
    if (c < a && c >= b) {
        cout << "c" << endl;
    }
    if (d < a && d >= b) {
        cout << "d" << endl;
    }
    if (e < a && e >= b) {
        cout << "e" << endl;
    }
}

void task4() {
    float aX = 0;
    float aY = 0;

    float bX = 0;
    float bY = 0;

    float cX = 0;
    float cY = 0;

    float distAtoB;
    float distAtoC;

    cout << "Введите a (X): " << endl;
    scanf("%f", &aX);

    cout << "Введите a (Y): " << endl;
    scanf("%f", &aY);

    cout << "Введите b (X): " << endl;
    scanf("%f", &bX);

    cout << "Введите b (Y): " << endl;
    scanf("%f", &bY);

    cout << "Введите c (X): " << endl;
    scanf("%f", &cX);

    cout << "Введите c (Y): " << endl;
    scanf("%f", &cY);

    distAtoB = (bX - aX) + (bY - aY);
    if(distAtoB<0) distAtoB*=-1;
    cout << "рассотяние от a до b: " << distAtoB << endl;

    distAtoC = (cX - aX) + (cY - aY);
    if(distAtoC<0) distAtoC*=-1;
    cout << "рассотяние от a до c: " << distAtoC << endl;

    if (distAtoB < distAtoC) {
        cout << "b ближе к a" << endl;
        cout << "координаты b: (" << bX << "," << bY <<")" << endl;
    } else {
        cout << "c ближе к a" << endl;
        cout << "координаты c: (" << cX << "," << cY <<")" << endl;
    }
}

void task5() {
    int X, Y, Y1, Y2, Y3, X1, X2, X3;
    cout << "Введите кординнаты первой точки:" << endl;
    cin >> X1;
    cin >> Y1;
    X = X1;
    Y = Y1;
    cout << "Введите координаты второй точки:" << endl;
    cin >> X2;
    cin >> Y2;
    if(X2>X) X=X2;
    if(Y2>Y) Y=Y2;
    cout << "Введите координаты третьей точки:" << endl;
    cin >> X3;
    cin >> Y3;
    if(X3>X) X=X3;
    if(Y3>Y) Y=Y3;
    cout << "Координаты четвертой точки: (" << X << ";" << Y << ")";
}

void task6() {
    int x;
    float y;
    cout << "Введите X: ";
    cin >> x;
    if (x<=0) {
        y=0;
    } else if (x>=2 && x<8) {
        y=x*x;
    } else if (x>=8) {
        y=x;
    } else {
        y=-1.2;
    };
    cout << "Y = " << y;
}

void task7() {
    int x;
    float y;
    cout << "Введите X: ";
    cin >> x;
    if (x<=0) {
        y=-2/x;
    } else if (x>3 && x<9) {
        y=x*x*x;
    } else if (x>=9) {
        y=-x/3;
    } else {
        y=26.2;
    };
    cout << "Y = " << y;
}

void task8() {
    float x, y;
    cout << "Введите X: ";
    cin >> x;
    if (x<=0) {
        x*=-1;
        y=-2/x;
    } else if (x>3 && x<9) {
        y=sin(x)-1/x;
    } else if (x>=9) {
        y=cos(x)+1/x;
    } else {
        y=26.2;
    };
    cout << "Y = " << y;
}

void task9() {
    int Ng;
    cout << "Введите N: ";
    cin >> Ng;
    if (!(Ng%100) && Ng%400) {
        cout << "В году 365 дней";
    } else if (!Ng%4) {
        cout << "В году 365 дней";
    } else {
        cout << "В году 366 дней";
    };
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N;
    cout << "Задание: ";
    cin >> N;
    switch(N) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            task7();
            break;
        case 8:
            task8();
            break;
        case 9:
            task9();
            break;
        default:
            break;
    };
    return 0;
}