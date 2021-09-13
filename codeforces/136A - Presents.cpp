#include <iostream>
using namespace std;

int main()
{
    int n,pi,arr[101];
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>pi;
        arr[pi]=i;
    }

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}