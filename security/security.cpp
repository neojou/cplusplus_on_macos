#include <iostream>

using namespace std;

class Confidential {
    private:
	char creditCardNumber[17];

    public:
	Confidential() {
	    strcpy(creditCardNumber, "1234567890123456");
    	}

    	void sign() {
	    cout << "sign" << endl;
    	}
};	


int main() {
    Confidential cf;

    cf.sign();

    // compile error occurs if we want to access private member directly
    // cout << cf.creditCardNumber << endl;    

    char *cardno = (char *)&cf;
    cout << cardno << endl;

    return 0;
}

