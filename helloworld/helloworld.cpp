
#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!"
#if defined(__LP64__)
	 << " __LP64__ is defined. "
#endif
	 << endl;

    int a; long b;
    cout << "int len: " << sizeof(a) << endl;
    cout << "long len: " << sizeof(b) << endl;

    return 0;
}

