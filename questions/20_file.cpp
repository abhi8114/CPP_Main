#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
public:
    Counter() { count++; }
    static void displayCount() { cout << "Number of objects created: " << count << endl; }
};

int Counter::count = 0; // Initialize static member

int main() {
    Counter c1;
    Counter c2;
    Counter c3;
    Counter::displayCount();
    return 0;
}