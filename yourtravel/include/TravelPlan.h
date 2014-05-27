#ifndef TRAVELPLAN_H
#define TRAVELPLAN_H

#include <iostream>
#include <string.h>
#include <vector>
#include<stdlib.h>

#include <Spot.h>
using namespace std;
class TravelPlan
{
    public:
        vector <Spot> list_of_spots_to_visit;

        int total_cost;
        int total_time;
        float plan_value;

        TravelPlan();
        virtual ~TravelPlan();

        void calculate_total_cost();
        void calculate_total_time();
        void calculate_plan_value();
        void choose_best_time_to_leave(vector<Schedule> timetable);

        TravelPlan cities_crossover(TravelPlan plan2);
        TravelPlan transport_crossover(TravelPlan plan2);

    protected:
    private:
};

#endif // TRAVELPLAN_H
