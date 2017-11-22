#include <iostream>
#include "windows.h"
using namespace std;

int pow(int a, int s) {
    int a1 = a;
    for(int i=1; i<s; i++) {
        a1*=a;
    }
    return a1;
}

void task10_1() {
    int a = 1;
    int x = 0;
    int max = 0;
    int min = 0;
    int nmax = 0;
    int nmin = 0;
    cout << " кол-во чисел" << endl;
    int n = 0;
    int b = 0;
    cin >> n;
    while (a < n) {
        int x = rand() % 100 - 50;
        cout << x << endl;
        if (x > max) {
            max = x;
            nmax = a;
        }
        if (x < min) {
            min = x;
            nmin = a;
        }
        a++;
    }
    cout << "максимум " << max << endl;
    cout << "№ максимум " << nmax << endl;
    cout << "минимум " << min << endl;
    cout << "№ минимум " << nmin << endl;
}

void task10_2() {
    int a = 1;
    int x = 0;
    int max = 0;
    int nmax = 0;
    int b = 0;
    int c = 0;
    cout << " кол-во чисел" << endl;
    int n = 0;
    cin >> n;
    cout << " B: " << endl;
    cin >> b;
    cout << "C: " << endl;
    cin >> c;

    while (a < n) {
        int x = rand() % 100 ;
        cout << x << endl;
        if (x<c && x>b) {

            if (x > max) {
                max = x;
                nmax = a;
            }
        }

        a++;
    }

    cout << "максимум " << max << endl;
    cout << "№ максимум " << nmax << endl;
}

void task10_3() {
    cout << "n:" << endl;
    int n = 0;
    cin >> n;

    int min = 1000;
    int max = 0;

    int curNum = 1;

    int randNum = 0;

    int extreme;

    while (curNum <= n) {
        randNum = rand()%1000-1;
        cout << "num: " << randNum << endl;
        if (randNum > max) {
            max = randNum;
            extreme = max;
        }
        if (randNum < min) {
            min = randNum;
            extreme = min;
        }
        curNum++;
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    cout << "EXTREME: " << extreme << endl;
}

void task10_4() {
    cout << "n:" << endl;
    int n = 0;
    cin >> n;
    float i = 1;

    float sum = 0;

    while (i <= n) {
        sum += (i + 1)/(2*i);
        i++;
    }

    cout << "result: " << sum << endl;
}

void task10_5() {
    int n, a, d, check;

    cout << "n:" << endl;
    cin >> n;

    cout << "a:" << endl;
    cin >> a;

    cout << "d:" << endl;
    cin >> d;

    int i = 0;

    float f[15];

    while (i < 15) {
        cout << "f[" << i << "]:" << endl;
        cin >> f[i];
        i++;
    }

    i = 0;

    while (i < 15) {
        f[i] = rand()%10;
        check = a/d;
        if (f[i] == check) {
            cout << "f[" << i << "] == " << check;
        }
        d *= d;
        i++;
    }
}

void task10_6() {
    int N1, N2, F1=1, F2=1, k;
    float K=3, F3;
    cout << "N1: ";
    cin >> N1;
    cout << "N2: ";
    cin >> N2;
    float mass[20];
    for(k=0; k<20; k++, K++) {
        F3=F1+F2;
        mass[k]=F3/K;
        F1=F2; F2=F3;
    }
    for(N1; N1<=N2; N1++) {
        cout << mass[N1] << " ";
    }

}

void task10_7() {
    float mass[10], I=0, sum=0;
    for(int i=0; i<10; i++) {
        mass[i]=4*I/5;
        sum+=mass[i];
        cout << mass[i] << " ";
        I++;
    };
    cout << endl << "Сумма = " << sum;
}

void task10_8() {
    double mass[10] ={1}, sum=0;
    for(int i=1; i<10; i++) {
        mass[i] = pow(-1,i)*mass[i-1]/3.0;
        cout << mass[i] << " ";
        sum+=mass[i];
    };
    cout << endl << "Сумма = " << sum;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int command = 0;
    cout << "Task: ";
    cin >> command;
    cout << "Task " << command << endl;

    switch (command) {
        case 1: {
            task10_1();
            break;
        }
        case 2: {
            task10_2();
            break;
        }
        case 3: {
            task10_3();
            break;
        }
        case 4: {
            task10_4();
            break;
        }
        case 5: {
            task10_5();
            break;
        }
        case 6: {
            task10_6();
            break;
        }
        case 7: {
            task10_7();
            break;
        }
        case 8: {
            task10_8();
            break;
        }
        case 0: {
            task10_1();
            task10_2();
            task10_3();
            task10_4();
            task10_5();
            task10_6();
            task10_7();
            task10_8();
        }
        default: {
            break;
        }
    }
    return 0;
}