#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

int main()
{

    auto date_now = std::chrono::system_clock::now();
    // how do I save time as a variable

    std::time_t date_now_t = std::chrono::system_clock::to_time_t(date_now);
    // std::time_t pregnancy_date = "June 15, 2022" ====> would this work?
    // to get the difference of two times, use difftime(t1, t2)

    struct tm time = {0};
    std::string s = "2022-06-15";
    strptime(s.c_str(), "%Y-%m-%d", &time);

    std::time_t pregnancy_time = mktime(&time);

    double period = difftime(date_now_t, pregnancy_time);

    double period_in_day = period / 60 / 60 / 24;

    std::cout << "Today's date is " << std::ctime(&date_now_t) << std::endl;
    std::cout << "Yaelan had baby on " << std::ctime(&pregnancy_time) << std::endl;
    std::cout << floor(period_in_day) << " days have passed." << std::endl;
    std::cout << "That is " << int(floor(period_in_day) / 7) << " weeks and " << int(floor(period_in_day)) % 7 << " days." << std::endl;

    return 0;
}