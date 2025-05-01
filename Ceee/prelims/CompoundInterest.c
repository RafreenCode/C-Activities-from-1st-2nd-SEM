#include <stdio.h>
#include <math.h>

double calculateCompound(double P, double r, int t) {
    int n = 1; // Annually
    r = r / 100.0; // Convert percentage to decimal
    double A = P * pow(1 + (r / n), n * t); // Total amount
    //return A - P; // Return compound interest only
    return A;//Return the entire amount
}

int main() {
    double P = 3000, r = 6;
    int t = 1;
    
    double interest = calculateCompound(P, r, t);
    printf("Compound Interest: %.2f\n", interest);

    return 0;
}
