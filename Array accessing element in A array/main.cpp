#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned s[11]= {}, a;
    int k=0;
    while(cin >> a)
    {
        if(a <= 100)
        {
            ++s[a/10];
            ++k;
        }

        if(k >= 10)
            break;
    }
    for(auto i : s)
        cout << i << " ";
    cout << endl;
    return 0;
}
