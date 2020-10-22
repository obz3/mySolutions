/*
author: shabbir0623

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define file_io freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define pf printf
#define sf scanf

int gcd(ll a, ll b) {
	if(!b) return a;
	gcd(b, a%b);

}

int main() {
	fast_io;
	file_io;

	ll a, b;
	cin >> a >> b;

	pf("%ld\n", gcd(a, b));

	return 0;
}


