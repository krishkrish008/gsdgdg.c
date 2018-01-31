#include <stdio.h>
int main()
{
int a, b, c, d= 0;
printf("Enter number ");
scanf("%d", &a);
b= a;
while (b!= 0)
{
c= b%10;
d += c*c*c;
b /= 10;
}
if(d== a)
printf("%d Armstrong number.",a);
 else
printf("%d Armstrong number.",a);
return 0;
}
