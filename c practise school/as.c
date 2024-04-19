#include <stdio.h> 
 
void mult(int arr[], int size) { 
  
    for (int i = 0; i < size; i++) { 
        arr[i] *= 2; 
        printf("Data: %d, Address: %p\n", arr[i], (void *)&arr[i]); 
    } 
} 
 
int main() { 
    int B[] = {1, 2, 3}; 
    int size = sizeof(B) / sizeof(B[0]);  
 
     
    printf("Data and Addresses in Main Program:\n"); 
    for (int i = 0; i < size; i++) { 
        printf("Data: %d, Address: %p\n", B[i], (void *)&B[i]); 
    } 
 
     
    mult(B, size); 
 
    return 0; 
}