#include <iostream>

using namespace std;

int main()
{
    int i, sum=0;
    while(cin >> i)
    {
        if(i==0)
            break;
        sum += i;
    }
    cout<<"total amount:"<<sum<<endl;
    return 0;
}
