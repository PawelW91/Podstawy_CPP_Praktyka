#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x, y;
    long long maxVal = -2e9, max2 = -2e9, minVal = 2e9, min2 = 2e9;

    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (y + x > maxVal)
            maxVal = y + x;
        if (y + x < minVal)
            minVal = y + x;
        if (y - x > max2)
            max2 = y - x;
        if (y - x < min2)
            min2 = y - x;
    }

    cout << max(abs(maxVal - minVal), abs(max2 - min2)) << endl;
    return 0;
}
