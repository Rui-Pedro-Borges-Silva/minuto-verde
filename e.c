#include <stdio.h>
int main(){
  int n ,contaz = 0 ,contam = 0 ,contv = 0;
  
  while(n != -1){
    
    scanf("%d",&n);
    
    if(n >=1 && n <=10)
      contaz = contaz + 1;
    
    if(n>=11 && n<=23)
      contv = contv + 1;

    if(n>= 24 && n<=40)
      contam = contam + 1;

  }
  printf("azul: %d\n", contaz);
  printf("amarelo: %d\n", contam);
  printf("verde: %d\n", contv);
  return 0;
}
  
    
  
