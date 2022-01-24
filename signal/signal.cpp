extern "C" {
#include <signal.h>
}

#include <iostream>

using namespace std;

void sig_handler(int signo);
int main() {
    cout << "Waiting for a signal" << endl;

    if (signal(SIGINT, sig_handler) == SIG_ERR) {
	perror("signal error");
	exit(EXIT_FAILURE);
    }

    for(;;);

    return 0;
}

void sig_handler(int signo)
{
    printf("catch the signal SIGINT %d\n", signo);
}


