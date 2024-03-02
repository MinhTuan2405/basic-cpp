#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;
#define vi std::vector <int> 
int perfect_number (int a){
    int sum=1;
    for (int i=2; i<a; i++){
        if (a%i==0) sum+=i;
    }
    if (sum==a) return 1;
    else return 0;

}
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
  int a;
  cin >> a;
  if (perfect_number (a)) cout << true;
  else cout << false;
  return 0;
}