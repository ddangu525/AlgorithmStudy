/*
버블소트
https://www.acmicpc.net/problem/1377
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
    v[i].second = i;
  }

  sort(v.begin(), v.end());
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (res < v[i].second - i) {
      res = v[i].second - i;
    }
  }
  cout << res + 1;

  return 0;
}
