#include <stdio.h>
#include "raylib.h"

int main(int argc, char** argv){
  
  InitWindow(800, 600, "Salam Donya");
  SetTargetFPS(60);
  
  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(LIME);
    DrawText("Slaaaaaaaaaam!??", 380, 300, 20, BLACK);
    EndDrawing();
  
  }
  CloseWindow();

  return 0;
}
