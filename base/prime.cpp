#include<bits/stdc++.h>

using namespace std;
void multipleOfThree();



int main()
{
    // int n;
    // cin>>n;
    // cout<<isPrime_1(n)<<endl;
    // cout<<isPrime_2(n)<<endl;
    // isPrimeSieve();
    // cout<<prime[n]<<endl;
    //    for(int i=0;i<100;i++)
    //    {
    //        if(prime[i]==1)
    //            cout<<i<<" ";
    //        else
    //            cout<<"- ";
    //    }
}

void multipleOfThree()
{
    int a(1),b(1),c(1);
    int n;
    cin>>n;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            a=i;
            break;
        }
    }
    n/=a;

    for(int i=2;i*i<n;i++)
    {
        if(n%2==0)
        {
            if(i!=a)
            {
                b=min(b,i);
                break;
            }
            if(n/i!=i)
            {
                if(n/i!=a)
                {
                    b=min(b,i);
                    break;
                }
            }
        }
    }

    c=n/b;
    cout<<a<<b<<c<<endl;
}