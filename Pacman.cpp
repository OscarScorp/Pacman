// Pacman.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "KPlatform.h"

void InitGame() {
	KPlatform *platform = new KPlatform("Pac-Man by Oscar Maciel");
}

void Inputs() {

}

void UpdateLogic(){

}

void UpdateScreen() {

}

int main(int argc, char *argv[])
{
	bool finished = false;
	InitGame();

	while (!finished)
	{
		Inputs();
		UpdateLogic();
		UpdateScreen();
	}
	
    return 0;
}