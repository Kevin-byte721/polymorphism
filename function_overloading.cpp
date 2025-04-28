#include <iostream>

using namespace std;

class overload {
    private:
    int a;

    public:
    overload():a(0) {}
    int add(int a) {
        return a + 1;
      }
      
      // Function with two integer parameters
      int add(int a, int b) {
        return a + b;
      }
      
      // Function with two double parameters
      double add(double a, double b) {
        return a + b;
      }
};

int main() {
    overload obj;
    cout << obj.add(5) << endl;
    cout << obj.add(5, 10) << endl;
    cout << obj.add(2.5, 3.7) << endl;


    return 0;
}