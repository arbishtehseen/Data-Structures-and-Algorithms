// Arbish || CT-25053 || Section B 

#include<iostream>
#include<vector>
using namespace std;

class MedianFinder{
	private :
		vector<int> values;
	
	public:
		MedianFinder(){}
	
	void addNum(int val){
	    values.push_back(val);
	}
	
	double FindMedian(){
		int size = values.size() ;
		double median;
		if( size % 2 == 0){
			int x = size / 2;
			int y = x--;
			median = ((values[x] + values[y]) / 2);
			return median;
		}
		else if(size % 2 != 0) {
			int x = size/2;
			median = values[x];
			return median;
		}
		else{
			return 0;
		}
	}
		
};


int main(){
	MedianFinder obj1;
	
	cout << "Enter Total Number of Values you wanna get added : " << endl;
	int n ; 
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		int x; 
		cout << "Enter Value : " << endl;
		cin >> x;
		obj1.addNum(x);
	}
	
	double median = obj1.FindMedian();
	cout << median << endl;
	
	
	return 0;
}