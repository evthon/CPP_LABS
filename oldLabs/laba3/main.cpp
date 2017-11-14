#include <iostream>
using namespace std;

void Task3_1_A() {
    cout << "Task 3 1 B" << endl;

    int i = 1;
    int j = 2;
    int k = 3;

    int result = 0;
    result = i < j;
    cout << "i < j : " << result << endl;

    result = (i + j) >= k;
    cout << "(i + j) >= k : " << result << endl;

    result = (i + k) > (i + 5);
    cout << "(i + k) > (i + 5) : " << result << endl;

    result = k!=3;
    cout << "k!=3 : " << result << endl;

    result = j==2;
    cout << "j==2 : " << result << endl;
}

void Task3_1_B() {
    cout << "Task 3 1 B" << endl;

    float i = 7;
    float f = 5.5;
    float c = 100;
    float result = 0;

    result = f > 5;
    cout << "f > 5 : " << result << endl;

    result = (i + f) <= 10;
    cout << "(i + f) <= 10 : " << result << endl;

    result = c >= 10 * (i + f);
    cout << "c >= 10 * (i + f) : " << result << endl;
}

void Task_3_2() {
    cout << "Task 3 2" << endl;

    float i = 7;
    float f = 5.5;
    float c = 100;
    float result = 0;

    result = i + f <= 10;
    cout << "i + f <= 10 : " << result << endl;

    result = i >= 6 && c == 120;
    cout << "i >= 6 && c == 120 : " << result << endl;

    result = c!=94 || i + f <= 10;
    cout << "i >= 6 && c == 100 : " << result << endl;
}

void Task_3_4_A() {
    cout << "Task 3 4 A" << endl;

    float x = 1;
    float y = 1;
    float z = 1;
    float w = 0;
    float result = 0;

    result = w=++x||++y||++z;
    cout << "w=++x||++y||++z : " << result << endl;
}

void Task_3_4_B() {
    cout << "Task 3 4 B" << endl;

    float x = 1;
    float y = 1;
    float z = 1;
    float w = 0;
    float result = 0;

    result = ++x&&++y||++z;
    cout << "++x&&++y||++z : " << result << endl;
}

void Task_3_4_V() {
    cout << "Task 3 4 V" << endl;

    float x = 1;
    float y = 1;
    float z = 1;
    float w = 0;
    float result = 0;

    result = ++x&&++y&&++z;
    cout << "++x&&++y&&++z : " << result << endl;
}

void Task_5() {
    cout << "Task 5" << endl;

    float x = 1;
    float y = 2;
    float z = 3;
    float result = 0;

    result = x==y==z;
    cout << "x==y==z : " << result << endl;

    result = x==(y=z);
    cout << "x==(y=z) : " << result << endl;

    result = x==y<z;
    cout << "x==y<z : " << result << endl;

    result = x&&!y<=z;
    cout << "x&&!y<=z : " << result << endl;
}

void Task_3_6() {
    cout << "Task 3 6" << endl;
    printf("printf test");

    int readedInt = 0;
    scanf("%d", &readedInt);

    cout << readedInt << endl;
}

void Task_3_6_1() {
    cout << "Task 3 6.1" << endl;

    int X = 0;
    scanf("%d", &X);

    printf("X = ");

    cout << X << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    Task3_1_A();
    Task3_1_B();

    Task_3_2();

    Task_3_4_A();
    Task_3_4_B();
    Task_3_4_V();

    Task_5();

    Task_3_6();

    Task_3_6_1();
}