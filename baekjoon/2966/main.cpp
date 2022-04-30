#include <iostream>
#include <string>
using namespace std;

// each ID correspond to Adrian, Bruno, Goran
char patternSg[] = {'A', 'B', 'C'};
char patternCy[] = {'B', 'A', 'B', 'C'};
char patternHg[] = {'C', 'C', 'A', 'A', 'B', 'B'};

int main() {

	int n;
	string answer;
	cin >> n >> answer;
	
	int pointsSg = 0;
	int pointsCy = 0;
	int pointsHg = 0;
	
	for (int i = 0; i < n; i++) {
		
		if (answer[i] == patternSg[i % 3])
			pointsSg++;
		
		if (answer[i] == patternCy[i % 4])
			pointsCy++;
		
		if (answer[i] == patternHg[i % 6])
			pointsHg++;
		
	}
	
	int pointsMax = max(max(pointsSg, pointsCy), pointsHg);
		
	cout << pointsMax << endl;
		
	if (pointsMax == pointsSg)
		cout << "Adrian" << endl;
	
	if (pointsMax == pointsCy)
		cout << "Bruno" << endl;
	
	if (pointsMax == pointsHg)
		cout << "Goran" << endl;
	
	return 0;
}
