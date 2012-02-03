#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle
{
    protected:
        float cost;
    public:
        Vehicle();
        virtual float getCost() = 0;
};

#endif
