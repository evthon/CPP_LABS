#include <iostream>
using namespace std;

class masss {

private:
    int size;
    int* mass = (int*) calloc (size, sizeof(int));
public:
    void input () {
        printf("\nInput size of mass: ");
        scanf("%d", &size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &mass[i]);
        }
    }

    void output () {

        printf("\nMass:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", mass[i]);
        }

    }

    void sort () {

        int num;
        for (int i = 0; i < size-1; i++) {
            for (int j = 0; j < size-1-i; j++) {
                if (mass[j] > mass[j+1]) {
                    num = mass[j];
                    mass[j] = mass[j+1];
                    mass[j+1] = num;
                }
            }
        }

    }

    void edit () {

        int l;
        printf("Input num of editing element: ");
        scanf("&d", &l);
        printf("Input new element: ");
        scanf("%d", &mass[l]);

    }

    void add () {

        mass = (int*) realloc()

    }

};

int main() {

    masss A;
    A.input();
    A.sort();
    A.output();

    return 0;
}