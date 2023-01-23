#include <iostream>
#include <csignal>
/*
 * signal function receives two arguments
 * first is integer which represents signal number
 * second as a pointer to the signal-handling function
 * you much register that signal using signal function
 * and associate it with a signal handler
 *
 */

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    // cleanup and cloes up stuff here
    // terminate program

    exit(signum);
}

int main()
{
    // register signal SIGINT and signal handler
    signal(SIGINT, signalHandler);

    while (1)
    {
        cout << "Going to sleep..." << endl;
        sleep(1);
    }

    return 0;
}