#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest Formula: CI = P * (1 + R/100)^T - P
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
