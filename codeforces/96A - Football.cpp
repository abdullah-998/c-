#include<bits/stdc++.h>
using namespace std;

int main()
{
    char team[101];
    cin>>team;
    int count=0;
    char prev='0';

    for(int i=0;i<sizeof(team);i++)
    {
        if(team[i]==prev){
            count++;
            if(count==7)
                break;
        }
        else{
            prev=='0'?prev='1':prev='0';
            count=0;
            count+=1;
        }
    }

    if(count==7)
        cout<<"YES";
    else
        cout<<"NO";
}