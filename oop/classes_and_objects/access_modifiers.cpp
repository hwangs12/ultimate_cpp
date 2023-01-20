#include <iostream>

class Base
{
public:
    // public members go here
    int member1;
    int member2;
    int member3;

    void setPrivateMember(char name)
    {
        private_member1 = name;
    }

    char getPrivateMember()
    {
        return private_member1;
    }

protected:
    // protected members go here
    int protected_member1;
    double protected_member2;

private:
    // private members go here
    char private_member1;
};

/* PROTECTED IS SIMILAR TO PRIVATE */
/* BUT YOU CAN ACCESS IT IN DERIVED CLASS */

class SmallBase : Base
{

public:
    void setProtectedMember(int num)
    {
        protected_member1 = num;
    }
    int getProtectedMember()
    {
        return protected_member1;
    }

    /* ACCESSING PRIVATE MEMBER IS NOT ALLOWED IN DERIVED CLASS */

    // char getPrivateInDerived()
    // {
    //     return private_member1;
    // }
};

int main()
{
    Base Base1;
    SmallBase Base2;
    Base Base3;

    /* YOU CANNOT ACCESS PRIVATE MEMBER */

    /* CANNOT READ OR WRITE: Below will give us error */
    // Base1.private_member1 = 'C'

    /* PRIVATE ACCESS */
    /* DEFINE PUBLIC FUNCTION IN THE CLASS */

    Base1.setPrivateMember('A');

    std::cout << Base1.getPrivateMember() << std::endl;

    Base2.setProtectedMember(1);

    std::cout << Base2.getProtectedMember() << std::endl;

    return 0;
}