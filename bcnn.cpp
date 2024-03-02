#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;
#define vi std::vector <int> 

int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    int a,b;
    cin>>a >>b;
    int ucln=__gcd (a,b);
    cout << /*bcnn*/ (a*b)/ucln;
  
  return 0;
}