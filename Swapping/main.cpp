#include<iostream>
#include<conio.h>
using namespace std;
template<typename T>
 void swap(T &a,T &b)
{
    T t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int a,b;
    cout<<"enter 2 no"<<endl;
    cin>>a>>b;
   // swap(a,b);
    //cout<<"value after swap a="<<a<<"\tb"=<<b<<endl;
    char ch1,ch2;
     cin>>ch1>>ch2;
   //swap(ch1,ch2);
    cout<<"value after swap ch1="<<ch1<<"\tb="<<b<<endl;



    return 0;
}

