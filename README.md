# Libft

## 📌 Description

Libft is the first project of the 42 cursus. The goal is to build your own C library by re-implementing standard C library functions, along with additional utilities for memory handling, strings, and linked lists that will be used for future projects.
This project ensures a solid understanding of low-level behavior and prepares you for more complex projects.

## 🚀 Features
Libft is divided into three main sections: Libc functions, Additional functions, and Bonus (linked list).

### Part 1 — Reimplemented libc Functions  
I implemented the following common C functions:

- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`  
- String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`  
- Conversion / character-check: `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`  
- Memory allocation: `ft_calloc`, `ft_strdup`

---

### Part 2 — Additional Utility Functions  
These functions are not part of the standard C library, but are very useful:

- `ft_substr` — Extract substring from a string  
- `ft_strjoin` — Join two strings  
- `ft_strtrim` — Trim a set of characters from the beginning and end of a string  
- `ft_split` — Split a string by a character into an array of strings  
- `ft_itoa` — Convert integer to string  
- `ft_strmapi` / `ft_striteri` — Apply function to each character of a string  
- File descriptor operations: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

---

### Bonus — Singly Linked List (`t_list`)  
I implemented a simple linked list structure, including:

- `ft_lstnew` — Create a new list node  
- `ft_lstadd_front` / `ft_lstadd_back` — Add node to front or back  
- `ft_lstsize` / `ft_lstlast` — Get size or last element  
- `ft_lstdelone` / `ft_lstclear` — Delete one node or clear list  
- `ft_lstiter` — Apply a function to every node’s content  
- `ft_lstmap` — Create a new list by mapping a function over the list

---

## 🛠️ Compilation <a id="compilation"></a>

Compile the library using:

```bash
make
```

This will generate `libft.a`, a static library containing all implemented functions.

To include the **bonus (linked list)** functions:

```bash
make bonus
```

To clean object files:

```bash
make clean
```

To remove everything (including the library):

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

You can use **libft** in any C project by including its header and linking the library:

```c
#include "libft.h"
```

Compile your program either with:

```bash
cc main.c -L. -lft -I. -Wall -Wextra -Werror -o prog
```

or

```bash
cc -Wall -Wextra -Werror main.c libft.a -o prog
```

---

## 📚 References

This library was built following the libft subject of 42 School. 
The code follows the Norm coding standard used at 42.
