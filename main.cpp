#include <iostream>
using namespace std;

void pos_elem(double *mass, int N) {
    double amount, sum = 0;
    int num;

//    TASK3

    for (int i = 0; i < N; i++) {

        if (*(mass+i) > 0) {
            sum += *(mass+i);
            amount++;
        }

    }
    cout << endl << "Sum = " << sum << endl << "Amount = " << amount << endl;

}

void matrix(double **mass, int X, int Y) {
    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < X; ++j) {
            mass[i][j] = (2.0 * i * j)/(i + j + 1.0);
        }
    }
}

int main() {
    double *num;
    double *mass;
    double **mass2;
    int N, X, Y;
// TASK1
    cout << "==TASK1==" << endl << endl;
    num = new double[1];
    *num = 5;
    cout << "Double number = " << *num << endl;
    delete num;
// TASK2
    cout << endl << endl << "==TASK2==" << endl << endl;
    cout << "Length mass: ";
    cin >> N;
    mass = new double[N];
    for (int i = 0, a = 1 ; i < N; i++, a*=-1) {

        *(mass+i) = a*(2.0*i)/(i+1.0);
        cout << *(mass+i) << " ";

    }
    cout << endl << endl << "==TASK3==" << endl << endl;
    pos_elem(mass, N);
    delete [] mass;
// TASK5
    cout << endl << endl << "==TASK5==" << endl << endl;
    cout << "Input the amount of X: ";
    cin >> X;
    cout << "Input the amount of Y: ";
    cin >> Y;
    mass2 = new double*[Y];
    for (int i = 0; i < Y; i++) {
        mass2[i] = new double[X];
    }
    matrix(mass2, X, Y);
    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) {
            cout << mass2[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < Y; i++) {
        delete [] mass2[i];
    }
    delete [] mass2;
    return 0;
}