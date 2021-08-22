#include<iostream>
using namespace std;

void basicOfPointer();
void pointerTypeCasting();
void pointerToPointer();
void changingValue(int *p);
void arrayAndPointer();
void stringInC();
void stringAsParam(char* s);

int main()
{
  char s[20]="Hello World";
  stringAsParam(s);
}

void stringAsParam(char *s)
{
    while(*s!='\0')
    {
        cout<<*s;
        s++;
    }
    cout<<endl;
}

void stringInC()
{
    char c[5]="JOHN";
    int ar[]={1,2,43};
    cout<<"Printing start address of c variable: "<<c<<endl; //character array are not like general array
    cout<<"Printing general array: "<<ar<<endl;
    char *c2= c;
    cout<<*c2<<endl;
    cout<<*(c2+1)<<endl;
    cout<<*(c2+2)<<endl;
}

void arrayAndPointer()
{
    int arr[5] = {1,3,54,7,8};
    printf("first address of array: %d\n",arr);//general array return first address
    printf("first address of array using pointer concept: %d\n",&arr[0]);// reutn the first address of array
    printf("first value of array: %d\n",arr[0]); // arr[0] == *(arr+1)
    printf("first value of array: %d\n",*arr);

    int *p = &arr[2];
    cout<<*p<<endl;
}
void changingValue(int *p)
{
    *p=*(p)+1;
}

void pointerToPointer()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r= &q;
    printf("vlaue of a: %d \n",a);
    printf("address of a using p: %d \n",p);
    printf("derefencint p: %d \n",*p);
    printf("address of p using q: %d \n",q);
    printf("adress of a using q: %d \n",*q);
    printf("value of a using derefencing q: %d \n",**q);
    printf("address of q: %d \n",r);
    printf("address of p: %d \n",*r);
    printf("address of a: %d \n",**r);
    printf("vlaue of a using dereferencing q: %d \n",***r);
}

void basicOfPointer()
{
    int a=123;
    int *p;
    p=&a;
    cout<<"address of a by p: "<<p<<endl;
    cout<<"address of a: "<<&a<<endl;
    cout<<"real address of p: "<<&p<<endl;
    cout<<"value of *p: "<<*p<<endl;
    cout<<"value of a: "<<a<<endl;
    // Pointer Arithemtic
   cout<<"\t\tPointer Arithmetic"<<endl;
   cout<<"p address: "<<p<<endl;
   cout<<"p+1 address: "<<p+1<<endl;
   cout<<"p+2 address: "<<p+2<<endl;

}
void pointerTypeCasting()
{
    int a=1025; // 00000000 00000000 00000100 00000001
    int *p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    // pointer type casting
    char *p0;
    p0=(char*)p;

    printf("%d = %d",p0,*p0); // 1
    cout<<endl;
    printf("%d = %d",(p0+1),*(p0+1)); // 4
    cout<<endl;
    printf("%d = %d",(p0+2),*(p0+2));
    cout<<endl;

    // generic derefencing type
    void *p1= p;
    printf("%d",p1);
}