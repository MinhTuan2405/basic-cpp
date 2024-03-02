#include <iostream>
#include <algorithm>

int gcd ( int a, int b) {
    if ( a ==b ) return a ;
    else {
        if ( a > b ) return gcd ( a-b, b) ;
        else return gcd ( a, b - a) ;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    std::cout << std::__gcd(a, b) ;
    return 0;
}