#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main() {
    double a = 3.0;
    double b = 4.0;
    double c = 5.0;

    double alpha = asin(a/c)*180.0 / PI;
    double beta = asin(b/c)*180.0 / PI;
    double gamma = 90.0;
    printf("Small angle: %.21f degrees\n", alpha);
    printf("largest angle: %.21f degrees\n", beta);
    printf("Small angle: %.100f degrees\n", gamma);
    return 0;
}