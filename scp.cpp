#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;
#define vi std::vector <int> 
int square_number (int a){
    double s=sqrt (a);
    if (s*s==a) return 1;
    else return 0;
}
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
  int a;
  cin >>a;
  if (square_number (a)) cout << true;
  else cout << false;
  return 0;
}