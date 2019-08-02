#include <iostream>
#include <vector>
using namespace std;

void f(vector<int>*);

int main(){
	int array[10];
	vector<int> vec; // 宣告專門裝 int 的 vector容器 
	cout << vec.size() << endl;
	vec.push_back(10);
	vec.push_back(3000);
	cout << vec.size() << endl;
	cout << vec[0] << " " << vec[1] << endl;
	cout << vec.empty() << endl;
	vec.clear();
	cout << vec.size() << " " << vec.empty() << endl;
	
	vector< vector<float> > vec2;
	cout << &vec2 << endl;
	vector< vector<float> >* ptr = &vec2;
//	for (int i = 0 ; i < 10 ; i++){
//		array[i] = i;
//	}
//	array[10] = 100;
	
	return 0;
}
