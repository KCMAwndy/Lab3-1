#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    long long int num, sum = 0;
    scanf("%lld", &num);
    printf("%lld ->", num);
    while (num > 9) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 9) {
            printf(" %lld ->", sum);
        }
        num = sum;
    }
    printf(" %lld", num);
    return 0;
}