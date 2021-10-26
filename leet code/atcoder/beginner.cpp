#include<bits/stdc++.h>
using namespace std;
 
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    BOOST;
    string S,T;
    cin>>S>>T;
    int ind=-1;
    int s=S.size();
    for(int i=0;i<s;i++)
    {
        if(S[i]!=T[i])
        {
            ind=i;
            break;
        }
    }
    char temp;
    for(int i=ind+1;i<s;i++)
    {
        if(S[ind]==T[i])
        {
            temp=T[ind];
            T[ind]=T[i];
            T[i]=temp;
            break;
        }
    }
    if(S==T)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
