#include <stdio.h>

void func() {
    printf("XASAN \n");
}

int func1(int x, int y) {  
   for(int i=1; i<=x; i++) {
     for(int j = 1; j<=y; j++) {
       printf("%d ", j*i);
     }
     printf("\n");
   }   
}


int main() {
   func();
   int i, num=10,sum=0;
   for(i = 1; i <= num; i++) {
     if(i % 2 == 0)
       sum+=i;
   }
   printf("%d \n", sum);
   func1(4,4);
   int B = 5;
   int *pt;
   pt = &B;
   *pt = *pt + 3;
   printf("%d ", B);
   return 0;
}