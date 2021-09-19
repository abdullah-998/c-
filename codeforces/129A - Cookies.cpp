#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin>>n;
    int i=n,x;
    while(i--)
    {
        cin>>x;
        v.push_back(x);
    }
    int ev=0,odd=0;

    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
            ev++;
        else
            odd++;
    }

    cout<<(odd%2==1?odd:ev);

}