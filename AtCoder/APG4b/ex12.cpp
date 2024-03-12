#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int a = S.size();
  int b = 0;
  int i;
  int c;
  for(i = 0 ; i < a ; i++){
    if(i % 2 == 1){
      if(S.at(i) == '+'){
        c = 0;
    }else if(S.at(i) == '-'){
        c = 1;
      }
    }else{
      if(c == 0){
        b++;
      }else if(c == 1){
        b--;
      }
    }
  //cout << b;
    //cout << c;
  }
  cout << b << endl;
  // ここにプログラムを追記
}
