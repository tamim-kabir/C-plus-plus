#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text{"Hello world"}, f{"ljdsfuif"};
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;
    while(mid != end && *mid != f)
    {
        if(f < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg);
    }
    cout << mid << endl;
    return 0;
}
