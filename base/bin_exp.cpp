#include<iostream>
using namespace std;

long long binexp(long long a,long long n){
    if(n==0)
        return 1;
    if(n%2==0){
        long long half_ans = binexp(a,n/2);
        cout<<half_ans<<endl;
        return half_ans*half_ans; 
    }else{
        long long half_ans = binexp(a,n/2);
        cout<<half_ans<<endl;
        return half_ans*half_ans*a; 
    }
}

int main()
{
    cout<<binexp(25,45)<<endl;
}