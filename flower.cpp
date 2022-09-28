#include <iostream>
#include "flower.h"

using namespace std;

Flower::Flower(){
    //default color
    color = "blue";
}

string Flower::get_color(){
    return color;
}

void Flower::set_color(string new_color){
    color = new_color;
}