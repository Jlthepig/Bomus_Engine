#define CAMERA_IMPLEMENTATION

#include "raylib.h"
#include "rcamera.h"
#include "Main.h"
#include <string>


using namespace Core;

Window fullfunc;


// fullscreen toggle

void Core::Window::Toggle_FullScreen(int windowwidth, int windowheight)
{
	if (!IsWindowFullscreen())
	{
		SetWindowSize(GetMonitorWidth(monitor), GetMonitorHeight(monitor));
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
	Core::Window::monitor = GetCurrentMonitor();

	int MonitorRefreshRate = GetMonitorRefreshRate(Core::Window::monitor);



	InitWindow(Swidth, Sheight, "New Project");
	SetWindowState(FLAG_WINDOW_RESIZABLE);
	SetTargetFPS(60);


	Camera3D Editorcamera;
	/// camera pos
	Editorcamera.position = (Vector3{ 10.0f,10.0f,10.0f });
	/// camera alooking at point
	Editorcamera.target = (Vector3{ 0.0f,0.0f,0.0f });
	// Camera up vector (rotation towards target
	Editorcamera.up = (Vector3{ 0.0f,1.0f,0.0f });
	Editorcamera.fovy = 90.0f;
	Editorcamera.projection = CAMERA_PERSPECTIVE;

	std::string  Fps = std::to_string(GetFPS());

	DisableCursor();
	while (!WindowShouldClose())

	{
		float deltaTime = GetFrameTime();


		// Camera movement controls
		const float cameraSpeed = 100.0f * deltaTime;



		if (IsKeyDown(KEY_RIGHT)) Editorcamera.position.x += cameraSpeed;
		if (IsKeyDown(KEY_LEFT)) Editorcamera.position.y += cameraSpeed;
		if (IsKeyDown(KEY_UP)) Editorcamera.position.z -= cameraSpeed;
		if (IsKeyDown(KEY_DOWN)) Editorcamera.position.z += cameraSpeed;

		UpdateCamera(&Editorcamera, CAMERA_FREE);
		BeginDrawing();
		// handle the fullscreen togle
		if (IsKeyPressed(KEY_F11))
		{
			fullfunc.Toggle_FullScreen(Swidth, Sheight);
		}

		ClearBackground(RAYWHITE);
		BeginMode3D(Editorcamera);

		DrawGrid(10, 1.0f);
		EndMode3D();

		DrawFPS(10, 10);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}