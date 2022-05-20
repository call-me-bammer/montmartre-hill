#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string song[14] = { "baby", "sukhwan", "tururu", "turu",
					    "very", "cute", "tururu", "turu",
					    "in", "bed", "tururu", "turu",
					    "baby", "sukhwan" };
	
	if (song[(n - 1) % 14].substr(0, 2) == "tu") {
		
		int k = 1;
		
		if (((n - 1) % 14) % 2 == 0)
			k++;
		
		k += (n - 1) / 14;

		string out = "tu";
		
		if (k >= 5) {
			out += "+ru*";
			out += to_string(k);
		} else {
			for (int i = 0; i < k; i++)
				out += "ru";
		}
		
		cout << out << endl;
	}
	
	else {
		cout << song[(n - 1) % 14] << endl;
	}
	
	return 0;
}
