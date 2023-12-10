# Calculator Application

This is a simple calculator application implemented in C, with a Makefile for building the project.

## Project Structure

The project is organized as follows:

- `src/`: Contains the source code files.
- `include/`: Contains the header file(s).
- `Makefile`: Defines rules for building the project.

## Build Instructions

To build the calculator application, follow these steps:

1. Open a terminal and navigate to the project directory.

2. Run the following command to build the executable:

    ```bash
    make
    ```

    This will compile the source code and create an executable named `calculator`.

3. Run the executable:

    ```bash
    ./calculator
    ```

    This will execute the calculator application and display the results of basic arithmetic operations.

## Makefile Explanation

- `CC`: Compiler (gcc).
- `CFLAGS`: Compiler flags, including the include directory.
- `SRC`: List of source files.
- `OBJ`: Corresponding object files.
- `EXECUTABLE`: Name of the final executable.

Targets in the Makefile:

- `all`: Builds the executable.
- `$(EXECUTABLE)`: Rule for building the executable.
- `%.o`: Rule for building object files.
- `clean`: Removes object files and the executable.

Feel free to explore and modify the source code in the `src/` directory to extend or customize the calculator functionality.

## Clean Up

To clean up the project (remove object files and the executable), run:

```bash
make clean

