#include <stdio.h>

float rainfall[5][12] = {
    {0.19, 0.55, 0.38, 1.44, 2.35, 1.44, 2.24, 0.73, 0.36, 3.54, 0.11, 0.38},
    {5.50, 7.13, 5.44, 5.45, 4.51, 3.89, 3.68, 1.55, 6.79, 1.35, 0.85, 6.46},
    {0.52, 2.28, 3.03, 1.57, 8.39, 2.98, 3.99, 0.10, 0.03, 6.84, 3.53, 4.13},
    {3.81, 4.31, 5.81, 1.76, 4.21, 2.02, 2.92, 2.70, 7.46, 1.33, 0.76, 3.97},
    {4.83, 2.03, 0.47, 3.49, 2.91, 2.24, 2.36, 0.82, 1.26, 2.17, 3.37, 6.8}
};

int main()
{
    float total = 0.0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            total += rainfall[i][j];
        }
    }
    printf("%f", total);
    return 0;
}