/* In-place reverse */
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // 1. reduce multiple white spaces
        int n = s.size();
        int i = 0;// j = 0;

        for (int j = 0; j < n; j++) {
            if (s[j] == ' ') continue;
            if (i != 0) s[i++] = ' ';
            while (j < n && s[j] != ' ') 
                s[i++] = s[j++];
            j--;
        }
        s.resize(i);

        // 2. reverse whole string
        reverse(s.begin(), s.end());

        // 3. reverse each word
        n = s.size();
        i = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] != ' ') continue;
            reverse(s.begin() + i, s.begin() + j);
            /*
            int a = i, b = j - 1;
            while (a < b) {
                char t = s[a];
                s[a++] = s[b];
                s[b--] = t;
            }
            */
            i = j + 1;
        }

        reverse(s.begin() + i, s.begin() + n);
        // int a = i, b = n - 1;
        // while (a < b) {
        //     char t = s[a];
        //     s[a++] = s[b];
        //     s[b--] = t;
        // }

        return s;
    }
};