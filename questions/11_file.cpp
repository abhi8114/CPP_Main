#include <iostream>
#include <string>

using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int rollNumber;
    char grade;

public:
    // Member function to set the student's data
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter grade: ";
        cin >> grade;
    }

    // Member function to print the student's details
    void printDetail() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    
    Student student1, student2;
    cout << "Enter details for student 1:" << endl;
    student1.setData();

    cout << "Enter details for student 2:" << endl;
    student2.setData();

    cout << "Student 1 Details:" << endl;
    student1.printDetail();

    cout << "\nStudent 2 Details:" << endl;
    student2.printDetail();

    return 0;
}