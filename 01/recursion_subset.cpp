/*
author: shabbir0623
10/22/2020 1:47:03 AM -06
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define push push_back
#define pop pop_back
#define MP make_pair
#define pf printf
#define sf scanf
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define file_io freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);


vi subset;
vi::iterator it;
int n = 0;

void lookfor(int k) {
	if(k == n + 1) {
		it = subset.begin();
		
		while(it != subset.end()) {
			cout << *it << " ";
			it++;
		}
		
		subset.empty()?cout << "φ\n\n" : cout << endl;

	} else {
		subset.push(k);
		lookfor(k+1);
		subset.pop();
		lookfor(k+1);
		
		return;
	}
}

int main() {
	fast_io;
	file_io;
	
	cin >> n;
	lookfor(1);


	return 0;
}