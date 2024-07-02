#include <stdio.h>
#include <conio.h>
int main()
 {
    float temp;
    char unit;

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    printf("Enter original unit (C, F, or K): ");
    scanf(" %c", &unit);

    if (unit == 'C' || unit == 'c') {
	float F = (temp * 9/5) + 32;
	float K = temp + 273.15;
	printf("%.2fC is equal to %.2fF and %.2fK\n", temp, F, K);
    } else if (unit == 'F' || unit == 'f') {
	float C = (temp - 32) * 5/9;
	float K = (temp - 32) * 5/9 + 273.15;
	printf("%.2fF is equal to %.2fC and %.2fK\n", temp, C, K);
    } else if (unit == 'K' || unit == 'k') {
	float C = temp - 273.15;

	float F = (temp - 273.15) * 9/5 + 32;
	printf("%.2fK is equal to %.2fC and %.2fF\n", temp, C, F);
    } else {
	printf("Invalid unit. Please enter C, F, or K.\n");
    }

    return 0;
}