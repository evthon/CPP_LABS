#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Task_1_1() {
    cout << "Task 1.1" << endl;

    cout << "type 3 numbers" << endl;

    float n1 = 0;
    scanf("%f", &n1);

    float n2 = 0;
    scanf("%f", &n2);

    float n3 = 0;
    scanf("%f", &n3);

    float result = (n1 + n2 + n3) / 3;

    cout << "result: " << result << endl;
}

void Task_1_2() {
    cout << "Task 1.2" << endl;

    cout << "candies (kg): " << endl;
    float x = 0;
    scanf("%f", &x);

    cout << "costs: " << endl;
    float a = 0;
    scanf("%f", &a);

    float kg_price = a / x;

    cout << "1 kg price: " << kg_price << endl;

    cout << "Y kg: " << endl;
    float y_kg = 0;
    scanf("%f", &y_kg);

    float y_kg_result = y_kg * kg_price;

    cout << y_kg << " kg price:  " << y_kg_result << endl;
}

void Task_1_3() {
    cout << "fahrenheit to celsius" << endl;

    float fahrenheit_g = 0;
    scanf("%f", &fahrenheit_g);

    float celsius_g = (fahrenheit_g - 32) * 5/9;

    cout << "fahrenheit: " << fahrenheit_g << endl;
    cout << "celsius: " << celsius_g << endl;
}

void Task_1_4() {

}

int main() {
    setlocale(LC_ALL, "Rus");

    //Task_1_1();
    //Task_1_2();
    //Task_1_3();
}