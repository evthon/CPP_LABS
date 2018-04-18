#include <iostream>
using namespace std;

class complx {

    private:

    friend void sub(complx&, complx);

    public:
    int i;
    int j;
    complx () {
        i = 1;
        j = 2;
    }

    void input () {
        cout << "Input number: " << endl;
        cin >> i;
        cin >> j;
    }

    void output () {
        cout << i << " + " << j << "i" << endl;
    }

    void add (complx obj) {
        i += obj.i;
        j += obj.j;
    }

    ~complx () {
    }
};

void sub(complx& obj, complx obj2) {
    obj.i -= obj2.i;
    obj.j -= obj2.j;
}

complx task5 (complx obj, complx obj2) {

    complx obj3;
    obj3.i = obj.i + obj2.i;
    obj3.j = obj.j + obj2.j;

    return obj3;
}

int main() {

    complx obj;
    obj.input();
    complx obj2;
    obj.add(obj2);
    obj.output();
    sub(obj ,obj2);
    obj.output();
    return 0;
}