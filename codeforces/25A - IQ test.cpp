#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,ev=0,odd=0,ind1=-1,ind2=-1;
    vector<int> vec;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }   

    for(int i=0;i<n;i++)
    {
        
        if(vec[i]%2==0)
        {
            ev++;
            if(ind1==-1)
                ind1=i+1;
        }
        else
        {
            odd++;
            if(ind2==-1)
                ind2=i+1;
        }
       
    }

    if(ev==1)
        cout<<ind1;
    else
        cout<<ind2;
}