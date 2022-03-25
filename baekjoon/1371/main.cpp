#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string s;

    int* a = new int['z' - 'a' + 1]();

    while (!std::cin.eof())
    {
        getline(std::cin, s);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a')
                a[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 'z' - 'a' + 1; i++)
    {
        if (a[i] == *std::max_element(a, a + 'z' - 'a' + 1))
            std::cout << static_cast<char>('a' + i);
    }
    std::cout << std::endl;

    return 0;
}
