#include<bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string s;
    cin >> s;
    int r[2] = {};
    for (char c : s) {
      if (c == '0') r[0]++;
      else r[1]++;
    }
    string res = min(r[0], r[1]) & 1 ? "DA" : "NET";
    cout << res << endl;
  }
  return 0;
}
