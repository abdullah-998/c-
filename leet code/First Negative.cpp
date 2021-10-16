#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void solution(int arr[],int k,int n)
{
    queue<int> q;
    for(int i=0;i<k-1;i++)
    {
        if(arr[i]<0)
            q.push(arr[i]);
    }
    for(int i=k-1;i<n;i++)
    {
        if(arr[i]<0)
            q.push(arr[i]);
        if(q.empty())
            cout<<0<<" ";
        else
        {
            if(q.front()==arr[i-2])
            {
                cout<<arr[i-2]<<" ";
                q.pop();
            }
            else
                cout<<q.front()<<" ";
        }
    }
    
}


int main()
{
    int arr[]={8,-2,-3,-7,8,4,5};
    solution(arr,3,7);
    
}