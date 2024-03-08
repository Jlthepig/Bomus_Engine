#include <raylib.h>
#pragma once


namespace Core {
	 class Window
	{
	public:

		// var
		int monitor = GetCurrentMonitor();


		//functions
		 void Toggle_FullScreen(int windowwidth, int windowheight);
	private:

		

	};

	

}