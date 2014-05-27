#include "TravelPlan.h"

TravelPlan::TravelPlan()
{
    //ctor
}

TravelPlan::~TravelPlan()
{
    //dtor
}
TravelPlan TravelPlan::transport_crossover(TravelPlan plan2){
    int length1 = this->list_of_spots_to_visit.size();
    int half = length1/2;
    int random = rand() % half;

    TravelPlan NewPlan;
    vector<Spot> new_list_of_spots_to_visit = this->list_of_spots_to_visit;

    for (int i = 0; i<length1; i++){
        if( (i > random  )&& (i <random+half) ){
            new_list_of_spots_to_visit[i].mean_of_transport = plan2.list_of_spots_to_visit[i].mean_of_transport;
        }
    }
    NewPlan.list_of_spots_to_visit = new_list_of_spots_to_visit;
    return NewPlan;
}

void TravelPlan::calculate_total_cost(){
    int sum_of_costs = 0;
    int length = this->list_of_spots_to_visit.size();


    for(int i = 0; i < length; i++){
        sum_of_costs += this->list_of_spots_to_visit[i].cost_of_travel;
    }
    this->total_cost = sum_of_costs;
}

void TravelPlan::calculate_total_time(){
    int sum_of_time = 0;
    int length = this->list_of_spots_to_visit.size();


    for(int i = 0; i < length; i++){
        sum_of_time += this->list_of_spots_to_visit[i].time_of_travel + this->list_of_spots_to_visit[i].departure_time - this->list_of_spots_to_visit[i].arrival_time;
    }
    this->total_time = sum_of_time;
}
