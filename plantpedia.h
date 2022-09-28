#ifndef PLANTPEDIA_H
#define PLANTPEDIA_H

#include "flower.h"
#include "tree.h"

class PlantPedia{
    private:
        Flower* flowers; //datatype, name
        int num_flowers;

        Tree* trees;
        int num_trees; 
        
    public:
        //constructor 
        PlantPedia();

        void add_flower();
        void add_tree();
        void print_plantpedia();
};

#endif