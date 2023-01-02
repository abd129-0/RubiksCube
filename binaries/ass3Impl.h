#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../res/includes/glm/glm.hpp"
#include "../Engine3D/scene.h"

using namespace std;
using namespace glm;

class RubiksCube
{
public:
    // Methods
    RubiksCube();
    void Build_Cube(Scene* scn, int cube_size);


    // Variables
    int size;
    vector<Shape*>* shapes;
};