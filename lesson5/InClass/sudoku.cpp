#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// �B�z��J
	int sudoku[9][9];
	
	ifstream ifs;
	ifs.open("sudoku.txt", ios::in);
	if (!ifs){
		cout << "�ɮ׶}�ҥ���!" << endl;
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
	
	// �{���޿�
	while (true){
		bool isChange = false;
		// �q���W�Ѩ�k�U�A�p�G����s���ȡA isChange = true;
		for (int i = 0 ; i < 9 ; i++){
			for (int j = 0 ; j < 9 ; j++){
				if (sudoku[i][j] == 0){
					// ��l��: 1~9 ���i�H�� 
					bool number[9];
					for (int k = 0 ; k < 9 ; k++){
						number[k] = true;
					}
					// �P�_�E�c��
					// (i, j)  -> (i/3, j/3), e.g. (1, 2) -> (0, 0); (7, 4) -> (2, 1)
					int x = i/3, y = j/3;
					for (int k = x*3 ; k < (x+1)*3 ; k++){
						for (int l = y*3 ; l < (y+1)*3 ; l++){
							if (sudoku[k][l] != 0){
								number[sudoku[k][l]-1] = false;
							}
						}
					} 
					// TODO: �P�_��C
					// TODO: �P�_���� 
					// �P�_�O���O�ѤU�ߤ@�@�� true
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
	
	// ��X 
	for (int i = 0 ; i < 9 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			cout << sudoku[i][j] << " ";
		} 
		cout << endl;
	}
	return 0;
}





