//Leetcode problem --> 1009,476
/*The complement of an integer is the integer you get when you flip all the 0's to 1's and
  all the 1's to 0's in its binary representation.
  For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
  Given an integer n, return its complement.*/

#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int m=n;
  int mask=0,ans;

  if (n==0){
    ans=0;
  }                            
  while (m!=0){
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  ans= (~n) & mask;
  cout<<ans<<endl;
  return 0;
}