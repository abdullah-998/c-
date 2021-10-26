//  https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/

#include <bits/stdc++.h>

using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    int n;
    cin>>n;
    long long int i,j=1,s=0,p=0,a[n],h=0;

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);// sorting in increasing order

    for(i=n-1;i>=0;i--)
    {
        if(a[i]>=0)
        {
            s+=a[i];    // sum 
            h++;        // frequency
        }
        else
            break;

    }

    if(h)
        cout<<s<<" "<<h; // sum and frequency
    else
        cout<<a[n-1]<<" 1"; // if all are negative or 1 is positive last one is the biggest element
}


// int main()
// {
//     long long n,sum=0,x,c=0,mini=-1000000000000000000;

//     cin>>n;
//     while(n--)
//     {
//         cin>>x;
//         if(x>=0)
//         {
//             sum+=x;
//             c++;
//         }
//         else
//         {
//             if(x>mini)
//                 mini=x;
//         }
//     }
//     if(sum>0)
//         cout<<sum<<" "<<c<<endl;
//     else
//     {
//         cout<<mini<<" "<<1<<endl;
//     }

// }

// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n;
//     cin>>n;
//     long long int i,j=1,s=0,p=0,a[n],h=0;

//     for(i=0;i<n;i++)
//         cin>>a[i];

//     sort(a,a+n);

//     for(i=n-1;i>=0;i--)
//     {
//         if(a[i]>=0)
//         {
//             s+=a[i];
//             h++;
//         }
//         else
//             break;

//     }

//     if(h)
//         cout<<s<<" "<<h;
//     else
//         cout<<a[n-1]<<" 1";
// }