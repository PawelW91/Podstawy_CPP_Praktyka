#include <iostream>
#include <sstream>

using namespace std;

union FloatBytes {
    float value;
    unsigned char bytes[4];
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        FloatBytes fb;
        cin >> fb.value;

        ostringstream oss;
        for (int i = 3; i >= 0; --i) {
            oss << hex << static_cast<int>(fb.bytes[i]);
            if (i > 0)
                oss << ' ';
        }

        string hexBytes = oss.str();
        while (hexBytes[0] == 'f' && hexBytes.length() > 2)
            hexBytes.erase(0, 1);

        cout << hexBytes << endl;
    }

    return 0;
}
