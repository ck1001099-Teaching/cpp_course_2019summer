#include <iostream>
using namespace std;

int main(){
	// 超過 2000 元，打7折
	int money;
	
	cout << "請輸入購買總金額: ";
	cin >> money;
	
	if (money > 2000){
		cout << "實際需付金額: " << money * 0.7 << endl;
	} else {
		cout << "實際需付金額: " << money << endl;
	}
	return 0;
}
