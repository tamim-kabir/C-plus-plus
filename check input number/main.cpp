#include <iostream>

using namespace std;

int main()
{
    float cValue=0, value=0;
    if(cin >> cValue)
    {
        int f =1;
        while(cin >> value)
        {
            if(cValue == value)
            {
                ++f;
            }
            else
            {
                cout << cValue << " occurs " << f << endl;
                cValue = value;
                f=1;
            }
        }
        cout << cValue << "occurs" << f << endl;
    }
    return 0;
}
