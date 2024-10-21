#include <iostream>
using namespace std;

int main(){
    int num, first= 0, second = 1, next;
    cout << "Enter the number of terms: ";
    cin >> num;
    cout << "Fibonacci Series: ";
    for(int i =1; i<=num;i++){
        if(i==1){
            cout << first << " ";
        }
        if(i==2){
            cout << second << " ";
        }
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}