#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int moves = 0;
    int s1 = 0;
    int s2 = 0;
    int temp = 0;
    for (int l = 0, r = n - 1; l <= r;) {
      if ((moves & 1) ^ 1) {
        int cs = 0;
        while (l <= r && cs <= temp) {
          cs += a[l++];
        }
        s1 += cs;
        temp = cs;
      } else {
        int cs = 0;
        while (l <= r && cs <= temp) {
          cs += a[r--];
        }
        s2 += cs;
        temp = cs;
      }
      moves++;
    }
    cout << moves << " " << s1 << " " << s2 << endl;
  }
  return 0;
}
