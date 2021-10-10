#include <stdio.h>

int main()
{
 
  char mail[30];
  int i ;
  int temp1=0;
  int temp2=0;
  scanf("%s", mail);
  
  for(int i=0; mail[i]!='\0'; i++)
  {
      if(mail[i]=='@')
      temp1=i;
      if(mail[i]=='.')
      temp2=i;
      
     
  }
   if(temp1>3 && (temp2-temp1)>3)
   printf("valid mail");
   else
   printf("not valid mail");

    return 0;
}
