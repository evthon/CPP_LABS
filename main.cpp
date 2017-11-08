#include <iostream>
using namespace std;

int binpow(int a, int n) {
    int res = 1;
    while(n) {
        if (n & 1) {
            res *= a;
            --n;
        } else {
            a *= a;
            n >>= 1;
        }
    }
    return res;
}

void Task8_1(int a, int b) {
    int sum = 0;
    int numAmount = 0;

    int swap = 0;

    if (a < b) {
        swap = a;
        a = b;
        b = swap;
    }

    while (a-1 > b) {
        a--;
        cout << a << endl;

        numAmount++;
        sum+=a;
    }

    cout << "Amount: " << numAmount << endl;
    cout << "Sum: " << sum << endl;
}

void Task8_4(int n) {
    int result = 0;

    int s = 0;
    for (int i = 0; i < n; i++) {
        s = s + n;
        cout << "s " << s << endl;
    }
    cout << "result: " << result;
}

void Task8_5(int a, int n) {
    int i = 1;
    int s = 1;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            s = s + binpow(a, n);
        }
        if (i % 2 != 0) {
            s = s - binpow(a, n);
        }
    }
    cout << "sum =" <<  s << endl;
}

void Task8_7(int n) {
    float result = 0;
    float prev = 0;
    for (int i = 1; i < n; i++) {
        float t = i;
        cout << "n " << t << endl;
        result = 2 + (1 / t / prev);
        cout << result << endl;
        prev = result;
    }
    cout << "result: " << result;
}

int main() {
    setlocale(LC_ALL, "RUS");

    int command = 0;

    scanf("%d", &command);

    cout << command << endl;
    int a = 0;
    int b = 0;
    int n = 0;

    cout << "Task " << command << endl;
    switch (command) {
        case 1:
            cout << "Type A" << endl;
            scanf("%d", &a);
            cout << "Type B" << endl;
            scanf("%d", &b);
            Task8_1(a,b);
            break;
        case 4:
            cout << "Type N" << endl;
            scanf("%d", &n);
            Task8_4(n);
            break;
        case 5:
            cout << "Type A" << endl;
            scanf("%d", &a);
            cout << "Type N" << endl;
            scanf("%d", &n);
            Task8_5(a,n);
        case 7:
            cout << "Type N" << endl;
            scanf("%d", &n);
            Task8_7(n);
            break;
    }
    return 0;
}