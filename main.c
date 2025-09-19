#include <stdio.h>
#include "raylib.h"

const int Height = 800;
const int Width = 600;
const int Row = 12;
const int Column = 9;

int main(int argc, char** argv){
  
  InitWindow(Width, Height, "Salam Donya");
  SetTargetFPS(60);
  
  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(LIME);
    DrawRectangle(10, 10, Width - 20, Height - 20, SKYBLUE);
    for(int i = 0; i < Row; i++)
      for(int j = 0; j < Column; j++){
        float celSizeH = (Height - 30) / Row - 10;
        float celSizeW = (Width - 30) / Column - 10;

        float posX = (celSizeH + 10) * i + 20;  
        float posY = (celSizeW + 10) * j + 20;

        Vector2 celSize = {celSizeW, celSizeH};
        Vector2 pos = {posY, posX};

        DrawRectangleV(pos, celSize, RAYWHITE);
      }
    EndDrawing();
  
  }
  CloseWindow();

  return 0;
}
