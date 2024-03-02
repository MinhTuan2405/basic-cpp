#include <iostream>

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    // kieu du lieu _ ten mang [so luong phan tu ] ;

    int a[100][100] ;
    int cot, hang ;


    std::cin >> hang >> cot ;

    for ( int i = 0; i < hang; ++i) {
        for ( int j = 0; j < cot; ++j) std::cin >> a[i][j] ;
    }

    for ( int i = 0; i < hang; ++i) {
        for ( int j = 0; j < cot; ++j) std::cout << a[i][j] << " ";
        std::cout << std::endl ;
    }

    std::cout << "banh tet banh chung ngon qua" ;
    return 0;
}