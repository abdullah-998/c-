#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

char m[27];
void table()
{
    for(int i=0;i<26;i++)
    m[i]=(char)i+65;
}

int main()
{
    BOOST;
    table();
    int n;cin>>n;
    while (n--)
    {
        string s;cin>>s;
        if(s[0]=='R')
        {
            int i=1;
            while (s[i]!='C')
            {
               cout<<m[(int)s[i]-49];
               i++;
            }
            
        }
        else
        {
            cout<<"R";
            int i=0;
            for(i=0;i<s.size();i++)
            {
                if(s[i]>='A' and s[i]<='Z')
                break;
            }
            for(int j=i;i<s.size();j++);
            cout<<s[i];
        }
        cout<<endl;
    }
    

}