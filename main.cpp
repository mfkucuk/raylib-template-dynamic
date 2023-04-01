#include "include/raylib.h"

#include "game.h"

int main() {
    
    InitWindow(400, 400, "Template");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(HELLO_WORLD, 100, 100, 20, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
