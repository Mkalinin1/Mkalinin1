#include <iostream>

using namespace std;

int main() {
  float inch;
  float conversion;
  cout <<"Please input a number of inches."<< endl;
  cin >> inch;
  conversion = inch * 2.54;
  cout <<"Your number of inches in centimeters: " << conversion << endl;
}