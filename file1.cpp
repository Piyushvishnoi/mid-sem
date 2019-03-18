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
}
else
{
minus=n-m;
}
}
void main()
{
calc c;
c.addition();
c.sub();
}

