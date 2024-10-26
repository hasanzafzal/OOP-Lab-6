#include <iostream>
using namespace std;

class Counter {
public:
    int count;
    Counter() {
		count = 0;
    }

    Counter operator++() {
        count = ++count;
        return Counter();
    }

    void display() const {
        cout << "Value of c1 = " << count << endl;
    }
};

int main() {
    Counter c1, c2;
    cout << "Value of c1 = " << c1.count << endl;
    cout << "Value of c2 = " << c2.count << endl;
    ++c1;
    ++c2;
    ++c2;
    cout << "Value after increment c1 = " << c1.count << endl;
    cout << "Value after increment c2 = " << c2.count << endl;

    return 0;
}