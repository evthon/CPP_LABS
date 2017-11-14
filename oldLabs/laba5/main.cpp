#include <iostream>
using namespace std;

void Task_5_1() {
    cout << "Task 5 1" << endl;

    cout << "количество байт:" << endl;

    float byteSize = 0;
    scanf("%f", &byteSize);

    float kbyteSize = byteSize / 1024;
    cout << "количество килобайт:" << kbyteSize  << endl;
}

void Task_5_2() {
    cout << "Task 5 2" << endl;

    cout << "секунд прошло прошло с начала дня:" << endl;

    float seconds = 0;
    scanf("%f", &seconds);

    int fullMinutes = (int) (seconds / 60);

    int minutes = fullMinutes;
    seconds -= minutes * 60;

    int hours = minutes / 60;
    minutes -= hours * 60;

    cout << "полных часов: " << hours << endl;
    cout << "полных минут: " << fullMinutes << endl;
    cout << hours << ":" << minutes << endl;
}

void Task_5_3()
{
    cout << "Task 5 3" << endl;
    int s = 0;
    scanf("%d", &s);
    cout << "Двузначное число " << endl;
    int m = s / 10;
    int h = s % 10;
    cout << " десятков " << m << endl;
    cout << " единиц " << h << endl;
    int p = m*h;
    s = m + h;
    cout << " произведение " << p << endl;
    cout << "сумма " << s << endl;
}

void Task_5_4()
{
    cout << "Task 5 4" << endl;
    int s = 0;
    scanf("%d", &s);
    cout << "трехзначное число " << endl;
    int m = s / 100;
    int h = (s % 100) / 10;
    int n = (s % 100) % 10;
    cout << " сотен: " << m << endl;
    cout << " десятков: " << h << endl;
    cout << "единиц: " << n << endl;
    int p = m*h*n;
    s = m + h+ n ;
    cout << " произведение: " << p << endl;
    cout << "сумма: " << s << endl;
    int ns = n * 100 + h * 10 + m;
    cout << "новое число: " << ns << endl;
}

void Task_5_5()
{
    cout << "Task 5 5" << endl;
    int k = 0;
    scanf("%d", &k);
    cout << "номер дня: " << k << endl;
    k = k + 1;
    int n = k & 7;
    n++;
    cout << "номер дня недели: " << n << endl;
}

void Task_5_6() {
    cout << "Task 5 6" << endl;
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "сторона 1:  " << endl;
    scanf("%d", &a);
    cout << "сторона 2: " << endl;
    scanf("%d", &b);
    cout << "сторона квадрата: " << endl;
    scanf("%d", &c);
    int k = (a * b) / (c * c);
    cout << "количество квадратов: " << k << endl;
    int n = a * b - k * c * c;
    cout << "оставшаяся площадь: " << n << endl;
}

void Task_5_7() {
    cout << "Task 5 7" << endl;

    int number = 0;
    scanf("%d", &number);

    cout << "число ";
    if (number > 0) {
        cout << "положительное" << endl;
    } else {
        cout << "отрицательное" << endl;
    }

    cout << "число ";
    if (number % 2 == 1) {
        cout << "нечетное";
    } else {
        cout << "четное";
    }
    cout << endl;

    cout << "трехзначное число: ";
    if (number >= 100 || number <= -100) {
        cout << "да";
    } else {
        cout << "нет";
    }
    cout << endl;
}

void Task_5_8() {
    cout << "Task 5 8" << endl;

    cout << "ячейка по горизонтали:" << endl;
    int deskX = 0;
    scanf("%d", &deskX);

    cout << "ячейка по вертикали" << endl;
    int deskY = 0;
    scanf("%d", &deskY);

    if (deskX % 2 == 0 && deskY % 2 == 0) {
        cout << "черная" << endl;
    } else {
        cout << "беленькая" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    Task_5_8();
}