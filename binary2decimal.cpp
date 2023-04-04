#include <iostream>
using namespace std;
int main()
{
	int n,remainder;
    cin>>n;
    int ans=0,pow=1;
    while (n!=0){
        remainder=n%10;
        ans+=remainder*pow;
        pow*=2;
        n/=10;
    }
    cout<<ans<<endl;
	return 0;
}