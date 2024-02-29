//Run build function first before calculation ncr % mod

const int N = 1e6 + 10;
 
ll factors[N],factors_Inverse[N];
ll power(ll x,ll os)
{
    if( os == 0 )
        return 1;
 
    ll z = power(x,os/2);
 
    if( os%2 )
        return z*z%mod*x%mod;
    return z*z%mod;
}
 
ll modInverse(ll x)
{
    return power(x,mod-2);
}
void build()
{
    factors[0]=1;
    for(ll i=1; i<N; i++)
        factors[i]=factors[i-1]*i%mod;
 
    factors_Inverse[N - 1] = modInverse(factors[N - 1]);
    for (ll i = N - 2; i >= 0; i--)
        factors_Inverse[i] = factors_Inverse[i + 1] * (i + 1) % mod;
}
ll cnr_mod(ll n,ll r)
{
    return (((factors[n]*factors_Inverse[n-r])%mod)*factors_Inverse[r]%mod);
}
 
