#include <iostream>
using namespace std;

template <typename T> T myMin(const T& y, const T& x){
    return (x < y) ? x : y;
}

template <typename Container, typename Index> auto authAndAccess(Container& c, Index i) -> decltype(c[i]) {
    
}

int main() {


    cout << "Hello World\n";
    cout << myMin(2, 3) << "\n";
    cout << myMin('a', 'r');
    cout << "\n";
    return 0;
}