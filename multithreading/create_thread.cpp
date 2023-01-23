#include <pthread.h>
// pthread_create {thread, attr, start_routine, arg}

/*
 * pthread_create creates a new thread and makes it executable
 * this routine can be called any number of times from anywhere
 * within your code
 *
 * thread - an opaque, unique identifier for the new thread
 * returned by the subroutine
 *
 * attr - opaque attribute object that may be used to set thread
 * attributes. you can specify a thread attr object, or NULL
 *
 * start_routine - the c++ routine taht the thread will execute
 *
 * arg - a single argument that may be passed to start-routine
 * it must be passed by ref as a pointer cast of type void
 */

// pthread_exit (status) // terminating threads

#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
    long tid;
    tid = (long)threadid;
    cout << "Hello World! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; i++)
    {
        cout << "main() : creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

        if (rc)
        {
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}