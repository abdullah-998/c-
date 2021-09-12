#include<iostream>
using namespace std;

void arrayPointer(int arr[][2]);
void dynamicMemory();
int* add(int *a);
int Add(int a,int b);
int* retArray(int arr[2][2]);
void A()
{
    cout<<"Hello World"<<endl;
}

void B(void (*ptr)())
{ 
    ptr();
}
int main()
{
    B(A);

    // int arr[2][2]={{1,2},{3,4}};
    
    // int *ptr = retArray(arr);
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<endl;

    ///////////////////////////////////////////////////////////////
    // HOW TO POINT A FUNCTION

    // int (*p)(int,int);
    // p=&Add; //p=Add
    // cout<<p<<endl;
    // cout<<&Add<<endl;//
    // cout<<(*p)(12,23)<<endl; //p(2,3)
}

int arr1[2][2];
int* retArray(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr1[i][j]=arr[i][j];
        }
    }
    return arr1[1];
}


int Add(int a,int b)
{
    return a+b;
}
int c;
int* add(int *a)
{
    c=*a+1;
    return &c;
}

void dynamicMemory()
{
    int *p = new int;
    *p=123;
    cout<<*p<<endl;
    delete p;

    p = new int[10];
    *p=124; // p[0]
    *(p+1)=125; // p[1]
    cout<<p[1]<<endl;
    delete []p;
}

void arrayPointer(int arr[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}