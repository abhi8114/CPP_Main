#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    void setData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void printArea() {
        float area = length * width;
        cout << "Area of rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setData();
    rect.printArea();
    return 0;
}