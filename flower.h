#ifndef FLOWER_H
#define FLOWER_H
#include <iostream>
using namespace std;

/*new thing learned! PLACE INCLUDE STRING AFTER USINGNAMESPACE*/
#include <string>

class Flower{
    private: 
        string color;
    public:
        //constructor
        Flower();

        //getter
        string get_color();

        //setter
        void set_color(string new_color);
};

#endif