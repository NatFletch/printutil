#include <utils/printutil.h>

int main(){
    println("===BEGINNING UNIT TEST===");
    println("==INLINE COLOR TEST==");
    print_black("black ");
    print_red("red ");
    print_green("green ");
    print_yellow("yellow ");
    print_blue("blue ");
    print_purple("purple ");
    print_cyan("cyan ");
    print_white("white\n");

    println("");

    println("==NEW LINE TEST==");
    println_black("This is a black line");
    println_red("This is a red line");
    println_green("This is a green line");
    println_yellow("This is a yellow line");
    println_blue("This is a blue line");
    println_purple("This is a purple line");
    println_cyan("This is a cyan line");
    println_white("This is a white line");

    println("===TESTS DONE===");
}