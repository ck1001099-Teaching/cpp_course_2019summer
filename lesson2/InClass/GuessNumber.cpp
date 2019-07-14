#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	srand(time(NULL)); // seed
	
	int number = rand()%100+1; // 1~100
	
	int lowerBound = 1;
	int upperBound = 100;
	
	while (true){
		cout << "請猜一個 " << lowerBound << "到" << upperBound << "之間的數字: ";  
		int guess;
		cin >> guess;
		if ( !(guess >= lowerBound && guess <= upperBound) ){
			cout << "請你猜在正確的範圍" << endl;
			continue; 
		}
		
		if (guess == number){
			cout << "恭喜你猜對了!" << endl; 
			break;
		} else if (guess > number){
			upperBound = guess - 1;
		} else if (guess < number){
			lowerBound = guess + 1;
		}
	}
	
	return 0;
}
