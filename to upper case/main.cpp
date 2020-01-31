#include <iostream>

using namespace std;

int main()
{
    string line("hello world");
    for(decltype(line.size()) i = 0; isspace(line[i]); ++i)
        line[i]=toupper(line[i]);
    cout << line << endl;
    return 0;
}
