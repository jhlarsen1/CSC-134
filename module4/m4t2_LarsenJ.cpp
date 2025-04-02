//sample from class because i missed the day

/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*

M4T2 - Raylib
norrisa
3/19/25

We'll need to:
- Decide on a screen size 
- Decide what we're repeating (rectangle, png, etc.)
- Create a loop to draw a ROW of them
- Create a nested loop to draw a GRID (rows and columns) of them

    Color colors[MAX_COLORS_COUNT] = {
        DARKGRAY, MAROON, ORANGE, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

********************************************************************************************/

#include "raylib.h"

// Draw one critter
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2); 
void DrawAlien(int c_x, int c_y, int tile_width, int tile_height, Color bodyColor, Color eyeColor, Color antennaColor) ;
void DrawUFO(int c_x, int c_y, int body_width, int body_height, int dome_width, int dome_height, Color bodyColor, Color domeColor, Color lightColor);
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    // The item I'm drawing
    int tile_width = 80;
    int tile_height = 60;
    Color color1 = MAROON;
    Color color2 = GOLD;
    int c_x = 0;
    int c_y = 0;               // current location of critter

    InitWindow(screenWidth, screenHeight, "m4t2 - raylib example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        c_x += 2;
        if (c_x > screenWidth) {
            c_x = 0;
            c_y += tile_height;
        }
        //c_y += 1;
        //tile_width += 1;
        //tile_height += 1;
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);
            // Draw our critter 
            //DrawCritter(c_x, c_y, tile_width, tile_height, color1, color2);
            //DrawAlien( c_x,  c_y,  tile_width,  tile_height,  color1,  color2,  color1);
            for (int column=0; column<screenHeight; column += tile_height * 2) {
                //DrawUFO(c_x, c_y + column, tile_width, tile_height /2, tile_width / 2, tile_height / 4, GRAY, SKYBLUE,  RED);
                for (int row=0; row<screenWidth; row += tile_width * 2) {
                    DrawUFO(c_x + row, c_y + column, tile_width, tile_height /2, tile_width / 2, tile_height / 4, GRAY, SKYBLUE,  RED);
                }
            }


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// Other function definitions here
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2) {
            // draw the body
            DrawRectangle(c_x, c_y, tile_width, tile_height, color1);
            // place the eyes
            int left_x = c_x + (tile_width / 4);        // 1/4 across
            int left_y = c_y + 10;
            int right_x = c_x + (3 * tile_width / 4);    // 3/4 across
            int right_y = c_y + 10;
            DrawRectangle(left_x, left_y, 10, 10, color2);
            DrawRectangle(right_x, right_y, 10, 10, color2);
}

void DrawAlien(int c_x, int c_y, int tile_width, int tile_height, Color bodyColor, Color eyeColor, Color antennaColor) {
    // Draw the body
    DrawRectangle(c_x, c_y, tile_width, tile_height, bodyColor);

    // Place the eyes
    int left_x = c_x + (tile_width / 4);        // 1/4 across
    int left_y = c_y + 10;
    int right_x = c_x + (3 * tile_width / 4);    // 3/4 across
    int right_y = c_y + 10;
    DrawRectangle(left_x, left_y, 10, 10, eyeColor);
    DrawRectangle(right_x, right_y, 10, 10, eyeColor);

    // Draw the antenna
    int antenna_x = c_x + (tile_width / 2);      // Centered
    int antenna_y = c_y - 10;                    // Above the body
    DrawRectangle(antenna_x, antenna_y, 5, 10, antennaColor);
}

void DrawUFO(int c_x, int c_y, int body_width, int body_height, int dome_width, int dome_height, Color bodyColor, Color domeColor, Color lightColor) {
    // Draw the body of the UFO (saucer)
    DrawEllipse(c_x, c_y, body_width, body_height, bodyColor);

    // Draw the dome of the UFO
    int dome_x = c_x;
    int dome_y = c_y - (body_height / 2) - (dome_height / 2);
    DrawEllipse(dome_x, dome_y, dome_width, dome_height, domeColor);

    // Draw lights on the UFO
    int light_radius = 5;
    int num_lights = 6;
    int light_spacing = body_width / (num_lights + 1);
    for (int i = 1; i <= num_lights; i++) {
        int light_x = c_x - (body_width / 2) + (i * light_spacing);
        int light_y = c_y + (body_height / 2) - light_radius;
        DrawCircle(light_x, light_y, light_radius, lightColor);
    }
}