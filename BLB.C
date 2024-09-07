

// Program to implement bubble sort

#include<stdio.h>
 #include<conio.h>
#define size 10


int n;
void bsort(int a[], int item,int pos)
{
int i,j,temp;

 if(a[j]>a[j+1]
  {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }