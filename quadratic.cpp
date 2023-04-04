#include <iostream>
using namespace std;

int main(){
    int a,b,c,D;
    cin>>a>>b>>c;

    D=(b*b)-(4*a*c);
    if (a==0)
    {
        cout<<"Invalid Coefficient";
    }
    else if (D>0)
    {
        cout<<"Roots are real and distinct";
    }
    else if (D=0)
    {
        cout<<"Roots are real and equal";
    }
    else{
        cout<<"Roots are imaginary";
    }
}