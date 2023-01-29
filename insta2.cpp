#include<bits/stdc++.h>
using namespace std;


//---------------------------------------------------------

// sieve will work till n is upto 1e7//
// time complexity of sieve is n*log(log(n))//
void sieve(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}



// this can be used for numbers upto 1e15-1e16//
bool isp(ll n) // checks if ISPRIME
{
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


// returns the maximum number less then n,
// which is a power of 2 
ll mx2pow(ll N)
{
    N = N | (N >> 1);
    N = N | (N >> 2);
    N = N | (N >> 4);
    N = N | (N >> 8);
    return (N + 1) >> 1;
}


// prints decimal to binary 
void dectobin(ll x)
{
    for (int k = 31; k >= 0; k--)
    {
        if (x & (1 << k))
            cout << "1";
        else
            cout << "0";
    }
}



// checks accurately if two floating numbers 
//are same bcoz sometimes == is wrong for floats
bool fcom(float a, float b)
{
    if (abs(a - b) < 1e-9)
        return true;
    return false;
}



// checks if the given number is a power of 2 or not
bool is_pow_of_2(ll x) { return (x && !(x & (x - 1))); }


// time complexity O(k) where k=number of ones [INBUILT - <__builtin_popcount<ll(when long long)>(num)]
//count number of ones in binary representation of n
ll cnt_1(ll n) { ll cnnt = 0; while(n) { n = n & (n - 1); cnnt++; } return cnnt; }


// To Count Digits In An Number T:C-O(1)
ll cntd(ll n) { return floor(log10(n) + 1); } 


//O(log(min(a,b)))  InBUILt FN - <__gcd(ll a, ll b)> 
ll gcd(ll a, ll b) { if (a % b == 0) { return (b); } else { return (gcd(b, a % b)); } }


//// O(log(min(a,b)))
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }



//rightmost set bit
//use ll position = log2(ri8(x)) + 1;
//to get position of rightmost set bit
ll right_most_set_bit(ll x) { return (x ^ (x & (x - 1))); }


//---------------------------------------------------------------------------------------------

void solve(){
   
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
  }
}
