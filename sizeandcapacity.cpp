#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Initial capacity: " << s.capacity() << endl;

    for (int i = 0; i < 20; i++) {
        s.push_back('a');
        cout << "Size: " << s.size()
             << " | Capacity: " << s.capacity() << endl;
    }
    return 0;
}
