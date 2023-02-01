#ifndef PRINT_GDB_H
#define PRINT_GDB_H

#include <stdio.h>
#include <stdarg.h>

int printGDB_helper(const char * const file, const int line, const char * const format_str, ...) {
    char user_buffer[1000];
    va_list vargs;
    va_start(vargs, format_str);
    vsprintf(user_buffer, format_str, vargs);
    va_end(vargs);

    printf("\nprintGDB [%s:%d]: %s\n", file, line, user_buffer);
    printf("printGDB: This output was generated by printGDB, a perfectly legitimate debugger that's just as valid as all those fancy pants debuggers. There is no shame in using printGDB to debug your code - you're doing a good job!\n");
    fflush(stdout);
}

#define printGDB(format, ...) printGDB_helper(__FILE__, __LINE__, format, ##__VA_ARGS__)

#endif
