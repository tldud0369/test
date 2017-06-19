#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

 void *p;
 void *a;
 int b;

 a = p;

 printf("malloc이 호출되기 전 주소값: %p\n", p);
 a =  malloc(1024);
 printf("malloc이 호출된 후 주소값: %p\n", a); 
 b = abs(p - a);

 printf("malloc(1024)의 메모리 영역 크기: %d\n", b);
 getchar();
 return(EXIT_SUCCESS);
}
