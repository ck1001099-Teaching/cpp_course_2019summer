#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num;
	// int count = 0;
	vector<int> vec; // int array[1000000];
	while (cin >> num){
		if (num == 0) break;
		vec.push_back(num); //array[count] = num;
		//count++;
	}
	int sum = 0;
	//for (int i = 0 ; i < count ; i++){
	for (int i = 0 ; i < vec.size() ; i++){
		sum = sum + vec[i]; //array[i];
	}
	cout << sum << endl;
	//cout << (double)sum/count << endl;
	cout << (double)sum/vec.size() << endl;
	
	return 0;
}
