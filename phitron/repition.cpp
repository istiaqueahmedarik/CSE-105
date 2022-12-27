#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long n = s.length();
    long long max_len = 1;

    for (long long i = 0; i < n; ++i) {
        long long len = 1;
        char c = s[i];
        for (long long j = i + 1; j < n; ++j) {
            if (s[j] != c) {
                break;
            }
            ++len;
        }
        max_len = max(max_len, len);
    }

    cout << max_len << "\n";

    return 0;
}
