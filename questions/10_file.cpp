#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    char grade;
};

int main(){
    Student students[3];

    for(int i =0; i<3; i++){
        cout << "Enter data for students"<< i +1 << endl;
        cout << "Enter name: ";
        cin >> students[i].name;
        cout << "Enter roll: ";
        cin >> students[i].roll;
        cout << "Enter grade: ";
        cin >> students[i].grade;
    }

    cout << "\nStudent Data:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].roll << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    return 0;
}
