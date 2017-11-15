#include <iostream>
#include "windows.h"
using namespace std;

void task1() {
    int A, B, sum=0, num;
    cout << "Введите А: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
    for(int i=B-1; i>A; sum+=i, i--) {
        cout << i << " ";
    };
    num = (B-A)-1;
    cout << endl << "Сумма = " << sum << endl << "Количество = " << num;
}

void task2() {
    float s = 0;
    int n;
    cout << "Введите число: ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        s+=1.0/i;
    }
    cout << "сумма =" << s << endl;
}

void task3() {
    float num = 1.2, ans = 1.1;
    int i, N;
    cout << "Введите число: ";
    cin >> N;
    for(i=0; i<=N; i++) {
        ans-=num;
        num+=0.1;
        num*=-1;
    };
    cout << "Ответ = " << num << endl;
};

void task4() {
    int result = 0, n;
    cout << "Введите число: ";
    cin >> n;
    for (int i=1; i<=(2*n-1); i+=2) {
        result+=i;
    }
    cout << "Ответ =  " << result;
}

void task5() {
    int A, N, result, num;
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите N: ";
    cin >> N;
    result=1-A;
    num=A*A;
    for(int i=1; i<N; i++) {
        result+=num;
        num*=-A;
    };
    cout << "Ответ = " << result << endl;
}

void task6() {
    int N, result=1;
    cout << "Введите N: ";
    cin >> N;
    for(int i=2; i<=N; i++) {
        result*=i;
    };
    cout << "Ответ = " << result << endl;
};

void task7() {
    int N;
    float A=2, K;
    cout << "Введите N: ";
    cin >> N;
    for(int i=1; i<=N; i++) {
        K = i;
        A = 2+1/K/A;
        cout << A << " ";
    };
}

void task8() {
    int N, result=0, num;
    cout << "Введите N: ";
    cin >> N;
    for(int i=1; i<=N; i++) {
        num=i;
        for(int a=1; a<i; a++){
            num*=i;
        };
        result+=num;
    }
    cout << "Ответ = " << result;

}
void task9() {
    int N, result=0, num, b;
    cout << "Введите N: ";
    cin >> N;
    b=N;
    for(int i=1; i<=N; i++, b--) {
        num=i;
        for(int a=1; a<b; a++){
            num*=i;
        };
        result+=num;
    }
    cout << "Ответ = " << result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int task;
    cout << "Номер задания: ";
    cin >> task;
    switch(task) {
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
            task8();
            break;
        }
        case 9: {
            task9();
            break;
        }
        default:{
            task1();
            task2();
            task3();
            task4();
            task5();
            task6();
            task7();
            task8();
            task9();
            break;
        }};
    return 0;
}
