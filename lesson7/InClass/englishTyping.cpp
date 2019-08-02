#include <iostream>
#include <string>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

void englishTyping(string);

int main(){
	srand(time(NULL)); // initialize random seed
	
	string dict[10] = {"The", "two", "men", "whose",
					   "sentences", "were", "commuted",
					   "will", "now", "be"};
	string question;
	
	int choose[5] = {-1, -1, -1, -1, -1};
	for (int i = 0 ; i < 5 ; i++){
		bool isNew = true;
		int number = rand()%10;
		for (int j = 0 ; j < 5 ; j++){
			if (choose[j] == -1){
				// 第一次選到
				choose[j] = number;
				break; 
			} else if (choose[j] == number){
				isNew = false;
				break;
			}
		}
		if (!isNew){
			i--;
			continue;
		} else {
			question = question + dict[number];
			if (i != 4){
				question = question + " ";
			}	
		}
	}
	
	englishTyping(question);
	
	return 0;
}

void englishTyping(string question){
	cout << "題目: " << question << endl;
	cout << "答案: ";
	int correctNum = 0; // 正確字數
	int wrongNum = 0; // 錯誤字數
	// 比較字串 
	int questionIndex = 0;
	for (int i = 0 ; i < 5 ; i++){
		string answer;
		cin >> answer;
		int answerIndex = 0;
		while (true){
			if ( (question[questionIndex] == ' ' && 
				  answerIndex == answer.length()) ||
				 (questionIndex == question.length() && 
				  answerIndex == answer.length())){
				correctNum = correctNum + 1;
				break;
			} else if (question[questionIndex] == ' ' ||
				questionIndex == question.length() ||
				answerIndex == answer.length()){
				wrongNum = wrongNum + 1;
				break; 
			}
			
			if (question[questionIndex] == answer[answerIndex]){
				questionIndex = questionIndex + 1;
				answerIndex = answerIndex + 1; 
			} else {
				wrongNum = wrongNum + 1;
				break;
			}
		}
		while (questionIndex < question.length() && question[questionIndex] != ' '){
			questionIndex = questionIndex + 1;
		}
		questionIndex = questionIndex + 1;
	}
	
	cout << "正確字數: " << correctNum << endl; 
	cout << "錯誤字數: " << wrongNum << endl; 
	// 輸出正確率
	cout << "正確率: " << (double)correctNum / (correctNum + wrongNum) << endl;
}
