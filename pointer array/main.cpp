#include <iostream>

using namespace std;

int main()
{
    int a [3][4];
    int (*p)[4] = a;
    p = &a[2];
    for(p = a; p != a + 3; ++p){
        for(auto q = p + 4; q  != P; ++q)
            cout << *q << endl;
    }
    return 0;
}
