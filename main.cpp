#include <iostream>
using namespace std;

class complx {

    private:
    int i;
    int j;

    public:
    complx (int i, int j) {
        input(i, j);
    }

    void input (int i, int j) {
        cout << "Input number: " << endl;
        cin >> i;
        cin >> j;
    }

    void output (int i, int j) {
        cout << i << " + " << j << "i";
    }

    ~complx () {
        cout << "\nDestructor run's";
    }
};

int main() {
    int a, b;

    complx cm(a, b);
    cm.output(a, b);


    return 0;
}