#include <iostream>
#include <string>
using namespace std;

int main() {

	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;

	char** newsScanned = new char*[r * zr];
	for (int i = 0; i < r * zr; i++)
		newsScanned[i] = new char[c * zc];
	
	string row;
	
	for (int i = 0; i < r; i++) {
		cin >> row;
		
		for (int j = 0; j < c; j++) {
			// row[j];
			
			for (int zi = i * zr; zi < (i + 1) * zr; zi++) {
				for (int zj = j * zc; zj < (j + 1) * zc; zj++) {
					newsScanned[zi][zj] = row[j];
				}
			}
		}
	}
	
	for (int i = 0; i < r * zr; i++) {
		for (int j = 0; j < c * zc; j++) {
			cout << newsScanned[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
