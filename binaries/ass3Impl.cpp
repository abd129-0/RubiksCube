#include "../binaries/ass3Impl.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "scene.h"

using namespace std;
using namespace glm;

RubiksCube::RubiksCube()
{
}

void RubiksCube::Build_Cube(Scene* scn, int cube_size) {
    scn->AddTexture("../res/textures/plane.png", false);

    size = cube_size;
    shapes = scn->getShapes();
    float distance = float(size) - ((float(size) + 1.f) * 0.5f);
    int counter = 0;

    for (float i = -distance; i <= distance; i += 1)
    {
        for (float j = -distance; j <= distance; j += 1)
        {
            for (float k = -distance; k <= distance; k += 1)
            {
                scn->AddShape(Scene::Cube, -1, Scene::TRIANGLES);
                scn->SetShapeTex(counter, 0);
                (*shapes)[counter]->MyTranslate({ i, j, k }, 0);
                (*shapes)[counter]->MyScale({ 0.5, 0.5, 0.5 });
                counter++;
            }
        }
    }
}