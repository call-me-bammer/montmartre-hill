#include <iostream>
#include <string>
using namespace std;

int main() {

	string canSpeak;
	string doctorSpeak;
	
	cin >> canSpeak >> doctorSpeak;
	
	if (canSpeak.size() < doctorSpeak.size())
		cout << "no" << endl;
	
	else
		cout << "go" << endl;
	
	return 0;
}
