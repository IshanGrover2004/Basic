#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int reversed=0,temp=n,remainder;

    while (temp!=0){
        remainder=temp%10;
        reversed=reversed*10+remainder;
        temp/=10;
    }
    //if-else substitution
    (reversed==n)?cout<<"Palindrome":cout<<"Not Palindrome";
    return 0;
}