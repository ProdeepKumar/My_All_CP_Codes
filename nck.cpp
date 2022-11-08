#include<bits/stdc++.h>
using namespace std;
#define M 105
#define MOD 1000000007

int bigmod(int a, int b) // a^b % MOD
{
    if(b == 0) return 1;

    int p = bigmod(a, b/2);
    p = 1LL*p*p%MOD;
    if(b%2) p = 1LL*p*a%MOD;

    return p;
}

int inverse(int x) // x^-1 = x^(MOD-2) % MOD
{
    return bigmod(x, MOD-2);
}

int fact[M], invFact[M];

int nCk(int n, int k)
{
    int x = fact[n];
    int y = invFact[n-k];
    int z = invFact[k];

    return 1LL*x*y%MOD*z%MOD;
}

int C[M][M];

int main()
{
    fact[0] = 1;
    for(int i = 1; i < M; i++) fact[i] = 1LL*fact[i-1]*i%MOD;
    for(int i = 0; i < M; i++) invFact[i] = inverse(fact[i]);

    cout << "(Using factorial formula) C(10, 5) = " << nCk(10, 5) << endl; // C(n, k) = n! / (k! * (n-k)!)

    for(int n = 0; n < M; n++)
    {
        C[n][0] = C[n][n] = 1;
        for(int k = 1; k < n; k++) C[n][k] = (C[n-1][k]+C[n-1][k-1])%MOD;
    }

    cout << "(Using recursive formula) C(10, 5) = " << C[10][5] << endl; // C(n, k) = C(n-1, k) + C(n-1, k-1)

    return 0;
}
