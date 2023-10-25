#include <bits/stdc++.h>

using namespace std;

string removeKDigits(string num, int k) {
    stack<char> st;

    for (char digit : num) {
        while (k > 0 && !st.empty() && st.top() > digit) {
            st.pop();
            k--;
        }
        st.push(digit);
    }

    while (k > 0) {
        st.pop();
        k--;
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    int i = 0;
    while (i < result.length() && result[i] == '0') {
        i++;
    }

    return (i == result.length()) ? "0" : result.substr(i);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string N;
        int K;
        cin >> N >> K;

        string smallestNumber = removeKDigits(N, K);
        cout << smallestNumber << endl;
    }

    return 0;
}
