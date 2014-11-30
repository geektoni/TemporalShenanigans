#include <ncurses.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Interface.h"

/*Private*/

// Generate the border of the HUD and of the game field
void Interface::generateBorder(WINDOW *screen) {
	int x, y, i;
	
	getmaxyx(screen, y, x);
	// 4 corners
	mvwprintw(screen, 0, 0, "+");
	mvwprintw(screen, y - 1, 0, "+");
	mvwprintw(screen, 0, x - 1, "+");
	mvwprintw(screen, y - 1, x - 1, "+");
	// sides
	for (i = 1; i < (y - 1); i++) {
		mvwprintw(screen, i, 0, "|");
	    mvwprintw(screen, i, x - 1, "|");
	}
	// top and bottom
	for (i = 1; i < (x - 1); i++) {
	  	mvwprintw(screen, 0, i, "-");
	    mvwprintw(screen, y - 1, i, "-");
	}
}

/*Public*/
// Print the HUD and the game field (Responsive)
void Interface::printWindow() {
    int parent_x, parent_y, new_x, new_y;
    int HUD_size = 3;
    initscr();
    noecho();
    curs_set(FALSE);
    // get our maximum window dimensions
    getmaxyx(stdscr, parent_y, parent_x);
    // set up initial windows
    WINDOW *field = newwin(parent_y - HUD_size, parent_x, 0, 0);
    WINDOW *HUD = newwin(HUD_size, parent_x, parent_y - HUD_size, 0);
    generateBorder(field);
	generateBorder(HUD);
    while(1) {
       getmaxyx(stdscr, new_y, new_x);
       if (new_y != parent_y || new_x != parent_x) {
         parent_x = new_x;
         parent_y = new_y;	 
         wresize(field, new_y - HUD_size, new_x);
         wresize(HUD, HUD_size, new_x);   
		 mvwin(HUD, new_y - HUD_size, 0);
		 wclear(stdscr);
         wclear(field);
         wclear(HUD);    
		 generateBorder(field);
         generateBorder(HUD);
       }
       // draw to our windows
       mvwprintw(field, 1, 1, "Field");
       mvwprintw(HUD, 1, 1, "Score");
       // refresh each window
       wrefresh(field);
       wrefresh(HUD);
     }
	delwin(field);
	delwin(HUD);
    endwin();
}