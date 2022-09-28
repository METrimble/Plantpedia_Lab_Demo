#include <iostream>
#include "plantpedia.h"


using namespace std;

/********************
 * lab 2 to-do list:
 * 
 * make a pokemon class with:
 * accessors/mutators/constructors (getters/setters/constructors)
 * variables dexnumber, name, type, and an array of 4 moves
 * 
 * make a pokedex class with:
 * getters/setters/constructors
 * variables trainername, dyn array of Pokemon, number of pokemon in that array
 * make a add new pokemon function
 * ******************/

int main(){
    //make a plantpedia object
    PlantPedia mypedia;

    //add a flower 
    mypedia.add_flower();

    //add a tree
    mypedia.add_tree();
    //print plantpedia
    mypedia.print_plantpedia();
}