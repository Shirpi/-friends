#include <stdio.h>
void main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c",&ch);
  if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
  {
  printf("%c is an alphabet.",c);
  }
  else
  {
  printf("%c is not an alphabet.",c);
  } 
}
