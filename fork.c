#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void main()
{
int n,i;
printf("Enter no. of elements to enter in an array: ");
scanf("%d",&n);
int a[100];
printf("Enter elements in an array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int t=fork();
if(t==0)
{
int sum1=0;
for(i=0;i<n;i++)
if(a[i]%2==0)
sum1+=a[i];
printf("sum of even no.s using child process is %d\n:",sum1);
}
else
{
int sum=0;
for(i=0;i<n;i++)
if(a[i]%2!=0)
sum+=a[i];
printf("sum of odd no.s using parent process is %d\n:",sum);
}}
