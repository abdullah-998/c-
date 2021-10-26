#include <bits/stdc++.h>

using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    
    
    int t;
    cin>>t;
    int arr[4];
    for(int j=0;j<t;j++)
    {
        string s;
        bool f=1;
        cin>>s;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            int start=i;
            while(s[i]!='.' and i!=s.size())
            {
                i++;
            }
            arr[k++]=stoi(s.substr(start,i-start));
        }

        cin>>s;
        k=0;
        for(int i=0;i<s.size();i+=9)
        {
            int v=stoi(s.substr(i,8), 0, 2);
            if(v!=arr[k])
            {
                f=0;
                break;
            }
            k++;
        }
      
        if(f)
            cout<<"Case "<<j+1<<": Yes"<<endl;
        else
            cout<<"Case "<<j+1<<": No"<<endl;
    }
}
//  bitset<8> a[4];
//     bitset<8> b;
//     cin>>b;
//     a[0]=b;
//     cout<<a[0]<<endl;

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
    
//     bitset<8> a[4];
//     bitset<8> b[4];

//     int t;
//     string x;
//     cin>>t;
//     while(t--)
//     {
//         for(int i=0;i<4;i++)
//         {
//             cin>>x;
//             x.pop_back();
//             a[i]=x;
//         }
//         for(int i=0;i<4;i++)
//         {
//             x.pop_back();
//             cin>>b[i];
//         }
//         bool f=1;
//         for(int i=0;i<4;i++)
//         {
//             if(a[i]!=b[i])
//                 f=0;
//         }
//         if(f==0)
//             cout<<"Case "<<t+1<<": NO"<<endl;
//         else
//             cout<<"Case "<<t+1<<": YES"<<endl;
//     }
// }