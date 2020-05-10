#include<bits/stdc++.h>

#define endl "\n"
#define IOS  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--)  {
    int n;
    cin >> n;
    int p = 1;
    vector<int> result;
    while (n) {
      if (n % 10) {
        result.emplace_back(n % 10 * p);
      }
      n /= 10;
      p *= 10;
    }
    cout << result.size() << endl;
    for (int a : result) {
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}
