#include<stdio.h>

#include"../../include/sum.h"

int main(void){
  int a = 0;
  int b = 0;
  puts("输入两个整数：");
  scanf("%d %d",&a,&b);
  printf("%d + %d = %d\n",a,b,sum(a,b));
  return 0;
}
