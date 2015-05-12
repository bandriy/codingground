#include <stdio.h>

int main()
{
    int i,j;
    float sum;
    char letter;
    char string[30]="Andriy";
    
    letter='b';
   /* printf ("%c stands for %s \n ",letter , string);*/
  
  for (i=0; i<sizeof(string) && string[i]!=0; i++)
  {
    printf ("i=%d:%c\n", i, string[i]);

  }
  
    printf ("-----\n length of string \"%s\"=%d.\n", string, i);
    return 0;
}