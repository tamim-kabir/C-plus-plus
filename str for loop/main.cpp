#include <iostream>

using namespace std;

int main()
{
    string line("hello world!!!!");
    decltype(line.size()) punct_cnt = 0;
    for(auto d : line)
        if(ispunct(d))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in "<< line << endl;
    return 0;
}
