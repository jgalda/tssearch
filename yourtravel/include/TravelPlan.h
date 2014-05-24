#ifndef TRAVELPLAN_H
#define TRAVELPLAN_H

#include <iostream>
#include <string.h>

#include <Spot.h>
using namespace std;
class TravelPlan
{
    public:
        Spot* list_of_spots_to_visit;

        int total_cost;
        int total_time;
        float plan_value;

        TravelPlan();
        virtual ~TravelPlan();

        void calculate_total_cost();
        void calculate_total_time();
        void calculate_plan_value();

        TravelPlan cities_crossover(TravelPlan Plan2);
        TravelPlan transport_crossover(TravelPlan Plan2);
        // TravelPlan time_crossover(TravelPlan Plan2);

    protected:
    private:
};

#endif // TRAVELPLAN_H
