#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;
#define vi std::vector <int> 
int prime_number (int a){
    int flag=1;
    for (int i=2; i<= sqrt (a); i++){
        if (a%i==0) flag=0;
    }
    return flag;

}
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
  int a;
  cin >>a;
   if (prime_number (a)) cout << true;
   else cout << false;
  return 0;
}