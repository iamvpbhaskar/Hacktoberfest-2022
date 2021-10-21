 
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace  __gnu_pbds;
    using namespace std::chrono;
    using namespace std;
    #define ll long long int
    #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
    #define endl "\n"
    #define pb push_back
    #define mp make_pair
    #define MEMS(x,t) memset(x, t, sizeof(x))
     
    //pairs
    #define fi first
    #define se second
    #define pp pair<ll,ll>
     
     
    //loops
    #define forn(i,n) for (ll i = 0; i < n; i++)
    #define rep(i,a,b) for(int i = a; i <= b; i++)
    #define rrep(i,a,b) for( int i = a; i >= b; i--)
     
    //debug
    #define deb1(a)             cout<<#a<<"="<<a<<endl;
    #define deb2(a,b)           cout<<a<<" "<<b<<endl;
    #define deb3(a,b,c)         cout<<a<<" "<<b<<" "<<c<<endl;
    #define deb4(a,b,c,d)       cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<endl;
     
    template<typename T> using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
     
     void deb_vector(vector<ll> v)
     {
         for(ll x : v )
         {
             cout<<x<<" ";
         }
         cout<<endl;
     }
      void deb_array(ll a[] , ll n)
     {
         for(ll i =0;i<n;i++)
         {
             cout<<a[i]<<" ";
         }
         cout<<endl;
     }
     
    //constants
    double PIE = 3.1415926536;
    ll MOD = 1000000007;
    ll MODi =  1000000009;
     
    //functions
     
    ll gcd(ll a, ll b) { return __gcd(a,b);}
    ll lcm(ll a, ll b) { return a*b/__gcd(a,b);}
    ll ceil(ll x, ll y)
    {
        return (x + y - 1)/y;
    }
    ll fast_pow(ll a, ll p){
        if(p == 0) return 1;
     
        ll z = fast_pow(a,p/2);
        z = (z*z);
        if(p%2) z = (z*a);
        return z;
    }
  
    int computeXOR(int n)
    {
    
    
    if (n % 4 == 0)
        return n;
    
   
    if (n % 4 == 1)
        return 1;
    
  
    if (n % 4 == 2)
        return n + 1;
    

    return 0;
    }
    void test_cases()
    {  
        int a, b;
        cin>>a>>b;
        if(a == 1)
        {
            if(b==1)
            {
                cout<<3<<endl;
                return;
            }
            else if(b == 0){
                cout<<1<<endl;
                return;
            }
            else {
                cout<<2<<endl;
                return;
            }
            
        }
  
        if(computeXOR(a-1) == b)
        {
            
            cout<<a<<endl;
        }
        else if( (computeXOR(a-1) ^ b) != a){
            cout<<a+1<<endl;
        }
        else 
        {
            cout<<a+2<<endl;    
        }
        
    }
    
    
    int main()
    {
        fastio;
        
        int T = 1;
        cin >> T;
        while(T--)
        {
            test_cases();
        }
        return 0;
    }
