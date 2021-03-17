//
//  main.cpp
//  stringtest
//
//  Created by 马元 on 佛历2560-11-6.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include <stdio.h>
#include <string.h>

int main ()
{
    char key[] = "apple";
    char buffer[80];
    do {
        printf ("Guess my favorite fruit? ");
        fflush (stdout);
        scanf ("%79s", buffer);
        strcpy(key, buffer);
         puts(buffer);
    } while (strcmp (key, buffer) != 0);
    strcpy(key, buffer);
    puts(buffer);
    puts ("Correct answer!");
    return 0;
}

