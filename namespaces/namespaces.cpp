/* NAMESPACE */
/* It is designed to overcome repetitive names */
/* used over the program */
/* by letting compiler know how to differentiate  */
/* similar functions, classes, and variables */
/* with the same name available in different libraries */

#include <iostream>

using namespace std;

namespace onepiece
{
    void whitebeard()
    {
        cout << "One Piece exists!" << endl;
    }
}

namespace redline
{
    void whitebeard()
    {
        cout << "I'm Shirohige!" << endl;
    }
}

namespace grandline
{
    void whitebeard()
    {
        cout << "I'm the strongest man in the world" << endl;
    }

    // you can use namespace inside namespace
    namespace skyland
    {
        void whitebeard()
        {
            cout << "I was here" << endl;
        }
    }
}

// using directive
using namespace grandline;
int main()
{
    // Calls function from first name space.
    onepiece::whitebeard();

    // Calls function from second name space.
    redline::whitebeard();

    // Calls function with directive,
    skyland::whitebeard();

    return 0;
}