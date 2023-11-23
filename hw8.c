#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int n) {
    double mean = 0.0, sum = 0.0, variance = 0.0, stdDeviation = 0.0;

    // Calculate mean
    for (int i = 0; i < n; ++i) {
        mean += arr[i];
    }
    mean /= n;

    // Calculate variance
    for (int i = 0; i < n; ++i) {
        sum += pow(arr[i] - mean, 2);
    }
    variance = sum / n;

    // Calculate standard deviation
    stdDeviation = sqrt(variance);

    return stdDeviation;
}

int main() {
    double numbers[5];

    // Input 5 real numbers
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    // Calculate and display standard deviation
    double result = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3lf\n", result);

    return 0;
}
