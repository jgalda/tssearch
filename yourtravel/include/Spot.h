#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <string.h>

#include <Transport.h>
#include <City.h>
#include <Schedule.h>


using namespace std;
class Spot
{
    public:

        City city_to_visit;
        Transport mean_of_transport;

        int arrival_time;
        int departure_time;
        int time_of_travel;

        Spot();
        virtual ~Spot();
        void choose_best_transport_to_leave(Schedule timetable);

    protected:
    private:
};

#endif // SPOT_H
