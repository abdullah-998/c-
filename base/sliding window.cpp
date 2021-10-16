#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int maxSum(int *arr,int k,int n)
{
    if(n<k)
        return -1;
    int max_sum=0;
    for(int i=0;i<k;i++)
    {
        max_sum+=arr[i];
    }

    int current_sum=0;
    for(int i=0;i<n-k;i++)
    {
        current_sum=max_sum+arr[i+k]-arr[i];
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;
}

int main()
{
    BOOST;
    int arr[]={1,2,3,4,5};
    cout<<maxSum(arr,3,5)<<endl;
    cout<<maxSum(arr,2,5)<<endl;
}