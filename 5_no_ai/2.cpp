#include <iostream>
using namespace std;

int main() {
  system("chcp 1251 > nul");
  string pitonist = "";
  cout << "Ты программируешь на Python??\n";
  cin >> pitonist;
  cout << endl;
  if (pitonist == "да") {
    cout << "Иди лесом";
  }
  else if (pitonist == "нет") {
    cout << "Красавчик, а ты думал программировать на C++?";
  }
  else {
    cout << "Я не понял, возможно ты написал с заглавной буквы";
  }
  return 0;
}
