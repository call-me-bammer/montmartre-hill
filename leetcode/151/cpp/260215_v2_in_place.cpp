/* In-place reverse (look better) */
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // 1. reduce multiple white spaces
        int n = s.size();
        int i = 0, j = 0;

        // for (int j = 0; j < n; j++) {
        while (j < n) {
            /*
            while (j < n && s[j] == ' ') j++;
            if (j == n) break;
            */
            if (s[j] == ' ') {
                j++;
                continue;
            }
            if (i != 0) s[i++] = ' ';
            while (j < n && s[j] != ' ') 
                s[i++] = s[j++];
        }
        s.resize(i);

        // 2. reverse whole string
        reverse(s.begin(), s.end());

        // 3. reverse each word
        n = s.size();
        i = 0;
        for (int j = 0; j <= n; j++) {
            if (j != n && s[j] != ' ') continue;
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
        //reverse(s.begin() + i, s.begin() + n);
    
        return s;
    }
};