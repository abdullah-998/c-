#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[101];
    char myst[]="hello";
    int c=0;
    cin>>st;
    int i=0,j=0;
    while(i<sizeof(st) and c<5){
        if(myst[j]==st[i]){
            j++;
            c++;
        }
        i++;
    }
   
    if(c==5)
        cout<<"YES";
    else
         cout<<"NO";

}