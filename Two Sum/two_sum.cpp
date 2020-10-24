/*
author: shabbir0623
*/
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

class Solution {
public:
    vi twoSum(vi& nums, int target) {
        for(vi::iterator i = nums.begin(); i != nums.end(); i++){
            vi::iterator res = find(i+1, nums.end(), target - *i);
            if(res != nums.end())
            	return (vi){(int)distance(nums.begin(), i), (int)distance(nums.begin(), res)};
        }
       	return (vi){};
    }
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	Solution soln;
	vi nums({3, 2, 4});
	int target = 6;
	
	vi result = soln.twoSum(nums, target);
	if(!result.empty())
		cout << result[0] << ", " << result[1] << endl;
	return 0;
}
