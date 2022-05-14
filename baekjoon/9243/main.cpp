#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	string src, dst;
	
	cin >> n >> src >> dst;
	
	for (int i = 0; i < src.size(); i++) {
		if (n % 2 == 1)
			src[i] = ('1' - src[i]) + '0';
	}
	
	if (src == dst)
		cout << "Deletion succeeded" << endl;
	
	else
		cout << "Deletion failed" << endl;

	return 0;
}
