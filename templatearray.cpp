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

/*
Xây dựng 1 cấu trúc mảng (hoặc lớp) có sử dụng khuôn hình, áp dụng cho bài sau:

          Viết chương trình nhập vào 1 dãy số, yêu cầu xuất ra tổng của các dãy số đó ra màn hình.

Với các qui ước:

-      Kiểu a: là số nguyên

-      Kiểu b: là phân số

Dữ liệu đầu vào:

-      Dòng đầu tiên: nhập vào loại kiểu của dãy số (kiểu a hoặc b)

-      Các dòng còn lại, mỗi dòng chứa 1 số thuộc kiểu của dòng đầu tiên

Dữ liệu đầu ra:

-      Gồm 1 số duy nhất (thuộc kiểu đã cho).

Lưu ý:  

- Nếu kết quả là phân số thì phân số đó đã được rút gọn.
*/


struct PHANSO {
    int tu;
    int mau;

    void simply_(){
        int gcd = std::__gcd (tu, mau);
        tu = tu / gcd;
        mau = mau / gcd;
    }
};

std::istream& operator>> ( std::istream& in, PHANSO& a ){
    in >> a.tu >> a.mau ;
    return in;
}

std::ostream& operator<< ( std::ostream& out, PHANSO a) {
    out << a.tu << "/" << a.mau;
}

PHANSO operator+(PHANSO a, PHANSO b){
    PHANSO kq ;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    kq.simply_() ;
    return kq;
}

template <typename T>
std::vector <T> input ( std::vector <T>& arr) {
    T temp ;
    while ( std::cin >> temp) {
        arr.push_back (temp);
    }
    return arr;
}

template <typename T>
T sum ( std::vector <T> arr) {
    T result = arr.at(0);
    auto it = arr.begin() ;
    ++it;
    while ( it != arr.end()){
        result = result + *it;
        ++it;
    }
    return result;
}


int main(){

    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    char request;
    std::cin >> request ;

    if ( request == 'a') {
        std::vector <int> arr;
        input <int> (arr) ;
        std::cout << sum <int> ( arr) ;
    }
    if ( request == 'b') {
        std::vector <PHANSO> arr;
        input <PHANSO> ( arr) ;
        std::cout << sum <PHANSO>( arr);
    }
  
    return 0;
}