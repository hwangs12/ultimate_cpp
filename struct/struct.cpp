// what is struct?

// it is by default public data
// it is usually used for passive data

// what is passive data? 

// guessing there is no behavior modification

// no getter and setter

// Unlike 'array', a structure can contain many different data types
// meaning, array cannot have many different data types

// ###################### There are many ways to play with structure

#include <iostream>

using std::cout;
using std::endl;

// assign a variable to a struct
struct
{
    int age;
    double height;
} human;

// assign multiple variables to a struct
struct
{
    /* data */
    int numberOfLegs;
    int numberOfTeeths; 
} shark, cat, dog;

// name struct to access members later
struct city
{
    int population;
    double area;
    double gdp;
};

int main()
{
    // access and assign values to member of the struct
    human.age = 15;
    human.height = 153.13;

    shark.numberOfLegs = 0;
    shark.numberOfTeeths = 266;

    cat.numberOfLegs = 4;
    cat.numberOfTeeths = 40;

    dog.numberOfLegs = 4;
    dog.numberOfTeeths = 40;

    city Seoul;
    Seoul.population = 15000000;
    Seoul.area = 10000.45;
    Seoul.gdp = 150000000;

    cout << Seoul.population << endl;
    cout << Seoul.area << endl;
    cout << Seoul.gdp << endl;
}