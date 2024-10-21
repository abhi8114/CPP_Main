#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double width;
    double height;


    double getVolume() {
        return length * width * height;
    }
};


void printVolumeByValue(Box b) {
    cout << "Volume (pass by value): " << b.getVolume() << endl;
}

void printVolumeByAddress(Box* b) {
    cout << "Volume (pass by address): " << b->getVolume() << endl;
}

void printVolumeByReference(Box& b) {
    cout << "Volume (pass by reference): " << b.getVolume() << endl;
}

int main() {
    Box myBox;
    myBox.length = 5;
    myBox.width = 3;
    myBox.height = 2;

    printVolumeByValue(myBox);
    printVolumeByAddress(&myBox);
    printVolumeByReference(myBox);

    return 0;
}