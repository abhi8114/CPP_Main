#include <iostream>
using namespace std;

int main(){
    int n,revNum, rem;
    cout<<"Enter a number: ";
    cin>>n;
    revNum = 0;
    while(n!=0){
        rem = n%10;
        revNum = revNum*10 + rem;
        n = n/10;
    }
  if (n==revNum){
    cout<<"The number is a palindrome";
  }else{
    cout<<"The number is not a palindrome";
  }
  cout<<endl;
    return 0;
}