// T-primes

// time limit per test2 seconds

// memory limit per test256 megabytes

// inputstandard input

// outputstandard output

//     We know that prime numbers are positive integers that have exactly two 

// distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, 

// if t has exactly three distinct positive divisors.

// You are given an array of n positive integers. For each of them determine

//   whether it is Т-prime or not.

// Input

// The first line contains a single positive integer, n (1≤n≤10^5), showing

// how many numbers are in the array. The next line contains n space-separated

// integers xi (1≤xi≤10^12).

// Please, do not use the %lld specifier to read or write 64bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

// Output

// Print n lines: the i-th line should contain "YES" (without the quotes), if

// number xi is Т-prime, and "NO" (without the quotes), if it isn't.

// Sample test(s)

// input

// 3

// 4 5 6

// output

// YES

// NO

// NO

// Note

// The given test has three numbers. The first number 4 has exactly three di

// visors — 1, 2 and 4, thus the answer for this number is "YES". The second 

// number 5 has two divisors (1 and 5), and the third number 6 has four divi

// sors (1, 2, 3, 6), hence the answer for them is "NO".

#include <stdio.h>
#include <math.h>

int IsPrime(double x){
    if (x <= 1) return 0;
    int squareRoot = (int)sqrt(x);
    for (int i = 2; i <= squareRoot; i++)
    {
        if (x/i == (long long)(x/i)) return 0;
    }
    return 1; 
}

int main(){
    int num = 0;
    scanf("%d",&num);
    double a[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lf",&a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (IsPrime((int)sqrt(a[i])) && sqrt(a[i])==(int)sqrt(a[i]))
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    return 0;
}