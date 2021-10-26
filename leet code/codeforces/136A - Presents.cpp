#include <iostream>
using namespace std;

int main()
{
    int n,pi,arr[101];
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>pi;// i got pi gifts
        arr[pi]=i; // pi gift for i
    }

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}