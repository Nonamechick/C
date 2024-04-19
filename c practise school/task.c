#include <stdio.h>

// name 
void func1() {
  printf("My names Xasan!\n");
}
// two numbers
int func2(int a, int b) {
    return a + b;
}

int main() {
  int d;
  func1(); 
  int c = func2(4,3);
  printf("c result  %d\n", c);
  printf("address of c   %p\n", &c);
  printf("Enter an integer:  \n");
  scanf("%d", &d);
  printf("Your number is %d", d);
  return 0;
}




