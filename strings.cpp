#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    char a;
    cin >> str1 >> str2;
    cout << str1.size() << '  ' << str2.size() << '\n';
    cout << str1 + str2 << '\n';
    a = str1[0]; str1[0] = str2[0]; str2[0] = a;
    cout << str1 << ' ' << str2;

    return 0;
}
