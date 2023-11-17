//temperature.h

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
    public:
        int get_hour();
        int get_reading();

    private:
        int hour;
        int temp;
};

#endif