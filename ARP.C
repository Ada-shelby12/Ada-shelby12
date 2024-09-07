/* Program to demonstrate Array using Pointers in c   */
 #include<conio.h>
 #include<stdio.h>
 #include<stdlib.h>

 void main()
 {
 int i,*a,n;
 clrscr();
 printf("\n Enter the size of Array:");
      scanf("%d",&n);
       // Allowcate Dynamic Memory  //
	 a=(int*)malloc(n*sizeof(int) *n);

  printf("\n Enter %d Values of the array:",n);
      for(i=0;i<4;i+=2)
	scanf("%d",(a+i));
	//Print the Array using Pointers //
       printf("\n Array Elements\n:");
       for(i=0;i<n;i++)
	  printf("%d",*(a+i));
	  getch();
	  }


