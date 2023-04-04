//Leetcode problem --> 07
/*Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
then return 0.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int remainder,reversed=0;
    while (n!=0){
        remainder=n%10;
        reversed = reversed*10 + remainder;
        n/=10;
    }
    cout<<reversed<<endl;
    return 0;
}