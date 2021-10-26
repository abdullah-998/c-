#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[4];
    int sum=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+' or s[2]=='+')
            sum++;
        else
            sum--;
    }
    cout<<sum;
}