#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

void Display(int**, int, int);
void Update(int**, int, int);

int main(){
	double period = 1.0;
	
	int n, m;
	int** state;
	
	ifstream ifs;
	ifs.open("file.txt", ios::in);
	ifs >> n >> m;
	state = new int*[n];
	for (int i = 0 ; i < n ; i++){
		state[i] = new int[m];
		for (int j = 0; j < m ; j++){
			ifs >> state[i][j];
			//cout << state[i][j] << " ";
		}
		//cout << endl;
	}
	
	while(true){
		clock_t clk = clock();
		// display the state per frame
		Display(state, n, m);
		// update state
		Update(state, n, m);
		while(clock()-clk < period * CLOCKS_PER_SEC);
	}
	
	for (int i = 0 ; i < n ; i++){
		delete[] state[i];
	}
	delete[] state;
	
	return 0;
}

void Display(int** state, int n, int m){
	
}

void Update(int** state, int n, int m){
	
}