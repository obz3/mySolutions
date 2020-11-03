/*
author: 00623

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fast_io ios::sync_with_stdio(0);cin.tie(0);


bool biSearch(vector<ll> list, ll key) {
	sort(list.begin(), list.end());

	ll low = 0, high = list.size();
	
	while(low <= high) {
		ll median = (low + high) / 2;

		if(list[median] < key) low = median + 1;

		else if(list[median] > key) high = median - 1;

		else if(list[median] == key) return true;
		
		else return false;
	}
	return false;
}
int main() {
	fast_io;

	vector<ll> list({190, 235, 743, 136, 236, 864, 237, 762, 23, 64, 53, 46, 71, 2, 6, 75});
	
	
	if(biSearch(list, 23)) cout << "found!\n";
	else cout << "not here\n";


	return 0;
}


