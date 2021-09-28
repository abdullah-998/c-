#include <iostream>

using namespace std;

int main()
{
    long long a,b,n;
    int t,c(0);
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>n;
        int c=0;
        
        while(a<=n and b<=n)
        {
            if(a>b)
                b+=a;
            else
                a+=b;
            c++;
        }
        
        cout<<c<<endl;
        c=0;
    }
}