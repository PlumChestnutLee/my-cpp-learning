#include <iostream>

using namespace std;

int main() {

    int y =15;
    int *ip;
    ip = &y;
    cout << ip << " " << &y << " " << y << " " << *ip;
    return 0;
}