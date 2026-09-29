// Arbish || CT-25053 || Section B 

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int row , col;
	
	cout<<"Enter Number of Rows and Column : " << endl;
	cin >> row >> col;
	
	vector<vector <int>> matrix(row, vector<int>(col, 0));
	
	cout << "Enter Elements of Matrix : " << endl;
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			cin >> matrix[i][j] ;
		}
	}
	
	int target;
	cout <<"Enter Target Value : " << endl;
	cin >> target;
	
	int l = 0;
	int r = (row*col) - 1;
	bool found = false;
	
	while(l <= r){
	    int	mid = (l+r) / 2;
		int mid_element = matrix[mid/col][mid % col];
		
		if(mid_element == target){
			found = true;
			break;
		}
		else if(mid_element > target){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	
	if(found)
	cout << "true" << endl;
	else
	cout << "false" << endl;
	
	
	
	return 0;
}