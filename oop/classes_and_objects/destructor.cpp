#include <iostream>

using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len, int in1, int in2, int in3) : length(len), init1(in1), init2(in2), init3(in3)
    {
        cout << "Object is created" << endl;
    }; // this is the constructor

        ~Line()
    {
        cout << "Object is being deleted" << endl;
    }

    /* FOR INITIALIZATION */
private:
    double length;
    int init1;
    int init2;
    int init3;
};

// Member functions definitions including constructor
/* CONSTRUCTOR USING SCOPE RESOLUTION OPERATOR */
// Line::Line(double len, int in1, int in2, int in3) : length(len), init1(in1), init2(in2), init3(in3)
// {
//     cout << "Object is being created" << endl;
//     cout << len << in1 << in2 << in3 << endl;
// }
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

// Main function for the program
int main()
{
    Line line(10.0, 3, 5, 7);

    // get initially set length.
    cout << "Length of line : " << line.getLength() << endl;

    // set line length
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}
