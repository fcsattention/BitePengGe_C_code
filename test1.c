#include <stdio.h>
int main(){
  // printf("Hello C\n"); //斜杠/0是字符串的结束标志
  // printf("%s\n", "Hello C"); //%s打印字符串
  // printf("%d\n", 10000);//打印整型
  // printf("%c\n", 'x');//单引号中放的是字符
  // printf("%f\n", 3.14);//打印小数（浮点数），小数点位默认打印6位
  // printf("%c\n", 'a');
  // printf("%c\n", 'a' - 32); //A
  // printf("%d\n", '0' );

  
  //fot循环打印32-127ASCII值对应的字符
  // int i = 0;
  // for (i = 32; i<= 127; i++){
  // printf("%c\n", i );
  // }


  // char arr1[] = "abcdef";
  // char arr2[] = {'a','b','c','d','e','f','\0'};
  // printf("%s\n", arr1);
  // printf("%s\n", arr2);

  // printf("\a");

  printf("%c\n", '\130');//130是八进制数
  printf("%c\n", 'x35');//x35是十六进制数
  return 0;
}