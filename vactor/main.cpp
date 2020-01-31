#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> f;
    for(int i = 1; i <= 5; ++i)
        f.push_back(i);
    for(auto i = f.begin(); i != f.end(); ++i)
        cout << *i << " " ;
    cout << "\n";
    for(auto i = f.cbegin(); i != f.cend(); ++i)
        cout << *i << " " ;
    cout << "\n";
    for(auto i = f.rbegin(); i != f.rend(); ++i)
        cout << *i << " ";
    cout << "\n";
    for(auto i = f.crbegin(); i != f.crend(); ++i)
        cout << *i << " ";
    return 0;
}
