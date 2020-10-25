/*
author: shabbir0623

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;  
typedef vector<int> vi;
#define push push_back
#define fast_io ios::sync_with_stdio(0);cin.tie(0);

vi f_i({0}), f_ii({1});
vi temp;
int carry = 0;

void add_vec(){
	vi::iterator num1, num2;
	num1 =f_i.begin();
	num2 =f_ii.begin();
	int z = max(f_i.size(),f_ii.size());
	
	while(z){
		if (num1 != f_i.end() && num2 != f_ii.end()){
			temp.push((*num1 + *num2 + carry) % 10);
			carry = ((*num1 + *num2 + carry) / 10);
		}
		else if(num1 != f_i.end()){
			temp.push((*num1 + carry) % 10);
			carry = (*num1 + carry) / 10;
		}
		else{
			temp.push((*num2 + carry) % 10);
			carry = (carry + *num2) / 10;
		}

		z--;
		num1++;
		num2++;
	}
	while(carry){
		temp.push(carry%10);
		carry /= 10;
	}

}

void weird_fib(int n){
	if(!n)
		f_ii = f_i;
	for(int i = 2; i <= n; i++){
		add_vec();
		f_i = f_ii;
		f_ii = temp;
		temp.clear();

	}
	cout << endl;
}

int main() {
	fast_io;

	int nth;
	cout << "enter an int, n, to get n-th fibonacci number: "
	cin >> nth;

	weird_fib(nth);

	vi::iterator it = f_ii.end();
	it--;
	if(nth%10 == 1)
		cout << nth << "st fibonacci: " ;
	else if(nth%10 == 2)
		cout << nth << "nd fibonacci: " ;
	else if(nth%10 == 3)
		cout << nth << "rd fibonacci: " ;
	else
		cout << nth << "th fibonacci: " ;

	for(; it >=f_ii.begin(); it--) 
		cout << *(it);



	return 0;
}


