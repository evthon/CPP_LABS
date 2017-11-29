#include "windows.h"
#include <iostream>
using namespace std;

void task1() {
    int K, L, sum = 0, mid;
    int mass[10];
    for(int i=0; i<10; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl << "Введите K: ";
    cin >> K;
    cout << "Введите L: ";
    cin >> L;
    for(int i=K; i<=L; i++) {
        sum += mass[i];
    }
    cout << "Сумма = " << sum << endl;
    mid = sum/(L-K);
    cout << "Среднее = " << mid << endl;

}

void task2() {
    int num=0, result=0;
    int mass[10];
    for(int i=0; i<10; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    for(int i=1; i<9; i++) {
        if(mass[i]<mass[i-1] && mass[i]<mass[i+1]) {
            num=mass[i];
        }
        if(num>result) result=num;
    }
    cout << endl << "Ответ = " << result;
}

void task3() {
    int num=0, num1=1000, result, max=10, R;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl << "Введите R: ";
    cin >> R;
    for(int i=0; i<max; i++) {
        num = mass[i]-R;
        if(num<0) num*=-1;
        if(num<num1) {
            num1=num;
            result=mass[i];
        }
    };
    cout << "Ответ = " << result;
}

void task4() {
    int max=10;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;
    double mass2[max];
    for(int i=0; i<max; i++) {
        if(mass[i]<5) mass2[i]=2*mass[i];
        else mass2[i]=mass[i]/2.0;
        cout << mass2[i] << " ";
    }
}

void task5() {
    int max=10, num=0;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;
    int mass2[max];
    for(int i=0; i<max; i++) {
        num+=mass[i];
        mass2[i] = num;
        cout << mass2[i] << " ";
    }
}

void task6() {
    int max=10;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;
    for(int i=max-1; i>0; i--) {
        mass[i]=mass[i-1];
    }
    mass[0] = 0;
    for(int i=0; i<max; i++) {
        cout << mass[i] << " ";
    }
}

void task7() {
    int max=10, num;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;
    for(int a=0; a<max; a++) {
        for(int i=0; i<max-1; i++) {
            if(mass[i]>mass[i+1]) {
                num = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = num;
            }
        }
    }
    for(int i=0; i<max; i++) {
        cout << mass[i] << " ";
    }
}

void task8() {
    int max=10, num, num2, i2, maxx=max;
    int mass[max];
    for(int i=0; i<max; i++) {
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;
    num=mass[0];
    for(int a=0; a<max-1; a++) {
        for(int i=0; i<maxx; i++) {
            if(mass[i]>num) {num=mass[i]; i2=i;}
        }
        mass[maxx-1] = num2;
        mass[max-1] = num;
        mass[i2] = num2;
    }

}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(11);
    int N;
    cout << "Введите номер задания: ";
    cin >> N;
    switch(N) {
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
            break;
        }
        case 0: {

        }
        default: {
            break;
        }
    };
    return 0;
}