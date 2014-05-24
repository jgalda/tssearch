#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <string.h>

#include <City.h>
#include <Transport.h>
using namespace std;
class Schedule
{
    public:
        Transport mean_of_transport;
        City source_city;
        City target_city;
        int travel_duration;
        int hours_of_departures [];
        int cost;

        Schedule();
        virtual ~Schedule();
    protected:
    private:
};

#endif // SCHEDULE_H
