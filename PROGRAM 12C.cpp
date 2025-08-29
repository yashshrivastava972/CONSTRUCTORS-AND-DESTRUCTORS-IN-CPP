// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: PARAMETERIZED CONSTRUCTOR (EXPERIMENT: 12C)

// CODE: 

#include <iostream>
using namespace std;

class construct {
    int a, b;

public:
    construct(int m, int n) {
        a = m;
        b = n;
    }

    void display() {
        cout << "a = " << a << endl << "b = " << b;
    }
};

int main() {
    construct object(10, 20); 
    object.display();
    return 0;
}

// OUTPUT:

// a = 10
// b = 20
