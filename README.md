# Camel to Snake Case Converter 🐫 ➡️ 🐍

This project is a C implementation of a string formatter that converts **lowerCamelCase** strings into **snake_case** format.

## 📝 Description

The program takes a single string as a command-line argument. It identifies uppercase letters, transforms them into lowercase, and prefixes them with an underscore (`_`), except for the first word.

* **Input:** `hereIsACamelCaseWord`
* **Output:** `here_is_a_camel_case_word`

## 🛠️ Technical Implementation

The solution focuses on manual memory management and string manipulation in C:
* **Dynamic Allocation:** Uses `malloc` to allocate exact memory by pre-calculating the required size (original length + number of uppercase letters + null terminator).
* **ASCII Manipulation:** Converts characters by adjusting their ASCII values (adding 32 to switch from Upper to Lower).
* **Low-level I/O:** Uses the `write` function from `unistd.h` for output.

## 🚀 How to run

1.  Compile the program:
    ```bash
    gcc -Wall -Wextra -Werror camel_to_snake.c -o camel_to_snake
    ```
2.  Run with an argument:
    ```bash
    ./camel_to_snake "helloWorld"
    ```
