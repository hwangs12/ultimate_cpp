#include <iostream>

/* COPY CONSTRUCTOR */

/* IT IS A CONSTRUCTOR WHICH CREATES AN OBJECT */
/* BY INITIALIZING IT WITH AN OBJECT OF THE SAME CLASS */

/* USED FOR THE FOLLOWING REASONS */

/* INITIALIZE ONE OBJECT FROM ANOTHER OF THE SAME TYPE */
/* COPY AN OBJECT TO PASS IT AS AN ARGUMENT TO A FUNCTION */
/* COPY AN OBJECT TO RETURN IT FROM A FUNCTION */

using namespace std;

class Line
{

public:
    int getLength(void);
    Line(int len);         // simple constructor
    Line(const Line &obj); // copy constructor
    ~Line();               // destructor

private:
    int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;

    // allocate memory for the pointer;
    /* Q: WHY DO WE NEED TO DO THIS? */
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Length of line : " << obj.getLength() << endl;
}

// Main function for the program
int main()
{
    Line line(10);

    /* COPY CONSTRUCTOR IS INVOKED DUE TO LINE OBJECT */
    /* INSIDE A FUNCTION PARAMETER */
    display(line);

    Line line1(12);

    Line line2 = line1; // This also calls copy constructor

    display(line1);
    display(line2);

    return 0;
}