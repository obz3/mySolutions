/*
author: obz3()

*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0);cin.tie(0);

int main() {
	fast_io;

	int opening = 0, closing = 0;
	bool validity = true;
	string str;
	getline(cin, str);

	for(char c : str) {
		if(opening >= closing)			//if valid sequence, then proceed 
			if(c == '(') opening++;
			else if(c == ')') closing++;
		else validity = false;
	}

	if(opening == closing && validity) cout << "balanced!";
	else cout << "not balanced";


	return 0;
}