#include <iostream>
#include "tree.h"

using namespace std;

Tree::Tree(){
    height = 0;
}

int Tree::get_height(){
    return height;
}

void Tree::set_height(int new_height){
    height = new_height;
}

