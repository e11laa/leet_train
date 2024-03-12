#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<int> vec(3);
  vec.at(0) = A;
  vec.at(1) = B;
  vec.at(2) = C;
  sort(vec.begin(), vec.end());
  cout << vec.at(2) - vec.at(0) << endl;
}
