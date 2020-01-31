#include <iostream>

using namespace std;

int main()
{
    string text[]{"Hello world!."};
    for(const auto &s : text)
    {
        cout << s ;
        if(s.empty() || s[s.size() - 1] == '.')
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}
