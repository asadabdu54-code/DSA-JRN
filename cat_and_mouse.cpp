#include <iostream>
#include <cmath>
using namespace std;

string catAndMouse(int x, int y, int z)
{
    int a = abs(z - x);
    int b = abs(z - y);

    return (a < b) ? "Cat A" : (b < a) ? "Cat B" : "Mouse C";
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        cout << catAndMouse(x, y, z) << '\n';
    }

    return 0;
}