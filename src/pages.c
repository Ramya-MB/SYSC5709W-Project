#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct all_pages init_pages(void);
struct page manager_main_menu;
struct all_pages all_pages;

struct page {
    char page_title[20];
    char menu[15][50];
    int menu_length;
};

struct all_pages {

    struct page manager_main_menu;
    struct page user_main_menu;
    struct page add_book;
    struct page delete_book;
    struct page modify_book;
    //struct page view_requests;
    struct page view_list_of_books;
    struct page search_books;
    struct page view_list_of_users;
};



struct all_pages init_pages(void){

    struct all_pages returned_pages;

    struct page manager_main_menu;

        strcpy(manager_main_menu.page_title, "MANAGER'S MAIN MENU");
        strcpy(manager_main_menu.menu[0], "1. ADD BOOK");
        strcpy(manager_main_menu.menu[1], "2. DELETE BOOK");
        strcpy(manager_main_menu.menu[2], "3. MODIFY BOOK");
        strcpy(manager_main_menu.menu[3], "4. LIST OF BOOKS");
        strcpy(manager_main_menu.menu[4], "5. LIST REGISTERED USERS");
        manager_main_menu.menu_length = 5;
        returned_pages.manager_main_menu = manager_main_menu;

    struct page add_book;

        strcpy(add_book.page_title, "ADD BOOK");
        strcpy(add_book.menu[0], "1. BOOK TITLE");
        strcpy(add_book.menu[1], "2. BOOK ID");
        strcpy(add_book.menu[2], "3. ISBN NUMBER");
        strcpy(add_book.menu[3], "4. QUANTITY");
        strcpy(add_book.menu[4], "5. AUTHOR NAME");
        strcpy(add_book.menu[5], "6. DATE OF PUBLICATION");
        strcpy(add_book.menu[6], "7. ENTRY DATE");
        strcpy(add_book.menu[7], "8. CATEGORY");
        strcpy(add_book.menu[8], "9. LANGUAGE");
        add_book.menu_length = 9;
        returned_pages.add_book = add_book;

    struct page user_main_menu;

        strcpy(user_main_menu.page_title, "USER'S MAIN MENU");
        strcpy(user_main_menu.menu[0], "1. SEARCH BOOK");
        strcpy(user_main_menu.menu[1], "2. VIEW MY DETAILS");
        user_main_menu.menu_length = 2;
        returned_pages.user_main_menu = user_main_menu;

    struct page delete_book;
        strcpy(delete_book.page_title, "DELETE BOOK");
        strcpy(delete_book.menu[0], "1. BOOK ID");
        strcpy(delete_book.menu[1], "2. ISBN NUMBER");
        delete_book.menu_length = 2;
        returned_pages.delete_book = delete_book;

    struct page modify_book;
        strcpy(modify_book.page_title, "MODIFY BOOK");
        strcpy(modify_book.menu[0], "1. BOOK ID");
        strcpy(modify_book.menu[1], "2. ISBN NUMBER");
        modify_book.menu_length = 2;
        returned_pages.modify_book = modify_book;

    struct page view_list_of_books;
        strcpy(view_list_of_books.page_title, "LIST OF BOOKS");
        strcpy(view_list_of_books.menu[0], "1. BOOK TITLE");
        strcpy(view_list_of_books.menu[1], "2. BOOK ID");
        strcpy(view_list_of_books.menu[2], "3. ISBN NUMBER");
        strcpy(view_list_of_books.menu[3], "4. QUANTITY");
        strcpy(view_list_of_books.menu[4], "5. AUTHOR NAME");
        strcpy(view_list_of_books.menu[5], "6. DATE OF PUBLICATION");
        strcpy(view_list_of_books.menu[6], "7. ENTRY DATE");
        strcpy(view_list_of_books.menu[7], "8. CATEGORY");
        strcpy(view_list_of_books.menu[8], "9. LANGUAGE");
        strcpy(view_list_of_books.menu[9], "10. STATUS");
        view_list_of_books.menu_length = 10;
        returned_pages.view_list_of_books = view_list_of_books;

    struct page search_books;
        strcpy(search_books.page_title, "LIST OF BOOKS");
        strcpy(search_books.menu[0], "1. BOOK TITLE");
        strcpy(search_books.menu[1], "2. BOOK ID");
        strcpy(search_books.menu[2], "3. ISBN NUMBER");
        strcpy(search_books.menu[3], "4. QUANTITY");
        strcpy(search_books.menu[4], "5. AUTHOR NAME");
        strcpy(search_books.menu[5], "6. DATE OF PUBLICATION");
        strcpy(search_books.menu[6], "7. ENTRY DATE");
        strcpy(search_books.menu[7], "8. CATEGORY");
        strcpy(search_books.menu[8], "9. LANGUAGE");
        strcpy(search_books.menu[9], "10. STATUS");
        search_books.menu_length = 10;
        returned_pages.search_books = search_books;

    struct page view_list_of_users;
        strcpy(view_list_of_users.page_title, "LIST OF USERS");
        strcpy(view_list_of_users.menu[0], "1. NAME");
        strcpy(view_list_of_users.menu[1], "2. USER NAME");
        strcpy(view_list_of_users.menu[2], "3. EMAIL");
        strcpy(view_list_of_users.menu[3], "4. NUMBER OF BOOKS");
        view_list_of_users.menu_length = 4;
        returned_pages.view_list_of_users = view_list_of_users;


    return returned_pages;
}
