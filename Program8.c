#include <stdio.h>
int main()
{
 int n, i, sum = 0;
 printf("Enter a positive integer: ");
 scanf("%d",&n);
 if(n>=0)
 {
 for(i=1; i <= n; ++i)
 {
 sum += i;   
 }
 printf("Sum = %d",sum);
}
else
 printf("%d is not a natural nmber",n)
return 0;
}
