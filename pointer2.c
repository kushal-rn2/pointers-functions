#include<stdio.h>
int main()
{
int a=10;
char b='$';
float c=145.78;
void *vptr;
vptr=&a;
printf("\n the address of a :%p",vptr);
printf("\n the value of a using vptr:%d",*((int*)vptr));
vptr=&b;
printf("\n the address of b :%p",vptr);
printf("\n the value of a using vptr:%d",*((int*)vptr));
vptr=&c;
printf("\n the address of c :%p",vptr);
printf("\n the value of a using vptr:%2f",*((float*)vptr));
return 0;
}
