#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    if (s.length() % n > 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    int l = s.length() / n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < l / 2; j++)
            if (s[j + i * l] != s[(i + 1) * l - j - 1])
            {
                cout << "NO" << endl;
                return 0;
            }

    cout << "YES" << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char inp[1001];
//     int k,s,e,m;

//     cin>>inp>>k;
//     int n=strlen(inp)/k;
//     bool f=1;
//     int q=strlen(inp);

//     for(int i=0;i<q;i+=n)
//     {
//         s=i;
//         e=i+(n-1);
//         m=(s+e)/2;

//         while(s<=m and e>=m)
//         {
//             if(inp[s]!=inp[e])
//             {
//                 f=0;
//                 break;
//             }
//             s++;
//             e--;
//         }
//         if(!f)
//             break;
//     }
//     if(f)
//         cout<<"YES";
//     else
//         cout<<"NO";
// }