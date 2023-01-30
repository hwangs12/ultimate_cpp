#ifndef USER_H
#define USER_H

class User
{
    static int user_count;
    std::string status = "Gold";

public:
    static int get_user_count();
    std::string first_name;
    std::string last_name;
    std::string get_Status();
    void set_status(std::string status);
    User();
    User(std::string first_name, std::string last_name, std::string status);
    ~User();
    friend std::ostream &operator<<(std::ostream &output, const User user);
    friend std::istream &operator>>(std::istream &input, User &user);
};
#endif