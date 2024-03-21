
#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_perfect_square(int n) {
    int root = sqrt(n);
    return root * root == n;
}

void count(int sequence[], int size, int *sum , int *even, int *odd, int *prime, int *square) {
    *sum = 0 ;
    *even = 0;
    *odd = 0;
    *prime = 0;
    *square = 0;
    
    for (int i = 0; i < size; i++) {
        *sum=*sum+sequence[i];
        if (sequence[i] % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }

        if (is_prime(sequence[i])) {
            (*prime)++;
        }

        if (is_perfect_square(sequence[i])) {
            (*square)++;
        }
    }
}

int main() {
    int sequence[] = {20, 13, 5, 8, 17, 23, 6, 11, 9, 12, 16, 19, 7, 14, 25, 18, 21, 10, 3, 4,
                      27, 22, 29, 15, 2, 31, 26, 33, 28, 35, 37, 24, 39, 32, 41, 36, 43, 38, 45,
                      47, 30, 49, 34, 51, 40, 53, 46, 55, 50, 57, 42, 59, 48, 61, 44, 63, 52, 65,
                      67, 54, 69, 56, 71, 58, 73, 60, 75, 62, 77, 64, 79, 66, 81, 68, 83, 70, 85,
                      87, 72, 89, 74, 91, 76, 93, 78, 95, 80, 97, 82, 99, 84, 101, 86, 103, 88, 105,
                      107, 90, 109, 92, 111, 94, 113, 96, 115, 98, 117, 100, 119, 102, 121, 104, 123, 106, 125};
    int size = sizeof(sequence) / sizeof(sequence[0]);
    int sum, even, odd, prime, square;

    count(sequence, size, &sum, &even, &odd, &prime, &square);
    printf("The sum: %d\n", sum);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("Prime numbers: %d\n", prime);
    printf("Perfect squares: %d\n", square);

    return 0;
}
