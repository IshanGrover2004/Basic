#include <iostream>
using namespace std;
int main()
{
	int n,remainder;
	cin>>n;
	int ans=0,pow=1;
	while (n!=0){
		remainder=n%2;
		ans+=remainder*pow;
		pow*=10;
		n/=2;
	}
	cout<<ans<<endl;
	return 0;
}