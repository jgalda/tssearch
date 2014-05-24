#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <string.h>

#include <Transport.h>
#include <City.h>

using namespace std;
class Spot
{
    public:

        City city_to_visit;
        int time_of_visit;
        Transport mean_of_transport;

        Spot();
        virtual ~Spot();


    protected:
    private:
};

#endif // SPOT_H
