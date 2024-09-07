

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

 void main()

{

int alsize], n, i;

clrscr();

printf("\n enter the size of the array:");

scanf (ed",&n);

printf("\n enter %d elements",n);

for(i=0;i<n;i++)

scanf ("d",&a[i]);

printf("\n array before sorting:N\t");

for(i=0;i<n;i++)

printf ("%d ", a[i]);

selectionsort(a,n);

printf("\n array after sorting:\n");

for(i=0;i<n;i++)

printf ("%d ", a[i]);

getch();
}


