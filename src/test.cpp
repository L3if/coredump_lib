
#include <string>
#include <iostream>

extern std::string intToBasedString( int value, int base );

int main (int argc, char *argv[]) {

    std::cout <<  "Hello World\n";
    int a{0};
    int b{0};
    std::cin >> a;
    std::cout <<  "\n";
    std::cin >> b;
    std::cout <<  "\n";
    std::cout << intToBasedString(a, b);
    return 0;
}