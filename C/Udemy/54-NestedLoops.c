#include <stdio.h>

int main()
{

    int sum;
    int count = 20;
    int loopCount = 0;

    for (int i = 1; i <= count; ++i)
    {
        sum = 0;    //Initialize sum for the inner loop

        //Calculate sum of integer from 1 to i
        for (int j = 1; j <= i; ++j)
        {
        sum += j;
        loopCount += 1; //provera koliko puta obrne unutrasnji loop. Isto kao zbig :/
        }
        printf("\n%d\t%d", i, sum);     //Output sum 1 to 10
    }

    printf("\n%d", loopCount);

    //******  OR  ******//

    for (int i = 1; i <= count; ++i)
    {
        sum = 1;    //Initialize sum fot the inner loop
        int j = 1;  //Initialize integer to be added
        printf("\n1");

        //Calculate sum of integer from 1 to i
        while (j < i) {
            sum += ++j;
            printf(" + %d\n", j);   //Output +j on the same line
        }


        printf(" = %d", sum);   // Output = sum
    }


return 0;
}
