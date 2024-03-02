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
    int a[10];
    int n;
    cin >>n;
    for (int i=0; i<n; i++) cin >> a[i] ;
    for (int i=0; i<n; i++) cout << a[i] << " ";

  
  return 0;
}


// không biết trước số lượng phần tử
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
    int a[10];
    int n=0;
    int x;
    while (cin>>x) {
        a[n]=x;
        ++n;
    }
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i< n; i++) cout << a[i] << " ";

  
  return 0;
}


//mảng 2 chiều
 int a[100][100];
 int cot, hang;
 cin>> hang >> cot;
 for (int i=0; i<hang; i++){
    for (int j=0; j<cot; j++) cin >> a[i][j];
 }
 for (int i=0; i<hang; i++){
    for (int j=0; j<cot; j++) cout << a[i][j] ;
    cout << endl;


 }

