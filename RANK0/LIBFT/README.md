<p align="right">
  <a href="es.README.md">
    <img src="https://img.shields.io/badge/🌐%20Spanish-README-blue?style=for-the-badge" alt="Spanish README" />
  </a>
</p>

# 📚 Libft – Your First C Library

## 🧾 Description
This repository contains the implementation of **Libft**, the first major project in the 42 Common Core curriculum. The goal is to recreate a selection of essential functions from the C standard library, plus additional utility functions (including **bonus** linked list management), all from scratch.

The project reinforces deep understanding of memory management, pointers, strings, and modular code design while strictly adhering to the **Norminette** coding style.

---

## 🎯 Project Objectives

* Recreate key functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and others
* Master manual memory allocation with `malloc` and deallocation with `free`
* Implement clean, reusable, and efficient C code
* Understand function pointers and basic data structures (bonus)
* Follow strict Norminette compliance from day one

---

## 📁 Exercise Table

### Part 1 - Libc Functions

| # | Function | Description | File |
|---|--------|-------------|------|
| 01 | `ft_memset` | Fills memory with a constant byte | `ft_memset.c` |
| 02 | `ft_bzero` | Zeros out a memory area | `ft_bzero.c` |
| 03 | `ft_memcpy` | Copies memory area | `ft_memcpy.c` |
| 05 | `ft_memmove` | Copies memory safely (handles overlap) | `ft_memmove.c` |
| 06 | `ft_memchr` | Locates byte in memory | `ft_memchr.c` |
| 07 | `ft_memcmp` | Compares memory areas | `ft_memcmp.c` |
| 08 | `ft_strlen` | Returns string length | `ft_strlen.c` |
| 09 | `ft_strlcpy` | Safe string copy with size | `ft_strlcpy.c` |
| 10 | `ft_strlcat` | Safe string concatenation | `ft_strlcat.c` |
| 11 | `ft_strchr` | Locates character in string | `ft_strchr.c` |
| 12 | `ft_strrchr` | Locates last occurrence | `ft_strrchr.c` |
| 13 | `ft_strnstr` | Locates substring (like `strstr`) | `ft_strnstr.c` |
| 14 | `ft_strncmp` | Compares n bytes of strings | `ft_strncmp.c` |
| 15 | `ft_atoi` | Converts string to integer | `ft_atoi.c` |
| 16 | `ft_isalpha` | Checks for alphabetic character | `ft_isalpha.c` |
| 17 | `ft_isdigit` | Checks for digit | `ft_isdigit.c` |
| 18 | `ft_isalnum` | Checks for alphanumeric | `ft_isalnum.c` |
| 19 | `ft_isascii` | Checks for ASCII | `ft_isascii.c` |
| 20 | `ft_isprint` | Checks for printable | `ft_isprint.c` |
| 21 | `ft_toupper` | Converts to uppercase | `ft_toupper.c` |
| 22 | `ft_tolower` | Converts to lowercase | `ft_tolower.c` |
| 23 | `ft_calloc` | Allocates and zeros memory | `ft_calloc.c` |
| 24 | `ft_strdup` | Duplicates a string | `ft_strdup.c` |

### Part 2 - Additional Functions

| # | Function | Description | File |
|---|--------|-------------|------|
| 25 | `ft_substr` | Extracts substring | `ft_substr.c` |
| 26 | `ft_strjoin` | Concatenates two strings | `ft_strjoin.c` |
| 27 | `ft_strtrim` | Trims characters from string | `ft_strtrim.c` |
| 28 | `ft_split` | Splits string by delimiter | `ft_split.c` |
| 29 | `ft_itoa` | Converts integer to string | `ft_itoa.c` |
| 30 | `ft_strmapi` | Applies function to each char | `ft_strmapi.c` |
| 31 | `ft_striteri` | Applies function to each char with index | `ft_striteri.c` |
| 32 | `ft_putchar_fd` | Outputs char to fd | `ft_putchar_fd.c` |
| 33 | `ft_putstr_fd` | Outputs string to fd | `ft_putstr_fd.c` |
| 34 | `ft_putendl_fd` | Outputs string + newline | `ft_putendl_fd.c` |
| 35 | `ft_putnbr_fd` | Outputs number to fd | `ft_putnbr_fd.c` |

### Bonus Part 

| # | Function | Description | File |
|---|--------|-------------|------|
| B1 | `ft_lstnew` | Creates new list element | `ft_lstnew.c` |
| B2 | `ft_lstadd_front` | Adds element to front | `ft_lstadd_front.c` |
| B3 | `ft_lstsize` | Returns list size | `ft_lstsize.c` |
| B4 | `ft_lstlast` | Returns last element | `ft_lstlast.c` |
| B5 | `ft_lstadd_back` | Adds element to back | `ft_lstadd_back.c` |
| B6 | `ft_lstdelone` | Deletes single element | `ft_lstdelone.c` |
| B7 | `ft_lstclear` | Deletes entire list | `ft_lstclear.c` |
| B8 | `ft_lstiter` | Applies function to each element | `ft_lstiter.c` |
| B9 | `ft_lstmap` | Maps function over list | `ft_lstmap.c` |

> ⚠️ **Warning** Bonus functions **must** be in separate files with the suffix `_bonus.c`  
> They are **declared in `libft.h`** (no separate `_bonus.h` file)
---

## 📋 Project Status

| Part         | Status     | Completed | Submitted | Validation |
|--------------|------------|-----------|-----------|------------|
| Mandatory    | Completed  | Yes       | Yes       | 100%       |
| Bonus        | Completed  | Yes       | Yes       | 125%       |

---

## 🔧 Compilation Instructions

Compilation is **mandatory with `Makefile`**:

```bash
make        # Compiles mandatory + additional → libft.a
make bonus  # Adds bonus functions (linked lists) to libft.a
make clean  # Removes .o files
make fclean # Removes .o + libft.a
make re     # Rebuilds everything (without bonus)
```

---

## 🧪 Testing Tips

    - Use main.c testers
    - Test edge cases: NULL, empty strings, INT_MAX/MIN
    - Use valgrind: `valgrind --leak-check=full ./your_test`
    - Compare output with original libc functions
    - Bonus: test list chaining, deletion, and iteration

---

## 📐 Style Guidelines

    - Max 25 lines per function
    - Max 5 variables per function
    - Max 4 parameters per function
    - Use tabs for indentation
    - No global variables
    - One instruction per line
    - Function names in snake_case: ft_xxx
    - Clear error handling (return NULL on malloc fail)

---

## 📌 Recommendations

    - Test each function immediately after writing
    - Read man pages for original functions
    - Bonus list functions must be in separate .c files
    - Peer review your code — Norminette is strict!

---

## 📜 License

This project is part of the 42 curriculum and is submitted for evaluation. Code may be reused for educational purposes or as reference within the 42 network.

---

## 🙋 Author

Developed during the 42 Common Core as a foundational C library project.

---

## 📧 Contact

rmarin-n@student.42barcelona.com
