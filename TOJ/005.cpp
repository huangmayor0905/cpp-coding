#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string name;
    getline(cin, name);
    cout << "Hello ," << name << " !\n";
    return 0;
}
