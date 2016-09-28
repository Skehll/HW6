/**
*
* main.cc
*
*/
#include "game.h"
#include "othello.h"
using namespace main_savitch_14;


int main()
{
	Othello theGame;
	/**
	*
	* calls the restart member function
	* no parameters
	*
	*/
	theGame.restart();
	theGame.play();
}
