#include <stdio.h>
#include "cs50.h"

int main(void)
{
    const int N = 6; // Set the size of the array
    int scores[N];
    int sum = 0; // Variable to store the sum of scores

    // Loop to get scores and calculate sum
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
        sum += scores[i]; // scores plus it others equal to sum
    }

    // Calculate the average
    float average = (float) sum / N;
    printf("Average: %f\n", average);
}
