#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n>>s;

    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    ++i;
                }
                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
            break;
        }
    }

}