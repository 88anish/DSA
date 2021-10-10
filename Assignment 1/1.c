#include <stdio.h>
#define MAX 200

int floatingnumbervalid(char temp[]){
  int isvalid=0;
  for(int i=0;i<MAX-1;i++){
    if(temp[i]=='.' && temp[i+1]!=0){
      isvalid=1;
    }
    return isvalid;
  }
  
int main(){
  char nums[MAX]={0};
  printf("enter the number ");
  scanf("%s",num);
  
  printf("floating number is %s\n",((floatingnumbervalid(num))?"valid":"invalid"));
  return 0;
}
