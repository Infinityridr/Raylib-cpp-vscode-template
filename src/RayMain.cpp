#include "raylib-cpp.hpp"

using namespace raylib;
int main(void)
{ 
    raylib::Window window_(800, 400, "Game Window");
    float frameTime_;

    SetTargetFPS(60);
    while (!window_.ShouldClose())
    {
        // * logic update
        frameTime_ = GetFrameTime();
       //start





        //end

        // * drawing
        window_.BeginDrawing();
        //start


        ClearBackground(raylib::Color::RayWhite());


        //end
        window_.EndDrawing();
    }
}
