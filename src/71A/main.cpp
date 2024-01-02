#include <string>
#include <iostream>

using namespace std;

bool checkTen(string a){
  if(a.length() > 10){
    return true;
  }
  return false;
}

int main(){
  int a;
  cin >> a;
  string words[a];
  for(int i = 0;i < a;i++) {
    cin >> words[i];
  }
  for(int i = 0;i < a;i++) {
    if(checkTen(words[i]) == true) {
      cout << words[i][0] << words[i].substr(0,words[i].length()-1).length() - 1 <<words[i][words[i].length()-1] << endl;
    }
    else {
      cout << words[i] << endl;
    }
  }
  return 0;
}
