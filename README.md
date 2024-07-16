<a id="top"></a>

## Libft
Libft is a project at School 42 aimed at creating a library of useful functions that students can reuse throughout their C projects. This library contains many standard C functions, as well as additional custom functions to help with programming tasks.

## Table of Contents
- [About](#about)
- [Installation](#installation)
- [Usage](#usage)
- [Available Functions](#available-functions)

## About
In this project, students are tasked with re-implementing several standard C library functions, as well as creating additional functions that may be useful in future projects. By building this library, students gain a deeper understanding of how these functions work and improve programming skills.

## Installation
1. Clone this repository to your local machine:
	```sh
	git clone https://github.com/KarlQuerel/42-libft.git
	```

2. Navigate to the project directory:
	```sh
	cd 42-libft
	```

3. Compile the project using `make`:
	```sh
	make
	```
4. Include the `libft.h` header file in your C source files.

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

## Available Functions
#### Character Recon and Transformation
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`
#### String Manipulation
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_splitco`
- `ft_strmapi`
- `ft_striteri`
### Memory Manipulation
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`
### Conversion
- `ft_atoi`
- `ft_itoa`
### Printing
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`
### Linked List Manipulation
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstadd_back`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`
---
For a full list of functions available in the `libft` library and their usage, refer to the [libft.h](https://github.com/KarlQuerel/42-libft/blob/master/includes/libft.h) header file.

[Back to Top](#top)
