#include <stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int term = 1; 
    long long sum = 0; 

    
    while (term <= n) {
        sum += (long long)pow(term, 5);
        term += 2; 
    }

    
    printf("Sum of the series up to %d^5 is: %lld\n", n, sum);

    return 0;
}
