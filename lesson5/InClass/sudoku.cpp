#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// 處理輸入
	int sudoku[9][9];
	
	ifstream ifs;
	ifs.open("sudoku.txt", ios::in);
	if (!ifs){
		cout << "檔案開啟失敗!" << endl;
		return 0;
	}
	
	for (int i = 0 ; i < 9 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			ifs >> sudoku[i][j];
			cout << sudoku[i][j] << " ";
		}
		cout << endl;
	}
	ifs.close();
	
	// 程式邏輯
	while (true){
		bool isChange = false;
		// 從左上解到右下，如果有填新的值， isChange = true;
		for (int i = 0 ; i < 9 ; i++){
			for (int j = 0 ; j < 9 ; j++){
				if (sudoku[i][j] == 0){
					// 初始化: 1~9 都可以填 
					bool number[9];
					for (int k = 0 ; k < 9 ; k++){
						number[k] = true;
					}
					// 判斷九宮格
					// (i, j)  -> (i/3, j/3), e.g. (1, 2) -> (0, 0); (7, 4) -> (2, 1)
					int x = i/3, y = j/3;
					for (int k = x*3 ; k < (x+1)*3 ; k++){
						for (int l = y*3 ; l < (y+1)*3 ; l++){
							if (sudoku[k][l] != 0){
								number[sudoku[k][l]-1] = false;
							}
						}
					} 
					// TODO: 判斷橫列
					// TODO: 判斷直行 
					// 判斷是不是剩下唯一一個 true
					int count = 0;
					int ans;
					for (int i = 0 ; i < 9 ; i++){
						if (number[i]){
							count = count + 1;
							ans = i+1;
						}
					}
					if (count == 1){
						sudoku[i][j] = ans;
						isChange = true;
					}
				}
			}
		} 
		
		if (!isChange){
			break;
		}
	}
	
	// 輸出 
	for (int i = 0 ; i < 9 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			cout << sudoku[i][j] << " ";
		} 
		cout << endl;
	}
	return 0;
}





