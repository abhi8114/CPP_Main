#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayData() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].setData();
    }

    cout << "\nStudent Details:" << endl;

    for (int i = 0; i < 3; i++) {
        students[i].displayData();
    }

    return 0;
}