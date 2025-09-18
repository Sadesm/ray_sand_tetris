#include <stdio.h>

#define NOB_IMPLEMENTATION
#define NOB_STRIP_PREFIX
#include "nob.h"

#define BUILD_FOLDER "build/"

int main(int argc, char** argv){
  NOB_GO_REBUILD_URSELF(argc, argv);
  
  if (!mkdir_if_not_exists(BUILD_FOLDER)) return 1;

  Cmd cmd = {0};

  cmd_append(&cmd, "gcc", "-Wall", "-Wextra");
  cmd_append(&cmd, "-o" BUILD_FOLDER"ray_sand_tetris.exe");
  cmd_append(&cmd, "main.c");
  cmd_append(&cmd, "-Iinclude", "-Llib", "-lraylib");
  cmd_append(&cmd, "-lgdi32", "-lwinmm");
 
  
  if(!cmd_run(&cmd)) return 1;
  cmd_append(&cmd, BUILD_FOLDER"ray_sand_tetris.exe");
  
  if(!cmd_run(&cmd)) return 1;

  return 0;
}
