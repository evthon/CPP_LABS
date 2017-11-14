#include <iostream>

using namespace std;

void Task_6_1() {
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

void Task_6_2() {
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

void Task_6_3() {
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

void Task_6_4() {
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
    cout << "рассотяние от a до b: " << distAtoB << endl;

    distAtoC = (cX - aX) + (cY - aY);
    cout << "рассотяние от a до c: " << distAtoC << endl;

    if (distAtoB < distAtoC) {
        cout << "b ближе к a";
        cout << "координаты b: (" << bX << "," << bY <<")" << endl;
    } else {
        cout << "c ближе к a";
        cout << "координаты c: (" << cX << "," << cY <<")" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");

    Task_6_1();
    //Task_6_2();
    //Task_6_3();
    //Task_6_4();

    return 0;
}