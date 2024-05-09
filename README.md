## Libft
Libft is a project at School 42 aimed at creating a library of useful functions that students can reuse throughout their C projects. This library contains many standard C functions, as well as additional custom functions to help with programming tasks.

## Table of Contents
- [About](#about)
- [Getting Started](#getting-started)
- [Usage](#usage)

## About
In this project, you are tasked with re-implementing several standard C library functions, as well as creating additional functions that may be useful in your future projects. By building this library, you'll gain a deeper understanding of how these functions work and improve your programming skills.

## Getting Started
To get started with using the `libft` library in your projects, follow these steps:

1. Clone this repository to your local machine using `git clone`.
2. Compile the library using `make`.
3. Link the library to your project by including the `libft.h` header file and using the `-L` flag during compilation.

## Usage
Once you have linked the `libft` library to your project, you can start using the functions provided in the library. Here is an example of how to use the functions:

```c
#include "libft.h"

int main()
{
	char *str = "Hello, world!";
	ft_putstr(str); // Output: Hello, world!
	return 0;
}
```
---
For a full list of functions available in the `libft` library and their usage, refer to the [libft.h](libft.h) header file.