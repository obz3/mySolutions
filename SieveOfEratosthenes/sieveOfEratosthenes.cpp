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

int main() {
	fast_io;

	ll n = 1000000;
	vector<bool> prime = sieve(n);

	//output traversal
	for(int i = 1; i <= 623; i++) {
		if(prime[i])
			cout <<  i << "\t";
	}


	return 0;
}


