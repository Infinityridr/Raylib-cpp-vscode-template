#include "raylib-cpp.hpp"

using namespace raylib;
int main(void)
{
    std::string text = "template text";
    Text myText = text;
    myText.color = raylib::Color::Red();
    myText.fontSize = 40;
    myText.SetSpacing(3);
    
    raylib::Window window(800, 450, "window");

    SetTargetFPS(144);
    while (!window.ShouldClose())
    {
        BeginDrawing();
        window.ClearBackground(raylib::Color::RayWhite());
        DrawFPS(10, 10);
        myText.Draw(190, 200);
        EndDrawing();
    }
}
