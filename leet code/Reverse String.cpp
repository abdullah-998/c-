
#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        char temp;
        int n=s.size();
        
        for(int i=0;i<n/2;i++)
        {
            temp=s[i];
            s[i]=s[n-1-i];
            s[n-i-1]=temp;
        }
        cout<<"[";
        int i=0;
        for(auto it:s)
        {
            cout<<'"'<<it<<'"';
            if(i!=n-1)
                cout<<",";
            i++;
        }
            
        cout<<"]"<<endl;
    }
};

int main()
{
    BOOST;
    
}
;