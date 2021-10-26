#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    int n;
    cin>>n;
    n-=1;

    cin>>s1;
    int ind=s1.length()-1;
    while(n--)
    {
        cin>>s2;
        for(int i=0;i<=ind;i++)
        {
            if(s1[i]!=s2[i])
            {
                ind=i;
                break;
            }
        }

    }
    cout<<ind<<endl;
}
