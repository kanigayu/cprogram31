#include<stdio.h>
void swap(int ,int );
void main()
{
int a,b;
printf("\nEnter the two num");
scanf("%d\t%d",&a,&b);
printf("\n before swapping%d\t%d ",a,b);
swap(a,b);
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\nAfter swapping %d\t%d",x,y);
}
