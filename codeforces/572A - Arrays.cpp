#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int k,m;
    cin>>k>>m;

    vector<int> ve1;
    vector<int> ve2;

    int x,t;
    t=n1;
    while (t--)
    {
        cin>>x;
        ve1.push_back(x);   
    }

    t=n2;
    while (t--)
    {
        cin>>x;
        ve2.push_back(x);   
    }
    // cout<<ve1[k-1]<<" "<<ve2[n2-m]<<endl;
    if(ve1[k-1]<ve2[n2-m])
        cout<<"YES";
    else
        cout<<"NO";

}