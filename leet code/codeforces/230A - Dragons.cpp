#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,xi,yi;
    bool f=1;
    cin>>s>>n;
    vector<pair<int,int>> vec;
    int i=n;
    while(i--)
    {
        cin>>xi>>yi;
        vec.push_back(make_pair(xi,yi));
    }
    sort(vec.begin(), vec.end());
    
    for(int i=0;i<n;i++)
    {
        if(s>vec[i].first)
        {
            s+=vec[i].second;
        }
        else
        {
            f=0;
            break;
        }
    }

    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";

}