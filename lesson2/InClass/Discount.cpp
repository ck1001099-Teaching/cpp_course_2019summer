#include <iostream>
using namespace std;

int main(){
	// �W�L 2000 ���A��7��
	int money;
	
	cout << "�п�J�ʶR�`���B: ";
	cin >> money;
	
	if (money > 2000){
		cout << "��ڻݥI���B: " << money * 0.7 << endl;
	} else {
		cout << "��ڻݥI���B: " << money << endl;
	}
	return 0;
}
