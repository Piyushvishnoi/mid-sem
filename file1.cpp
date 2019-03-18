#include<iostream>
#include<conio>
class calc
{
public:
int m,n,sum,minus;
void addition()
{
cout<<"enter no for addition";
cin>>m>>n;
sum=m+n;
cout<<sum;
}
};
calc::void sub()
{
cout<<"enter no to be subtracted";
cin>>m>>n;
if(m>n)
{
minus=m-n;
cout<<minus;
}
else
{
minus=n-m;
cout<<minus;
}
}
calc::void multiply()
{
cout<<"enter two no";
cin>>m>>n;
mul=m*n;
cout<<mul;
}

void main()
{
calc c;
c.addition();
c.sub();
c.multiply();
}

