#include<bits/stdc++.h>

using namespace std;
// Backtracking problems
void subset(int i,vector<int> &ds, int arr[],int n);
int countF(int i,int sum,int arr[],int n);

// rat in maze in backtracking
void findPath(int i,int j,string st);
void rateInMaze(int i,int j,string st,vector<int> &vec);
int n=4,m=3;


// for single printing
bool func(int i,vector<int> &vec,int sum);

// NQueen
bool NQueen(int col,vector<vector<int>> &mat);
bool isSafe(int row,int col,vector<vector<int>> &mat);


int main(){
    vector<vector<int>> vec(n,vector<int>(n,0));
    NQueen(0,vec);

    //findPath(0,0,"");
    // int arr[]={1,2,3};
    // cout<<countF(0,3,arr,3);
    // vector<int> v;
    // subset(0,v,arr,3);
}

bool isSafe(int row,int col,vector<vector<int>> &mat){
    // row-- col--
    for(int i=row,j=col;i>=0 and j>=0;i--,j--){
        if(mat[i][j]==1) return false; 
    }

    for(int i=row,j=col;i>=0 and j>=0;i,j--){
        if(mat[i][j]==1) return false; 
    }

    for(int i=row,j=col;i<n and j>=0;i++,j--){
        if(mat[i][j]==1) return false; 
    }
    return true;
}

bool NQueen(int col,vector<vector<int>> &mat){
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"====================\n";
        return true;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,mat)){
            mat[row][col]=1;
            NQueen(col+1,mat);
            mat[row][col]=0;
        }
    }

    return false;
}

int k=3;
bool func(int i,int arr[],vector<int> &vec,int sum){
    //base case
    if(i==n){
        if(sum%k==0){
            for(auto it:vec){
                cout<<it<<" ";
            }
            return true;
        }
        return false;
    }

    // pinking part
    vec.push_back(arr[i]);
    sum+=arr[i];
    // call the function with pick part
    if(func(i+1,arr,vec,sum)) return true; // here i will not back track and will return from function
    // backtrack
    vec.pop_back();
    sum-=arr[i];

    // not picking state
    if(func(i+1,arr,vec,sum)) return true;


}

string dir = "DRUL";
int di[]={1,0,-1,0};
int dj[]={0,1,0,-1};

void rateInMaze(int i,int j,string st,vector<vector<int>> &visited){
    if(i>=n or j>=m or j<0 or i<0 or visited[i][j]==1) return;

    if(i==n-1 and j==m-1){
        cout<<st<<endl;
        return;
    }

    visited[i][j]=1;
    for(int x=0;x<4;x++){
        st+=dir[x];
        rateInMaze(i+di[x],j+dj[x],st, visited);
        st.pop_back();
    }


    // st+='D';
    // findPath(i+1,j,st);
    // st.pop_back();

    // st+='R';
    // findPath(i,j+1,st); 
    // st.pop_back();

    // st+='U';
    // findPath(i-1,j,st);
    // st.pop_back();

    // st+='L';
    // findPath(i,j-11,st); 
    // st.pop_back();
    
    visited[i][j]=0;
}

void findPath(int i,int j,string st){
    if(i>=n or j>=m) return;

    if(i==n-1 and j==m-1){
        cout<<st<<endl;
        return;
    }

    st+='D';
    findPath(i+1,j,st);
    st.pop_back();

    st+='R';
    findPath(i,j+1,st); 
    st.pop_back();
}

// count problem
int countF(int i,int sum,int arr[],int n){
    if(i==n){
        if(sum==0){
            return 1;
        }
        return 0;
    }

    int left=0,right=0;

    // when can u pick a particular index
    if(arr[i]<=sum){
        sum-=arr[i];
        left = countF(i,sum,arr,n);
        sum+=arr[i];
    }
    // non pick, move to next index
    right = countF(i+1,sum,arr,n);

    return left+right;
}

void subset(int i,vector<int> &ds, int arr[],int n){
    if(i==n){    
        cout<<"{ ";
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<"}\n";
        return;
    }
    ds.push_back(arr[i]);
    subset(i+1,ds,arr,n);
    ds.pop_back();//backtracking

    subset(i+1,ds,arr,n);
}