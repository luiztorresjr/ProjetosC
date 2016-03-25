/*
08-28-2014-IFSP

*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
int x;
int *p;
x = 9;
p = &x;
printf("\n *p %d ", *p);
*p=*p*10;
printf("\n %d ", *p);
system("pause");
}
