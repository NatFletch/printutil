#ifndef PRINTUTIL_H
#define PRINTUTIL_H

#include <stdio.h>

// Reset color
static inline void print_reset(void) { printf("\033[0m"); }

// Print a string with a newline
static inline void println(const char *string) {
    printf("%s\n", string);
}

// Generalized color print function
static inline void print_color(const char *color_code, const char *string, int newline) {
    printf("%s%s", color_code, string);
    if (newline) printf("\n");
    print_reset();
}

// Color macros for readability
#define BLACK   "\033[0;30m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define PURPLE  "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"

// Inline color print functions
static inline void print_black(const char *string)  { print_color(BLACK, string, 0); }
static inline void print_red(const char *string)    { print_color(RED, string, 0); }
static inline void print_green(const char *string)  { print_color(GREEN, string, 0); }
static inline void print_yellow(const char *string) { print_color(YELLOW, string, 0); }
static inline void print_blue(const char *string)   { print_color(BLUE, string, 0); }
static inline void print_purple(const char *string) { print_color(PURPLE, string, 0); }
static inline void print_cyan(const char *string)   { print_color(CYAN, string, 0); }
static inline void print_white(const char *string)  { print_color(WHITE, string, 0); }

// Inline color println functions
static inline void println_black(const char *string)  { print_color(BLACK, string, 1); }
static inline void println_red(const char *string)    { print_color(RED, string, 1); }
static inline void println_green(const char *string)  { print_color(GREEN, string, 1); }
static inline void println_yellow(const char *string) { print_color(YELLOW, string, 1); }
static inline void println_blue(const char *string)   { print_color(BLUE, string, 1); }
static inline void println_purple(const char *string) { print_color(PURPLE, string, 1); }
static inline void println_cyan(const char *string)   { print_color(CYAN, string, 1); }
static inline void println_white(const char *string)  { print_color(WHITE, string, 1); }

#endif // PRINTUTIL_H
