#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0;n,m,temp,a[10],b[10],c[20];
 clrscr();
printf("enter the no of elements in first array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter the no of elements in second array");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<n&&j<m)
{
 if(a[i]<= b[j])
 {
 c[k]=a[i];
 i++;
 k++;
}
else
{
c[k]=b[j];
k++;
j++;
}
}
while(j<m)
{
c[k]=b[j];
k++;
j++;
}
printf("\nmerged array");
for(i=0;i<n+m;i++)
{
printf("\n%d",c[i]);
}
for(i=0;i<n+m-1;i++)
{
for(j=i+1;j<n+m;j++)
{
ifc[j]<c[i])
{
 temp=c[i];
 c[i]=c[j];
 c[j]=temp;
 }
 }
 }
 printf("\nsorted merged array ");
 for(i=0;i<n+m;i++)
 {
 printf("\n%d",c[i]);
 }
 getch();
 }

