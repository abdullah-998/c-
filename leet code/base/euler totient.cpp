#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


const int size = 1e6+2;
int tot[size];

void totient()
{
   for(int i=0; i<size; i++)
     tot[i] = i;

   for(int i=2; i<size; i++)
   {
       if(tot[i] == i)
       {
            tot[i] -= 1;
            for(int j=2*i; j<size; j+=i)
                tot[j] -= tot[j]/i;
       }
   }
}

int main()
{
    BOOST;
    totient();
    for(int i=0;i<12;i++)
    {
        cout<<i<<' '<<tot[i]<<endl;
    }
}