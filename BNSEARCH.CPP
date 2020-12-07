#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],f,l,u,m,s,n,i;
cout<<"enter the limit";
cin>>n;
cout<<"\nenter the elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
i=0;
u=n;
m=(l+u)/2;
cout<<"\nenter the value for search";
cin>>s;
if(s==a[m])
{
f=1;
}
else if(s<a[m])
{
u=m-1;
}
for(i=0;i<n;i++)

if(s==a[i])
{
f=1;
}
else if(s>a[m])
{
f=m+1;
}
if(f==1)
{
cout<<"\nelement found";
}
else
{
cout<<"\nelement not found";
}
getch();
}



