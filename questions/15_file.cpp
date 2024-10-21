#include <iostream>
using namespace std;

class NumberOperations {
private:
    int number;
    int getSquare() {
        return number * number;
    }
public:
    void setNumber(int n) {
        number = n;
    }
    void displaySquare() {
        cout << "Square of " << number << " is: " << getSquare() << endl;
    }
};

int main() {
    NumberOperations num;
    int input;
    cout << "Enter a number: ";
    cin >> input;
    num.setNumber(input);
    num.displaySquare();
    return 0;
}