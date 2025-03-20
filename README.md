
# PrintUtil - A Simple ANSI Color Printing Library for C

`PrintUtil` is a lightweight, header-only C library that provides functions for printing colored text to the terminal using ANSI escape codes. This is a very basic library full of helper functions to make printing to the terminal nicer.

## Features
- Simple API for printing colored text
- Header-only (no separate compilation required)
- Supports multiple colors
- No dependencies beyond standard C libraries

## Installation

### **Option 1: System-wide Installation (Linux Only)**
To make `printutil.h` available globally, install it in a standard include directory:

Dependencies: `make`, `gcc`

```sh
make install
```

Now, you can include it in your programs as:

```c
#include <utils/printutil.h>
```

And compile normally:

```sh
gcc main.c -o main
```

---

### **Option 2: Project-specific Usage**
Simply place `printutil.h` in your project directory and include it as:

```c
#include "printutil.h"
```

Then compile:

```sh
gcc main.c
```

---

### **Usage Example**
```c
#include <utils/printutil.h>

int main() {
    println_red("This is red text with a newline!");
    print_green("This is green text without a newline.");
    println_blue(" Now it's blue with a newline.");
    return 0;
}
```

---

### **Option 3: Using a Custom Include Path**
If `printutil.h` is stored in a custom directory (e.g., `~/mylibs/`), specify the path with `-I` when compiling:

```sh
gcc -I ~/mylibs main.c
```

Include it in the source code as:

```c
#include <utils/printutil.h>
```

---

## **Available Functions**
### **Basic Functions**
- `print_reset()` – Resets text color to default. (this is mostly a private function as this is called in all the functions using colors)
- `println(const char *string)` – Prints a string with a newline.

### **Color Print Functions**
| Function         | Description                     |
|-----------------|---------------------------------|
| `print_black()` | Prints black text              |
| `print_red()`   | Prints red text                |
| `print_green()` | Prints green text              |
| `print_yellow()`| Prints yellow text             |
| `print_blue()`  | Prints blue text               |
| `print_purple()`| Prints purple text             |
| `print_cyan()`  | Prints cyan text               |
| `print_white()` | Prints white text              |

### **Color Print with Newline Functions**
| Function          | Description                     |
|------------------|---------------------------------|
| `println_black()` | Prints black text with newline |
| `println_red()`   | Prints red text with newline   |
| `println_green()` | Prints green text with newline |
| `println_yellow()`| Prints yellow text with newline |
| `println_blue()`  | Prints blue text with newline  |
| `println_purple()`| Prints purple text with newline |
| `println_cyan()`  | Prints cyan text with newline  |
| `println_white()` | Prints white text with newline |

---

## **License**
This project is licensed under the MIT License. You are free to use, modify, and distribute it.

---

## **Contributing**
Feel free to contribute improvements! Fork the repository and submit a pull request.

---