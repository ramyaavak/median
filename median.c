#include<stdio.h>
int main()
{
int a[20],b,i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
  for(j=i+1;j<n;j++)
  {
   if(a[i]<a[j])
   {
     b=a[i];
     a[i]=a[j];
     a[j]=b;
    }
   }
  }
  printf("%d",a[n/2]);
  return 0;
 } 
