#include<stdio.h>
int main()
{
int a=100;
int *ptr;
ptr=&a;
printf("\n a=%d",a);
printf("\n &a=%d",&a);
printf("\n *&a=%d",*&a);
printf("\n value of a using ptr=%d",*ptr);
printf("\n address of ausing ptr=%d",ptr);
*ptr=*ptr+150;
printf("\n value of a after modification =%d",*ptr);
return 0;
}
