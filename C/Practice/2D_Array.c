#include <stdio.h>
int f1(int d){
  return(++d);
}
int main(){
  int d=4;
  d=f1(d++);
  printf("%d\n",d--);
  return 0;
  
}