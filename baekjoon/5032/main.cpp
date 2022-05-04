#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	
	int emptyBottles = a + b;
	int getNews = 0;
	
	int result = 0;

	while (emptyBottles / c != 0) {
		getNews = emptyBottles / c;
		result += getNews;
		
		emptyBottles %= c;
		emptyBottles += getNews;
	}
	
	cout << result << endl;
	
	return 0;
}
