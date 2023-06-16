#include <iostream>
#include <ctime>
using namespace std;

void addTime(int hours, int minutes, int seconds)
{
    time_t currentTime;
    time(&currentTime);

    struct tm *timeinfo;
    timeinfo = localtime(&currentTime);

    timeinfo->tm_hour += hours;
    timeinfo->tm_min += minutes;
    timeinfo->tm_sec += seconds;

    time_t newTime = mktime(timeinfo);

    struct tm *newTimeinfo;
    newTimeinfo = localtime(&newTime);

    cout << "Time after adding " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds:" << endl;
    cout << "Hour: " << newTimeinfo->tm_hour << endl;
    cout << "Minute: " << newTimeinfo->tm_min << endl;
    cout << "Second: " << newTimeinfo->tm_sec << endl;
}

int main()
{
    int hours = 8;
    int minutes = 52;
    int seconds = 50;

    addTime(hours, minutes, seconds);

    return 0;
}
