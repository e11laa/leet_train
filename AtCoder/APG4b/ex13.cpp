#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int i;
  int N;
  cin >> N;
  vector<int> A(N);
  for(i = 0; i < N; i++){
    cin >> A.at(i);
  }
  int sum;
  for(i = 0; i < N; i++){
    sum += A.at(i);
  }
  sum /= N;
  for(i = 0; i < N; i++){
    A.at(i) -= sum;
    cout << abs(A.at(i)) << endl;
  }
}
