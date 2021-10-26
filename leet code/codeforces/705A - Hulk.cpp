/*************************************************
 * ***********************************************
 * 
 * https://codeforces.com/problemset/problem/705/A
 * 
**************************************************
**************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i(1);
    cin>>n;

    while(i<=n){
        if(i%2==0){
            cout<<"I love ";
            i==n?cout<<"it":cout<<"that ";
        }
        else{
            cout<<"I hate ";
            i==n?cout<<"it":cout<<"that ";
        }
        i++;
    }
}