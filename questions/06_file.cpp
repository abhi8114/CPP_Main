#include <iostream>
using namespace std;

int main(){
    int n;
    double average,sum;
    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter element "<<i+1<<": ";
        cin>>num;
        sum += num;
    }
    average = sum/n;
    cout<<"The average is: "<<average<<endl;    

    return 0;

}