/* Dok sam radio udemy chalenge C-61
generate prime numbers
slucajno napravio fibonacci
posle slusanja 396
ili sam samo mislio da su prime brojevi
zbir prethodna dva. a opet, zasto?
Kovin, 31. Januar 2021.
Vikendica, na lezaju,
sa improvizovanim prostoljem za kompjuter*/

#include <stdio.h>

int main(){
    int primes[100] = {1, 2};

    int x = 0;
    for (x = 0; x <= 100; x++){
        primes[x+2] = primes[x] + primes[x+1];
        printf("\n%d\n", primes[x+2]);
    }

    return 0;
}
