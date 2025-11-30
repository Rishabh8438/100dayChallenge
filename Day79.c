/*
Question: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *infile;
    int num, count = 0;
    long long sum = 0;  
    double average = 0.0;

    infile = fopen("numbers.txt", "r");
    if (infile == NULL) {
        perror("Error opening numbers.txt");
        return EXIT_FAILURE;
    }

    while (fscanf(infile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(infile);

    if (count > 0) {
        average = (double)sum / count;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return EXIT_SUCCESS;
}