# LIBFT

## 📌 Description

Libft is the first project of the 42 cursus. The goal is to build your own C library by re-implementing standard C library functions, along with additional utilities for memory handling, strings, and linked lists that will be used for future projects.
This project ensures a solid understanding of low-level behavior and prepares you for more complex projects.

## 🚀 Features
Libft is divided into three main sections: Libc functions, Additional functions, and Bonus (linked list).

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


