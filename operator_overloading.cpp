#include <iostream>

using namespace std;

class Number {
    public:
        int value;
            Number(int v) {
                value = v;
            }
            Number operator+(Number n) {
                return Number(value + n.value);
            }
};

int main() {
    Number n1(20), n2(5);
    Number n3 = n1 + n2;
    cout << n3.value << endl;

}