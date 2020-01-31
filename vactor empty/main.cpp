#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text{"what about you"};
    for(auto it = text.cbegin(); it != text.cend() && !it -> empty(); ++it)
    cout << *it << endl;
    return 0;
}
