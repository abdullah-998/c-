#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    char s[21];
    cin>>s;
    int n=strlen(s);
    // er
    if(s[n-1]=='r' and s[n-2]=='e')
        cout<<"er"<<endl;
    else
        cout<<"ist"<<endl;
    
}