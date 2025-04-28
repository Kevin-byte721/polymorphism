#include <iostream>

using namespace std;

class Number {
    private:
        int num;

    public:
        Number(int value):num(value) {}

        int getNum() const {
            return num;
        }

        Number operator*(const Number &other) const {
            return Number(num * other.num);
        }
};

int main() {
    Number num(10);
    Number num2(30);
    Number num3 = num * num2;
    cout << num3.getNum();
}