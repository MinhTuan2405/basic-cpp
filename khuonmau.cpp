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
Viết 1 hàm template tìm phần tử lớn nhất trong 3 số.
Yêu cầu xuất phần tử lớn nhất trong 3 số.

qui ước: a là số nguyên, b là số thực, c là phân số
(các số nhập <= 100)

ví dụ:
a 1 2 3 tức là nhập 3 số nguyên

Dữ liệu vào:
Dòng 1: là nhập vào loại số
3 dòng tiếp theo: mỗi dòng chứa 1 số thuộc kiểu của dòng 1

Dữ liệu ra: gồm 1 dòng là số lớn nhất tìm thấy
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
T max_ ( T a, T b, T c) {
    if ( a >= b ) {
        if ( a >= c ) return a ;
        else return c ;
    }else {
        if ( b > c ) return b ;
        else return c ;
    }
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    char in ;
    cin >> in;

    if ( in == 'a') {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << max_ <int> ( a, b, c);
    }else if ( in == 'b'){
        double a, b, c ;
        std::cin >> a >> b >> c ;
        std::cout << max_ <double> ( a, b, c) ;
    }else if ( in == 'c'){
        PHANSO a, b, c;
        std::cin >> a >> b >> c ;
        std::cout << max_(a,b,c);
    }  
    return 0;
}