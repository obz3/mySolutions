/*
author: shabbir0623

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);

vector<bool> sieve(ll n) {
	vector<bool> prime(n, true);
	prime[0] = false;
	prime[1] = false;
	ll ii = 1;
	for(ll i = 2; i*i <= n; i++) {
		if(prime[i]) {
			for(ll j = i; i*j <= n; j+=ii) {
				prime[i*j] = false;
			}
			ii = 2;
		}
	}
	return prime;
}


vector<bool> prime = sieve(1100000);

bool Tprime(ll n){

	for(ll i = (ll)floor(sqrt(n)); i*i <= n; i++) {
		if(i*i == n && prime[i])
			return true;
	}
	return false;
}
 
 
int main(){
	fast_io;
	
    ll n, tem;
	scanf("%I64d", &n);
    
    vector<ll> storage;
    
    for(ll i = 0; i < n ; i++){
        scanf("%I64d", &tem);
        storage.push_back(tem);
    }
 
    for(ll i = 0; i < n; i++){
        if(Tprime(storage[i]))
            printf("YES\n");
        else
            printf("NO\n");;
    }
    return 0;
}