#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inp,out;
    cin>>inp;
    for(int i=0;i<inp.length();i++)
    {
        if(inp[i]!='a' and inp[i]!='A' and inp[i]!='i' and inp[i]!='I' and inp[i]!='o' and inp[i]!='O' and inp[i]!='u' and inp[i]!='U' and inp[i]!='e' and inp[i]!='E' and inp[i]!='y' and inp[i]!='Y')
        {
            
            out.push_back('.');
            out.push_back(tolower(inp[i]));
        }
    }
    cout<<out;   
}