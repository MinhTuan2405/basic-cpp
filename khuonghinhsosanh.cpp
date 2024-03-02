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

using namespace std;

//protocol

/*
Viết hàm khuôn hình so sánh 2 số
Nhập vào 2 số, xuất true nếu 2 số bằng nhau, ngược lại xuất false
qui ước:
kiểu a là số nguyên
kiểu b là số thực
kiểu c là phân số

ví dụ
a
1
2

output
false
*/

struct PHANSO {
    int tu;
    int mau;
};

bool operator<(PHANSO a, PHANSO b){
    if ( (double) a.tu/a.mau < (double) b.tu/b.mau ){
        return true ;
    }else return false;

}// 1/2 (0.5) 3/4(0.75)

bool operator<=(PHANSO a, PHANSO b){
    if ( (double) a.tu/a.mau <= (double) b.tu/b.mau ){
        return true ;
    }else return false;

}// 1/2 (0.5) 3/4(0.75)

bool operator>=(PHANSO a, PHANSO b){
    if ( (double) a.tu/a.mau >= (double) b.tu/b.mau ){
        return true ;
    }else return false;

}// 1/2 (0.5) 3/4(0.75)



bool operator>(PHANSO a, PHANSO b){
    if ( (double) a.tu/a.mau > (double) b.tu/b.mau ){
        return true ;
    }else return false;

}// 1/2 (0.5) 3/4(0.75)

bool operator==(PHANSO a, PHANSO b){
    if ( (double) a.tu/a.mau == (double) b.tu/b.mau ){
        return true ;
    }else return false;

}// 1/2 (0.5) 3/4(0.75)

istream& operator>> ( istream& in, PHANSO &a) {
    in >> a.tu >> a.mau ;
    return in ;
}

ostream& operator<< ( ostream& out, PHANSO a){
    out << a.tu << "/" << a.mau ;
    return out ;
}

template <typename T> 
void max_ ( T a, T b) {
    if ( a == b ) cout << "true" ;
    else cout << "false";
}

int main(){

  

    char in ;
    cin >> in;

    if ( in == 'a') {
        int a, b;
        std::cin >> a >> b;
        max_ <int> (a,b);
    }else if ( in == 'b'){
        double a, b ;
        std::cin >> a >> b ;
        max_ <double> ( a, b) ;
    }else if ( in == 'c'){
        PHANSO a, b;
        std::cin >> a >> b  ;
        max_ <PHANSO>(a,b);
    }  
    return 0;
}