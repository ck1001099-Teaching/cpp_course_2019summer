#include <iostream>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		int food[n];
		int total[n];
		for (int i = 0 ; i < n ; i++){
			cin >> food[i];
			if (i == 0){
				total[i] = food[i];
			} else {
				total[i] = total[i-1] + food[i];
			}
		}
		for (int i = 0 ; i < m ; i++){
			int l, r;
			cin >> l >> r;
			if (l == 1){
				cout << (total[r-1]) << endl;	
			} else {
				cout << (total[r-1] - total[l-2]) << endl;
			}
		}
	}
	return 0;
}
