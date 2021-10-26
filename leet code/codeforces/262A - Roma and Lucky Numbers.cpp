#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, c1=0;
    cin >> n >> k;

    string s;
    while (n--)
    {
        int c2=0;
        cin >> s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                c2 += 1;// checking how much time lucky digits
                if(c2>k)
                    break;
            }
        }
        if (c2 <= k) // if lucky no. of lucky digit <=k
        {
            c1 += 1;
        }
    }
    cout << c1 << endl;

}
  
