#include<bits/stdc++.h>
using namespace std;
#define c cout
int main()
{
    int a[]={1,2,2,5,5};
    bool f=binary_search(a,a+5,3); // 0
    c<<f<<endl;

///////////////////////////////////////////////////
    /// lower_bound()
    // if found return index else return greater immediate vlaues index
    int i = lower_bound(a,a+5,2)-a; // 1 
    c<<i<<endl;

    i = lower_bound(a,a+5,5)-a; // 3
    c<<i<<endl;

    i = lower_bound(a,a+5,6)-a; // 5
    c<<i<<endl;

    i = lower_bound(a,a+5,3)-a; // 3
    c<<i<<endl;

    ///////////////////////////////////////////
    /// upper_bound
    /// always return greater index value
    i = upper_bound(a,a+5,2)-a;
    c<<i<<endl;


}
