#include <iostream>
using namespace std;

template <typename T> T myMin(T y, T x){
    return (x < y) ? x : y;
}

int main() {
    cout << "Hello World\n";
    cout << myMin(2, 3);

    return 0;
}