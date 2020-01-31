#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto &i : v)
        i *= i;
    for(auto k : v)
        cout << k << " ";
    cout << endl;
    return 0;
}
