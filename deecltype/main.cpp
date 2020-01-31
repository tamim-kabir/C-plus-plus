#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = b;
    decltype(a=b) d = a;
    ++c;
    ++d;
    cout << a <<" "<< b << endl;
    return 0;
}
