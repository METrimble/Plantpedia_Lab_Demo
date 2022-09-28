#include <iostream>
#include "plantpedia.h"
#include <string>

using namespace std;

PlantPedia::PlantPedia(){
    flowers = new Flower[3];
    num_flowers = 0;

    trees = new Tree[3];
    num_trees = 0;
}

void PlantPedia::add_flower(){
    string temp_color;

    cout << "ADD FLOWER APP:" << endl;
    cout << "SET FLOWER COLOR: ";
    cin >> temp_color;

    //use our setter to set the flower color
    flowers[num_flowers].set_color(temp_color);

    //increment num_flowers
    num_flowers = num_flowers + 1;
}

void PlantPedia::add_tree(){
    int temp_height;

    cout << "ADD TREE APP:" << endl;
    cout << "SET TREE HEIGHT: ";
    cin >> temp_height;

    trees[num_trees].set_height(temp_height);
    
    num_trees = num_trees + 1;
}

void PlantPedia::print_plantpedia(){
    for(int i = 0; i < num_flowers; i++){
        cout << "FLOWER " << i << ":" << endl;
        cout << "COLOR: " << flowers[i].get_color() << endl;
    }

    for(int i = 0; i < num_trees; i++){
        cout << "TREE " << i << ":" << endl;
        cout << "HEIGHT: " << trees[i].get_height() << endl;
    }    
}

