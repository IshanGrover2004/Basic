#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter any binary no.    ";
	cin>>n;
	
	int remainder;
	cout<<"1's complement is ";
	while (n!=0){
		remainder = n%2;
		cout<<!remainder;
		n/=10;
	}
}