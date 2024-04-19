#include <stdio.h>

void fun(int *B){
    for(int i = 0; i<3; i++){
        printf("Func %d %p \n", *B, B);
        *B=*B+10;
        B=B+1;
    }
}



int main() {
    int A[]={11,12,13};
    fun(A);
    for(int i=0; i<3;i++){
        printf("Main %d, %p \n", A[i], &A[i]);
    }
    return 0;

}
