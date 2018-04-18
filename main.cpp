#include <iostream>
using namespace std;


int main() {

    class complex{
        complex () {
            cin >> i;
            cin >> j;
        }
        public:
        int i, j;
        void input (i, j) {
            cout << "Input number: " << endl;
            cin >> i;
            cin >> j;
        }
        void output () {
            cout << i << " + " << j << "i";
        }
    };

    return 0;
}