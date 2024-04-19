#include <stdio.h> 
#include <math.h> 
 
double f(double x) { 
    return x * x; 
} 
 

double derivative(double x) { 
    const double h = 0.01; 
    double x1 = x - h; 
    double x2 = x + h; 
    double y1 = f(x1); 
    double y2 = f(x2); 
    return (y2 - y1) / (2 * h); 
} 
 
int main() { 
    double x_values[] = {0.1, 0.2, 0.3, 0.4, 0.5}; 
    for (int i = 0; i < 5; ++i) { 
        double x = x_values[i]; 
        double df_dx = derivative(x); 
        printf("At x = %.2lf, f'(x) = %.4lf\n", x, df_dx); 
    } 
    return 0; 
}