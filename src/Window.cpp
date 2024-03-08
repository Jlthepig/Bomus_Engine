#include <raylib.h>
#include <Mainr.h>
using namespace Core;

Window fullfunc;


// fullscreen toggle

void Core::Window::Toggle_FullScreen(int windowwidth,int windowheight)
{
	if (!IsWindowFullscreen())
	{
		SetWindowSize(GetMonitorWidth(monitor),GetMonitorHeight(monitor));
		ToggleFullscreen();
	}


	else
	{
		ToggleFullscreen();
		SetWindowSize(windowwidth, windowheight);
	}
}


// window func
int main()


{

	// variables

	int Swidth = 1360;
	int Sheight = 800;

	InitWindow(Swidth,Sheight,"New Project");
	SetWindowState(FLAG_WINDOW_RESIZABLE);
	SetTargetFPS(60);


	while (!WindowShouldClose())
	{
		BeginDrawing();
		// handle the fullscreen togle
		if (IsKeyDown(KEY_F11))
		{
			fullfunc.Toggle_FullScreen(Swidth,Sheight);
		}
		
		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}