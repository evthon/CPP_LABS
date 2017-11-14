#include <iostream>
using namespace std;


/*
 *
 *
*/

/*
int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Привет мир!" << endl;
    float x = 0;
    float y = 0;
    float z = 0;
    cout << "Введите число x:" << endl;
    cin >> x;
    cout << "Введите число y:" << endl;
    cin >> y;
    cout << "Введите число z:" << endl;
    cin >> z;
    int sum = x + y + z;
    cout << "Сумма чисел: "
         <<  x << " + " << y << " + " << z << " = " << sum << endl;
    float result = x * y * z;
    cout << "Умножение чисел: "
         <<  x << " * " << y << " * " << z << " = " << result;

    return 0;
}
*/

void PrintResult(string name, float result) {
    cout << "result" << name << ": " << result << endl;
}
void Task7PrintValues(string valueName , int value) {
    cout << valueName << ": " << value
         << endl;
}

void TaskFrom1To3() {
    float result = 0;

    float a = 8;
    float b = 3;
    float c = -5;


    int c1 = -5;
    int a1 = 8;
    int b1 = 3;

    //1

    // A
    result = 3 - 4 % 5 + 6;
    PrintResult(" 1 A ", result);

    // B
    result = -3 * 4 % - 6 / 5;
    PrintResult(" 1 B ", result);

    // G
    result = 6 * -9 % 10 / 3;
    PrintResult(" 1 G ", result);

    // D
    result = a * b / c;
    PrintResult(" 1 D ", result);

    // E
    result = a * (c1 % b1);
    PrintResult(" 1 E ", result);


    //J
    result = (a1 * c1) % b1;
    PrintResult(" 1 J ", result);

    // 2

    int x2 = 8.8;
    int y2 = 3.5;
    int z2 = -5.2;

    result = x2 % y2;
    PrintResult(" 2 A ", result);

    result = 2 * x2 / 3 % y2;
    PrintResult(" 2 B ", result);

    result = 2 * x2 / (3 * y2);
    PrintResult(" 2 V", result);

    // 3

    int i3 = 8;
    int j3 = 3;
    float x3 = 0.005;
    float y3 = 0.5;
    float c3 = 99;
    int d3 = 100;
    int sum1 = 0;
    int sum2 = 0;

    sum1 = (3 * i3 - 2 * j3);
    sum2 = (2 * d3 - c3);
    result = sum1 % sum2;
    PrintResult(" 3 A ", result);

    sum1 = (i3 - 3 * j3);
    sum2 = (c3 + 2 * d3);
    result = sum1 % sum2 / (x3 - y3);
    PrintResult(" 3 B", result);
}

void Task7() {
    int x;
    int y;
    int z;
    int w;

    cout << "7 A" << endl;
    x = y = z = w = 0;
    x = y = z = w = 1;
    Task7PrintValues("x", x);
    Task7PrintValues("y", y);
    Task7PrintValues("z", z);
    Task7PrintValues("w", w);

    cout << "7 B" << endl;
    x = y = z = w = 0;
    x *= y -= z += w %= 1;
    Task7PrintValues("x", x);
    Task7PrintValues("y", y);
    Task7PrintValues("z", z);
    Task7PrintValues("w", w);

    cout << "7 V" << endl;
    x = y = z = w = 0;
    x -= y /=z *= ++ w;
    Task7PrintValues("x", x);
    Task7PrintValues("y", y);
    Task7PrintValues("z", z);
    Task7PrintValues("w", w);
}

int main() {
    setlocale(LC_ALL, "Rus");
    //TaskFrom1To3();
    Task7();

    int a = 1;
    int b = 2;
    int fff = a++ -1;
    cout << "fff:" << fff << endl;
}

