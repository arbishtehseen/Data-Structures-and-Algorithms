// Arbish || CT - 25053 || Section B 

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int stud_count ;
	cout << "Enter Total Number of Students : " << endl;
	cin >> stud_count; 
	
	vector<vector<double>> matrix(stud_count, vector<double>(5, 0));
	
	for(int i = 0 ; i < stud_count ; i++){
		cout << "Student " << i+1 <<" :" << endl;
		for(int j = 0 ; j < 5 ; j++){
			cout << "Enter Grade Points of Subject " << j+1 << " :" <<endl;
			cin >> matrix[i][j];
		}
	}
	
	vector<vector<double>> gpa(stud_count, vector<double>(5, 0));
	
	for(int i = 0 ; i < stud_count ; i++){
		for(int j = 0 ; j < 5 ; j++){
			gpa[i][j] = ((3*matrix[i][j]) / 3);
		}
	}
	for(int i = 0 ; i < stud_count ; i++){
		cout << "Student " << i+1 <<" :" << endl;
		for(int j = 0 ; j < 5 ; j++){
			cout << "GPA of Subject " << j+1 << " : " ;
			cout << gpa[i][j] << endl;
		}
	}
	
	return 0;
}