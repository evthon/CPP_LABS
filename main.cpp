#include "windows.h"
#include <iostream>
#include <cmath>

using namespace std;


void task_2() {
    int n = 0;
    cout << " введите номер" << endl;
    cin >> n;
    double mass = 0;
    cout << " введите массу" << endl;
    cin >> mass;
    switch (n) {
        case 1:
            cout << mass << " кг " << endl;
            break;
        case 2:
            cout << mass / 1000000 << " кг " << endl;
            break;
        case 3:
            cout << mass / 1000 << " кг " << endl;
            break;
        case 4:
            cout << mass * 1000 << " кг " << endl;
            break;
        case 5:
            cout << mass * 100 << " кг " << endl;
            break;
    }
}

void task_1() {
    int day = 0;
    cout << " введите день" << endl;
    scanf("%d", &day);
    switch (day) {
        case 1:
            cout << " понедельник  ";
            break;
        case 2:
            cout << " ворник ";
            break;
        case 3:
            cout << " среда ";
            break;
        case 4:
            cout << " сетверг ";
            break;
        case 5:
            cout << " пятница ";
            break;
        case 6:
            cout << " суббота ";
            break;
        case 7:
            cout << " воскресенье  ";
            break;
        default: cout << "Ошибка";
            break;
    }
}
void task_3() {
    int n, t, c;
    cout <<  "Storona sveta: ";
    cin >> n;
    cout << " количество команд ";
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> t;
        switch (t)
        {
            case 1:
            {
                n = n == 4 ? 1 : n + 1;
                break;
            }
            case -1:
            {
                n = n == 1 ? 4 : n - 1;
                break;
            }
            case 2:
            {
                if (n == 1 || n == 2) n += 2;
                else if (n == 3 || n == 4) n -= 2;
                break;
            }
        }
    }
    cout << " результат " << n;
}
void task_4() {
    int n = 0;
    int r = 0;
    int d = 0;
    int l = 0;
    int s = 0;
    cout << " введите номер" << endl;
    scanf("%d", &n);
    switch (n) {
        case 1:
            cout << "радиус " << endl;
            scanf("%d", &r);
            cout << " диаметр " << 2 * r << endl;
            cout << " длина " << (2 * 3.14 * r) << endl;
            cout << " площадь " << (3, 14 * r * r) << endl;

            break;
        case 2:
            cout << " диаметр " << endl;
            scanf("%d", &d);
            cout << " радиус " << d / 2 << endl;
            cout << " длина " << (3.14 * d) << endl;
            cout << " площадь " << ((3, 14 * d * d) / 4) << endl;
            break;

        case 3:
            cout << " длина " << endl;
            scanf("%d", &l);
            cout << " радиус " << l / (2 * 3.14) << endl;
            cout << " диаметр " << l / 3.14 << endl;
            cout << " площадь " << ((l * l) / (4 * 3, 14)) << endl;
            break;
        case 4:
            cout << " площадь " << endl;
            scanf("%d", &s);
            cout << " радиус " << sqrt(s / 3.14) << endl;
            cout << " диаметр " << 2 * sqrt(s / 3.14) << endl;
            cout << " площадь " << 2 * sqrt(s / 3.14) * 3.14 << endl;
            break;
    }
}

void task_5() {
    int x;
    cout << " введите год ";
    cin >> x;

    switch (((x - 1984) % 60) / 12) {
        case 0:
            cout <<" зеленый";
            break;
        case 1:
            cout <<" красный ";
            break;
        case 2:
            cout <<" желтый ";
            break;
        case 3:
            cout <<" белый ";
            break;
        case 4:
            cout <<" черный ";
            break;
    };
    switch (((x - 1984) % 60) % 12) {
        case 0:
            cout <<" крыса ";
            break;
        case 1:
            cout <<" корова  ";
            break;
        case 2:
            cout <<" тигр";
            break;
        case 3:
            cout <<"заяц ";
            break;
        case 4:
            cout <<" дракон ";
            break;
        case 5:
            cout <<" змея ";
            break;
        case 6:
            cout <<" лошадь ";
            break;
        case 7:
            cout <<" овца ";
            break;
        case 8:
            cout <<" обезьяна ";
            break;
        case 9:
            cout <<" курица";
            break;
        case 10:
            cout <<" собака ";
            break;
        case 11:
            cout << " свинья ";
            break;
    }
}

void task_6() {
    int m;
    int d;
    cout << " введите месяц";
    cin >> m;
    cout << " введите месяц";
    cin >> d;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите номер задания" << endl;
    int task = 0;
    scanf("%d", &task);

    switch (task) {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        case 4:
            task_4();
            break;
        case 5:
            task_5();
            break;
        case 6:
            task_6();
            break;

        case 0:
            task_1();
            task_2();
            task_3();
            task_4();
            task_5();
            task_6();
        default:
            cout << "Неверный номер задания" << endl;
            break;
    }
    return 0;
}