#include<iostream>
using namespace std;

#define ll      long long

ll binexp(ll a,ll b)
{
    if(b==0) return 1;
    ll x= (binexp(a,b/2));
    if(b%2==0)
    {
        return x*x;
    }
    else
    {
        return x*x*a;
    }
}

ll iterExp(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
            ans*=a;
        b=b>>1;
        a*=a;
    }
   return ans;
}

//////////////////////////////////////////////////////////////////////
// Power of Matrix

struct  matrix
{
    int mar[2][2];
};

matrix ident()
{
    matrix m;
    m.mar[0][0]=1;
    m.mar[0][1]=0;
    m.mar[1][0]=0;
    m.mar[1][1]=1;

    return m;
}

matrix multiply(matrix a,matrix b)
{
    matrix C;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<2;col++)
        {
            int  here =0;
            for(int i=0;i<2;i++)
            {
                here+=a.mar[row][i]*b.mar[i][col];
            }
            C.mar[row][col]=here;
        }
    } 
    return C;
}

matrix expmatrix(matrix A,int n)
{
    if(n==0)
        return ident();
    matrix X= expmatrix(A,n/2);
    if(n%2==0)
        return multiply(X,X);
    else
        return multiply(multiply(X,X),A);
}
///////////////////////////////////////////////////////////////
// Transfromation

void transformation(matrix A,int n,int x,int y)
{
    // A is co-efficient matrix
    matrix m=expmatrix(A,n);

    // multipy m with [x y] initial value of x and y
}


///////////////////////////////////////////////////////////////
// Get Nth Fibonacci
int get_nth_fibo(int n)
{
    matrix fib;
    fib.mar[0][0]=1;
    fib.mar[0][1]=1;
    fib.mar[1][0]=1;
    fib.mar[1][1]=0;

    return expmatrix(fib,n).mar[0][0];
}

int main()
{
    //cout<<binexp(2,10)<<endl;
    // matrix a;
    // a.mar[0][0]=2;
    // a.mar[0][1]=3;
    // a.mar[1][0]=3;
    // a.mar[1][1]=5;
    // matrix b=expmatrix(a,2);

    // 1 2 3 5 8 13
    cout<<get_nth_fibo(0)<<endl; // 1
    cout<<get_nth_fibo(1)<<endl; // 1
    cout<<get_nth_fibo(2)<<endl; // 2
    cout<<get_nth_fibo(3)<<endl;
    cout<<get_nth_fibo(4)<<endl;
    cout<<get_nth_fibo(5)<<endl;
    cout<<get_nth_fibo(6)<<endl;
    
}