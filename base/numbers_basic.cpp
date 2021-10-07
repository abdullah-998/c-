#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define NO_OF_CHARS 256
class Number
{
private:
    int count;
public:
    Number(int n)
    {
        cout<<"Instance Create"<<endl;
    }
    Number(string s)
    {
        cout<<s<<endl;
    }
    bool palindrome(string s1,string s2)
    {
        if(s1.size()!=s2.size()) return false;

        int n=s1.size();

        for(int i=0;i<=n/2;i++)
        {
            if(s1[i]!=s2[n-i-1])
            {
                return false;
            }
        }
        return true;

    }

    bool palindrome_easy(string s1,string s2)
    {
        reverse(s2.begin(),s2.end());
        if(s1!=s2) return false;

        return true;
    }
    bool armstrongNumber(ll num,ll n)
    {
        ll a= num;
        ll ans=0;
        while(a>0)
        {
            int k=a%10;
            ans+=pow(k,n);
            a/=10;
        }
        if(num==ans)
            return true;
        return false;
    }

    int NthArmstrong(int n)
    {

    }
    bool perfectNumber(int n)
    {
        long long int sum = 1;

        for (long long int i=2; i*i<=n; i++)
        {
            if (n%i==0)
            {
                if(i*i!=n) // !root(n)
                    sum += i + n/i;
                else
                    sum+=i;
            }
        }

        if (sum == n && n != 1)
            return true;

        return false;
    }
    bool simplyAnagram(string s1,string s2) // n*long(n)
    {
        if(s1.size()!=s2.size()) return false;

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1!=s2) return false;

        return true;
    }



    bool areAnagram(string str1, string str2) // MODERATE SOLUTION
    {
        int count1[NO_OF_CHARS] = { 0 };
        int count2[NO_OF_CHARS] = { 0 };

        if(str1.size()!=str2.size()) return false;

        int i;

        for (i = 0; str1[i] && str2[i]; i++)
        {
            count1[str1[i]]++;
            count2[str2[i]]++;
        }


        if (str1[i] || str2[i])
            return false;


        for (i = 0; i < NO_OF_CHARS; i++)
            if (count1[i] != count2[i])
                return false;

        return true;
    }

    bool linearAnagram(char* str1, char* str2) // BEST SOLUTION
    {

        int count[NO_OF_CHARS] = { 0 };
        int i;


        for (i = 0; str1[i] && str2[i]; i++) {
            count[str1[i]]++;
            count[str2[i]]--;
        }


        if (str1[i] || str2[i])
            return false;

        for (i = 0; i < NO_OF_CHARS; i++)
            if (count[i])
                return false;
        return true;
    }
};

int main()
{
    BOOST;
    Number n(123);
    Number n1("This is my function");
    // PALINDROME
//    cout<<n.palindrome("madam","madam")<<endl;
//    cout<<n.palindrome("abba","abba")<<endl;
//    cout<<n.palindrome("aca","aba")<<endl; // not a palindrome
//    cout<<n.palindrome_easy("madam","madam")<<endl;
//    cout<<n.palindrome_easy("abba","abba")<<endl;
//    cout<<n.palindrome_easy("abba","dbba")<<endl; // not a palindrome

    // ARMSTRONG NUMBER =>
//    cout<<n.armstrongNumber(153,3)<<endl;
//    cout<<n.armstrongNumber(370,3)<<endl;
//    cout<<n.armstrongNumber(371,3)<<endl;
//    cout<<n.armstrongNumber(372,3)<<endl;
//    cout<<n.armstrongNumber(407,3)<<endl;

    // PERFECT NUMBER


    // ANAGRAM
    // cout<<n.simplyAnagram("abc","acb")<<endl;


}
