#include<bits/stdc++.h>
using namespace std;

class DirectAddressing{
    bool directAddTab[101];
    public:
    void insert(int val){
        if(val>=0 and val<=100){
            if(directAddTab[val]) return;
            else{
                directAddTab[val]=true;
            }
        }else{
            cout<<"Out of index\n";
        }
    }
    void erase(int val){
        if(val>=0 and val<=100){
            directAddTab[val]=false;
        }else{
            cout<<"Out of index\n";
        }
    }

    bool get(int val){
        if(val>=0 and val<=100){
            if(directAddTab[val]) return true;
        }
        return false;
    }
};

class Hash{

};

int main(){
    DirectAddressing d;
    d.insert(1);
    d.insert(9);
    d.insert(12);

    cout<<d.get(12)<<endl;
    d.erase(9);
    cout<<d.get(9)<<endl;
}
