#include<stdio.h>
#include<conio.h>

void main ()
	    {
char ch;
clrscr();

printf("\nEnter A Charecter:");

scanf("%c", &ch);

if (ch >='0' &&  ch <='9')
printf("\n Numeric character"); 

else if (ch> 'a' && ch <= 'z')
printf("\n Lower case character"); 

else if (ch >= 'A' && ch<= 'Z')
printf("\n Upper case character");

else
printf("\n Special character");

printf("\n ASCII value of%c is %d", ch, ch);

getch();
}