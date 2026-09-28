// Arbish || CT-25053 || Section B 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
    cout << "Enter Size of Array : " << endl;
    cin >> n;
    
	vector<int> nums(n , 0);
	
	cout << "Enter Array Elements : " << endl;
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i];
	}
	int target;
	cout << "Enter Target Value: " << endl;
	cin >> target;
	
	int l = 0;
	int r = n - 1;
	int index;
	
	while(l <= r){
		int mid = (l+r) /2;
		if(nums[mid] == target) {
			index = mid;
			break;
		}
		else if(nums[mid] > target){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}

	cout <<"Index : "<< index << endl;
	
	return 0;
}