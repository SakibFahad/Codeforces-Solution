#include<iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while(1)
    {
        y = y+1;
        int m = y / 1000;
        int n = y / 100%10;
        int o = y / 10 % 10;
        int p = y % 10;
        if(m != n && m != o && m != p && n != o && n != p && o != p)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}