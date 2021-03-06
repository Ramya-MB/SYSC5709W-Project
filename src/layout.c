#ifdef __linux__
    #define CLEAR "clear"
#elif _WIN64 || _WIN32
    #define CLEAR "cls"
#elif __APPLE__
    #define CLEAR "clear"
#elif __unix__
    #define CLEAR "clear"
#endif

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "layout.h"

void gotoxy(int x, int y)
    {  
        /**
        * The function places the cursor at the point (x,y)
        * @param[in] x horizontal co-ordinate of the console screen
        * @param[in] y the vertical co-ordinate of the console screen
        */
        printf("%c[%d;%df", 0x1B, y, x);
    }

void header_position(const char* screen_name)
    {
        /**
        * The function calculates header length, determines its positioning inside the header-bar and prints it
        * @param[in] screen_name name of the current screen
        */
        int length = 0;
        int position = 0;

        //calculating the position for header label to be displayed
        length = (76-strlen(screen_name))/2;
        printf("\t\t\t");

        for(position = 0 ; position < length ; position++)
            {
                //print space
                printf(" ");
            }
        //print message
        printf(ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET,screen_name);
    }

void header_layout(const char* screen_name)
    {
        /**
        * The function prints header-bar into the screen and calls the header_position( ) with the screen_name
        * @param[in] screen_name name of the current screen
        */
        system(CLEAR);  //clears the console screen - added stdlib.h
        printf(ANSI_COLOR_CYAN"\n=======================================================================================================================");
        printf("\n====================================                                               ====================================");
        printf("\n====================================       "ANSI_COLOR_RESET"BOOKIFY - Library management System"ANSI_COLOR_CYAN"     ====================================");
        printf("\n====================================                                               ====================================");
        printf("\n======================================================================================================================="ANSI_COLOR_RESET);
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        header_position(screen_name);
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    }

void welcome_message()
    {
        /**
        * The function prints layout for the landing-page
        * @param[in] void
        */
        header_layout("WELCOME");
        printf("\n\n");
        printf(ANSI_COLOR_RED"\n\t\t\t\t***-***-***-***-***-***-***-***-***-***-***-***-***-***-***-***");
        printf("\n\t\t\t\t        =============================================");
        printf("\n\t\t\t\t        |                  "ANSI_COLOR_RESET"WELCOME"ANSI_COLOR_RED"                  |");
        printf(ANSI_COLOR_RED"\n\t\t\t\t        |                    "ANSI_COLOR_RESET"TO"ANSI_COLOR_RED"                     |");
        printf("\n\t\t\t\t        |                  "ANSI_COLOR_RESET"BOOKIFY"ANSI_COLOR_RED"                  |");
        printf("\n\t\t\t\t        |                    "ANSI_COLOR_RESET"-"ANSI_COLOR_RED"                      |");
        printf("\n\t\t\t\t        |                  "ANSI_COLOR_RESET"LIBRARY"ANSI_COLOR_RED"                  |");
        printf("\n\t\t\t\t        |                 "ANSI_COLOR_RESET"MANAGEMENT"ANSI_COLOR_RED"                |");
        printf("\n\t\t\t\t        |                  "ANSI_COLOR_RESET"SYSTEM"ANSI_COLOR_RED"                   |");
        printf("\n\t\t\t\t        =============================================\n");
        printf("\n\t\t\t\t***-***-***-***-***-***-***-***-***-***-***-***-***-***-***-***\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_YELLOW"\n\n\t\t\t\t\t\t PRESS ENTER KEY TO CONTINUE..."ANSI_COLOR_RESET);

        getchar();

    }
