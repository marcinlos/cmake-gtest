#include <iostream>
#include <cstring>

class String {
    char* buf;
public:
    String(const char* str): buf{new char[strlen(buf) + 1]} {
        std::strcpy(buf, str);
    }
    ~String() {
        delete buf;
    }
};


int main() {
    String a{"Ala"};
    String b{a};
    String c{"Kot"};
    c = a;
}
