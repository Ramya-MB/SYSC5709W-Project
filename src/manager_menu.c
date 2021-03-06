#include <errno.h>
#include<string.h>
#include<stdio.h>
#include <stdlib.h>

#include "add_books.h"
#include "modify_book.h"
#include "layout.h"
#include "delete_book.h"
#include "messages.h"
#include "display_page.h"
#include "database_lookup.h"


void manager_menu(){

        /**
        * The function prints manager-menu-page with 5 options for which only manager has the
          access to those features
        */

        int selection = 0;
        header_layout("MANAGER MENU");

        gotoxy(50,15);
        printf("[ 1 ] ADD BOOK");
        gotoxy(50,17);
        printf("[ 2 ] DELETE BOOK");
        gotoxy(50,19);
        printf("[ 3 ] MODIFY BOOK");
        gotoxy(50,21);
        printf("[ 4 ] LIST OF REGISTERED USERS");
        gotoxy(50,23);
        printf("[ 5 ] VIEW LIST OF BOOKS");
        gotoxy(50,25);
        printf("[ 0 ] CLOSE APPLICATION");
        gotoxy(50,27);
        printf(ANSI_COLOR_YELLOW "PLEASE ENTER YOUR CHOICE: "ANSI_COLOR_RESET);
    selection_repeat:
        gotoxy(77,27);
        scanf("%d", &selection);
        getchar();

        switch(selection){
            case 1:
                    add_book();
                    break;

            case 2:
                    delete_book();
                    break;

            case 3:
                    modify_book();
                    break;

                case 4:
                    // return all users as a table
                    display_table(lookup("",2,1));

                    break;

                case 5:
                    //return all users as a tab;e
                    display_table(lookup("",1,2));
                    break;

            case 0:
                    printf("\nEXIT FUNCTION CALLING");
                    //exit(1);
                    break;

            default:
                    gotoxy(50,29);
                    messages(1);
                    getchar();
                    gotoxy(77,27);
                    printf("                                        ");
                    gotoxy(50,29);
                    printf("                                                                                  ");
                    goto selection_repeat;
        }
    }
