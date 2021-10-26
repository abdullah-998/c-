#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

bool util(unordered_map<char,int> &m1,unordered_map<char,int> &m2,string ptr)
{
    for(int i=0;i<ptr.size();i++)
    {
        if(m1[ptr[i]]!=m2[ptr[i]])
            return false;
    }
    return true;
}
int main()
{
    BOOST;
    string s,ptr;
    cin>>s>>ptr;
    unordered_map<char,int> m1;

    for(int i=0;i<ptr.size();i++)
        m1[ptr[i]]++;
    
    unordered_map<char,int> m2;
    for(int i=0;i<ptr.size()-1;i++)
    {
        if(m1[s[i]]!=0)
            m2[s[i]]++;
    }
    int c=0;
    int x=0;
    for(int i=ptr.size()-1;i<s.size();i++)
    {
        if(m1[s[i]]!=0)
            m2[s[i]]++;
        
        if(util(m1,m2,ptr))
            c++;
        m2[s[x]]--;
        x++;
    }
    cout<<c<<endl;
} 
// class Solution {
    
// public:
//     vector<int> findAnagrams(string s, string p) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
        
//         vector<int> ans;
//         vector<int> hash(26,0);
//         vector<int> phash(26,0);
//         int window = p.size();
//         int len = s.size();
//         if(len<window)
//             return ans;
//         int left = 0,right = 0;
//         while(right<window)
//         {
//             phash[p[right]-'a'] +=1;
//             hash[s[right++]-'a'] +=1;
//         }
//         right -=1;
//         while(right<len)
//         {
//             if(phash == hash)
//                 ans.push_back(left);
//             right+=1;
//             if(right!=len)
//                 hash[s[right]-'a'] +=1;
//             hash[s[left]-'a'] -=1;
//             left+=1;
//         }
//         return ans;
//     }
// };