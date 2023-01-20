#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


// add abstraction - functionality you can implement later as you create different classes.
// you can add this wear to any class by adding to another class.
class AbstractClient
{
    virtual void findEligibility()=0; // =0 appears only when defining abstract class;
};

// if you assign client to abstract client then you 
// obtain the ability to define that abstraction, method inside it
class Client: AbstractClient
{

    // private helps you protect the variable inside it
    // 'protected' helps you use the variable outside of this class.
    private:
        string firstname;
        string lastname;
        int age;
    
    public:
        void setName(string name) {
            for (int i=0; i<name.size(); i++) {
                if (name[i] == ' ') {
                    firstname = name.substr(0, i);
                    lastname = name.substr(i+1);
                };
            }    
        }

        string getFirstName() {
            return firstname;
        }

        Client(string fn, string ln, int ag) {
            firstname = fn;
            lastname = ln;
            age = ag;
        }

        void callTheirNames() {
            cout << "Welcome to Chocolate Factory, " << firstname << " " << lastname << endl;
        }

        void findEligibility() {
            if (age > 15) {
                cout << "You are eligible for the invitation!" <<endl;
            } else {
                cout << "Sorry! You have to go back" << endl;
            }
        }
};

// everything is private by default if you don't declare it's public
// the public Client helps you access methods inside the Client class. 
class PrivateClient: public Client
{
    public:
        int AccountBalance;
        PrivateClient(string firstname, string lastname, int age, int accountBalance): Client(firstname,lastname,age) 
        {
            AccountBalance=accountBalance;
        };
        void welcomePrivate()
        {
            cout << "Welcome, " << getFirstName() << " to private club in the Market" << endl;
        };

};

// cannot access parent class methods;
int main()
{
    Client hwang("Cholera", "Nami", 15);
    hwang.callTheirNames();
    hwang.findEligibility();
    PrivateClient jung("nody", "cobo", 15, 10888888);
    jung.welcomePrivate();
    jung.findEligibility();
    return 0;
}