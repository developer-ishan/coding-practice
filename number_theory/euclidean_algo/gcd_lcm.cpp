/**
 * https://www.codechef.com/viewsolution/29657199
*/
#include<iostream>
#include<cmath>
using namespace std;
long int gcd(long int a,long int b)
{
    if(b==0)
        return a;
    gcd(b,a%b);
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int a,b,g,l;
        cin>>a>>b;
        g=gcd(a,b);
        l=a*b/g;
        cout<<g<<" "<<l<<endl;
    }
    return 0;
}
