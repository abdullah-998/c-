#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> l;
    int i=n,x;
    while(i--)
    {
        cin>>x;
        l.push_back(x);
    }
    sort(l.begin(),l.end());
    
    
    int t=0,h1=0,h2=0;
    bool s=false;

    for(int i=0;i<l.size();i++)
    {
        t++;
        h2++;
        while (l[i]==l[i+1])
        {
            h2++;
            i++;
        }
        if(!s)
        {
            h1=h2;
            s=1;
        }
        else
        {
            if(h1<h2)
                h1=h2;
        }
        h2=0;
    }
    cout<<h1<<" "<<t<<endl;


}