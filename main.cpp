#include <iostream>
#include "windows.h"
using namespace std;

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
    int f[2];
}

void task10_6() {


}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int command = 0;

    cin >> command;

    cout << "Task " << command << endl;

    switch (command) {
        case 1:
            task10_1();
            break;
        case 2:
            task10_2();
            break;
        case 3:
            task10_3();
            break;
        case 4:
            task10_4();
            break;
        case 0:
            break;
        default:
            cout << "wrong command" << endl;
            break;
    }

    return 0;
}