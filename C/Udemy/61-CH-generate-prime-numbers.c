#include <stdio.h>


int main()
{    
    int primes[100] = {2, 3};

    for (int p = 5, index = 2; p <= 100; p += 2, index++)
    {
        for (int i = 1; i < index; i++)
        {
            if (p % primes[i] == 0)
            {
                index--;
                break;
            }
            
            primes[index] = p;
        }
    }
    
    for (int i = 0; i <= 100; i++)
    {
        printf("%d\n\n", primes[i]);
    }
    
    return 0;
}
