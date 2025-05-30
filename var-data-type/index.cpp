#include <iostream>
using namespace std;

int main() {
    string name;
    int a = 2;
    string b = "ayush basak";
    char c = 'y';
    float pie = 3.14;
    long long pal = 333333333333;

    cout << "Hey you! What's your name? : ";
    getline(cin, name);

    cout << "Collected Variables:\n";
    cout << " Name: " << name << endl;
    cout << "An int (a): " << a << endl;
    cout << "A string (b): " << b << endl;
    cout << "A char (c): " << c << endl;
    cout << "Value of pie (float): " << pie << endl;
    cout << "A long long number: " << pal << endl;

    return 0;
}
