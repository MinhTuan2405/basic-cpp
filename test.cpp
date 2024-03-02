#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <iterator>

using std::string;
using std::stack;
using std::deque;
#define vi std::vector<int>
#define mp std::map <int, int>
#define pi std::pair<int, int>
#define endl std::cout << std::endl

//protocol

int cnt[1000001] ;


int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);


    int M;
    int N;
    std::cin >> M >> N;
    
    int a = 0 ;
    int repeat = M ;

    int current = 0 ;
    while ( repeat--) {
        std::cout << current + N - M*a << " ";
        current = current - M*a ;
        ++a;
        
    }

    return 0;
}