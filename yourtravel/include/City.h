#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string.h>


using namespace std;
class City
{
    public:
        string name;

        int weight;
        int declated_visit_time;

        City();
        virtual ~City();

    protected:
    private:
};

#endif // CITY_H
