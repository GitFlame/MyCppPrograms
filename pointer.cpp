#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int num[]={56,75,22,18,90};
    int *ptr;
    int i;
    cout<<"The array values are:\n";
        for(i=0;i<5;i++)
    cout<<num[i]<<"\n";
    ptr=num;
    cout<<"\nValue of ptr  :"<<*ptr;
    cout<<"\n";
    ptr++;
    cout<<"\nValue of ptr++  :"<<*ptr;
    cout<<"\n";
    ptr--;
    cout<<"\nValue of ptr--  :"<<*ptr;
    cout<<"\n";
    ptr=ptr+2;
    cout<<"\nValue of ptr+2  :"<<*ptr;
    cout<<"\n";
    ptr=ptr-1;
    cout<<"\nValue of ptr-1  :"<<*ptr;
    cout<<"\n";
    ptr=ptr+3;
    cout<<"\nValue of ptr+=3  :"<<*ptr;
    ptr=ptr-2;
    cout<<"\n";
    cout<<"\nValue of ptr-=2  :"<<*ptr;
    cout<<"\n";
    return 0;
    getch();
}
    
    

