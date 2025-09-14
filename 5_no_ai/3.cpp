#include <iostream>
using namespace std;

double plusplus(double num1, double num2) {
  return num1 + num2;
}

double minusminus(double num1, double num2) {
  return num1 - num2;
}

double umnozhenie(double num1, double num2) {
  return num1 * num2;
}

double delenie(double num1, double num2) {
  return num1 / num2;
}
int main() {
  string answer = "";
  double numb1;
  double numb2;
  double result;
  system("chcp 1251 > nul");
  cout << "Это калькулятор, выбирай что ты хочешь сделать: (+, -, *, /)\n";
  cin >> answer;
  if (answer == "+") {
    cout << "Введите первое число: \n";
    cin >> numb1;
    cout << "Введите второе число: \n";
    cin >> numb2;
    result = plusplus(numb1, numb2);
    cout << "Результат: " << result << endl;
    

  }
  else if (answer == "-") {
    cout << "Введите первое число: \n";
    cin >> numb1;
    cout << "Введите второе число: \n";
    cin >> numb2;
    result = minusminus(numb1, numb2);
    cout << "Результат: " << result << endl;
  }
  else if (answer == "*") {
    cout << "Введите первое число: \n";
    cin >> numb1;
    cout << "Введите второе число: \n";
    cin >> numb2;
    result = umnozhenie(numb1, numb2);
    cout << "Результат: " << result << endl;
  }
  else if (answer == "/") {
    cout << "Введите первое число: \n";
    cin >> numb1;
    cout << "Введите второе число: \n";
    cin >> numb2;
    result = delenie(numb1, numb2);
    cout << "Результат: " << result << endl;
  }
  else {
    cout << "Неправильный ввод";
  }
  return 0;
}
