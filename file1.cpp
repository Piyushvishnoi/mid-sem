#include<iostream>
#include<conio>
class calc
{
public:
int m,n,sum;
void addition()
{
cout<<"enter no for addition";
cin>>m>>n;
sum=m+n;
cout<<sum;
}
};
void main()
{
calc c;
c.addition();
}

