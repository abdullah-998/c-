#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    
    for(int i=0;i<5;i++)
    {
        ans+=n/a[i]; 
        n=n%a[i];
    }
    cout<<ans<<endl;
}


// #include<bits/stdc++.h>
// using namespace std;


// int main(){
	
// 	int d[5]={100,20,10,5,1};
// 	int n;
// 	cin>>n;
// 	int cnt=0;
// 	for(int i=0;i<5;i++){
// 		while(n/d[i]>0){
// 			cnt+=n/d[i];
// 			n=n%d[i];
// 		}
// 	}
// 	cout<<cnt;



// }


// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     long long n,d=0;
//     cin >> n;
//     while (n >= 100)
//     {
//         d += n / 100;
//         n = n % 100;
//     }
//     while (n >= 20)
//     {
//         d += n / 20;
//         n = n % 20;
//     }
//     while (n >= 10)
//     {
//         d += n / 10;
//         n = n % 10;
//     }
//     while (n >= 5)
//     {
//         d += n / 5;
//         n = n % 5;
//     }
//     d += n;
//     cout << d;
//     return 0;
// }
