#include<bits/stdc++.h>

using namespace std;

int main()
{
    char p[101];
    cin>>p;
    bool f=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(p[i]=='H' or p[i]=='Q' or p[i]=='9')
        {
            f=true;
            break;
        }

    }
    if(f)
        cout<<"YES";
    else
        cout<<"NO";

}