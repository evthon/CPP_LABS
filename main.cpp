#include <iostream>
using namespace std;

void task10_3() {
    int n = 0;
    cin >> n;

    int min = 1000;
    int max = 0;

    int curNum = 1;

    int randNum = 0;

    int extreme;

    bool isLastMax = false;
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
    int i = 1;

    int sum = 0;
    while (i <= n) {
        sum += (i + 1)/(2*i);
        i++;
    }

}

int main() {
    setlocale(LC_ALL, "RUS");

    int command = 0;

    cin >> command;

    cout << "Task " << command << endl;

    switch (command) {
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