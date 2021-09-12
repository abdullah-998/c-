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

long long binExp(long long a,int n){
    int ans=1;
    while(n>0){
        if(n%2==1){
            ans = ans*a;
        }
        n=n>>1;
        a=a*a;
    }
    return ans;
}

int main()
{
    cout<<binExp(2,5)<<endl;
}