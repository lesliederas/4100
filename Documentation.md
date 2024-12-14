# C Library for 32-bit Integer Multiplication and Division

## Overview

This library provides two functions to perform integer multiplication and division using iterative methods.

## Functions

### `int imul(int a, int b)`

- **Description:** Multiplies two integers using iterative addition.
- **Parameters:**
  - `a`: First integer.
  - `b`: Second integer.
- **Returns:** The product of `a` and `b`.

### `int idiv(int a, int b)`

- **Description:** Divides two integers using iterative subtraction.
- **Parameters:**
  - `a`: Dividend.
  - `b`: Divisor.
- **Returns:** The quotient of `a` divided by `b`. Returns 0 if `b` is 0.

## Build Instructions

1. Run `make` to build the library and the test application.
2. Run `./test` to execute the test application.

## Clean Build Artifacts

- Run `make clean` to remove all build artifacts.
