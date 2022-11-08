#include<bits/stdc++.h>
using namespace std;

const int M = 1000;

int gcd(int a, int b)
{
    while(b > 0)
    {
        int x = b;
        int y = a%b;
        a = x, b = y;
    }
    return a;
}

void gcd_test()
{
    cout << "GCD(12, 8) = " << gcd(12, 8) << endl;
    cout << "GCD(10, 5) = " << gcd(10, 5) << endl;

    cout << endl;
}

int tau[M], sigma[M];
void set_tau(int n) // Complexity = O(n log n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j += i) // iterating over i's multiples
        {
            tau[j]++;
            sigma[j] += i;
        }
    }
}

void tau_sigma_test()
{
    set_tau(100);

    cout << "The number of divisors of 9 = " << tau[9] << endl;
    cout << "The sum of divisors of 9 = " << sigma[9] << endl;

    cout << endl;
}

int digits_of_factorial_in_base(int n, int b) // returns the number of digits of n! in base b
{
    double s = 0;
    for(int i = 1; i <= n; i++) s += log(i)/log(b); // log(i)/log(b) = log i with respect to base b

    int digits = floor(s)+1;
    return digits;
}

void digits_of_factorial_test()
{
    cout << "The number of digits of 10! in base 10 = " << digits_of_factorial_in_base(10, 10) << endl;
    cout << "The number of digits of 4! in base 2 = " << digits_of_factorial_in_base(4, 2) << endl;

    cout << endl;
}

int trailing_zeros_in_factorial(int n) // counts the number of trailing zeros in the decimal representation of n!
{
    int ans = 0;
    for(int p = 5; p <= n; p *= 5) ans += n/p;

    return ans;
}

void trailing_zeros_in_factorial_test()
{
    cout << "The number of trailing zeros in 10! = " << trailing_zeros_in_factorial(10) << endl;
    cout << "The number of trailing zeros in 4! = " << trailing_zeros_in_factorial(4) << endl;
    cout << "The number of trailing zeros in 25! = " << trailing_zeros_in_factorial(25) << endl;

    cout << endl;
}

int main()
{
    gcd_test();
    tau_sigma_test();
    digits_of_factorial_test();
    trailing_zeros_in_factorial_test();

    return 0;
}

