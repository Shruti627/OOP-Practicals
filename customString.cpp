#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char* str;

    String() {
        str = new char[1];
        str[0] = '\0';
    }

    String(const char* input) {
        str = new char[strlen(input) + 1];
        strcpy(str, input);
    }

    ~String() {
        delete[] str;
    }

    void accept(const char* input) {
        delete[] str;
        str = new char[strlen(input) + 1];
        strcpy(str, input);
    }

    void display() {
        cout << "String: " << str << "\n";
    }
};

int main() {
    String str1;
    str1.display();
    
    str1.accept("ECE Department!!");
    str1.display();
    
    String str2;
    str2.accept("CS Department!!");
    str2.display();
    
    return 0;
}
