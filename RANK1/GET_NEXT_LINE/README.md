<p align="right">
  <a href="es.README.md">
    <img src="https://img.shields.io/badge/Spanish-README-blue?style=for-the-badge" alt="Spanish README" />
  </a>
</p>

# 💻 Project get_next_line

## 🧾 Description
This repository contains the implementation of **get_next_line**, a 42 project that reads a line from a file descriptor, even if the file is large or read in small chunks.
Includes **bonus**: support for **multiple file descriptors** using a static array or linked list.

---
## 🎯 Project Objectives
- Read from a file descriptor line by line
- Return one line at a time, ending with `\n`
- Use only one `static` variable
- Handle `BUFFER_SIZE` (compiles with `-D BUFFER_SIZE=n`)
- **Bonus**: manage multiple FDs without losing the reading position

---
## 📁 Exercise Table

### Mandatory Part
| Function        | Description                                      | Files                                 |
|-----------------|--------------------------------------------------|---------------------------------------|
| `get_next_line` | Returns one line from a file descriptor          | `get_next_line.c`<br>`get_next_line_utils.c` |

### Bonus Part
| Function        | Description                                      | Files                                          |
|-----------------|--------------------------------------------------|------------------------------------------------|
| `get_next_line` | Handles **multiple file descriptors** at once<br>(uses a **single static array**) | `get_next_line_bonus.c`<br>`get_next_line_utils_bonus.c` |

> ⚠️ **Warning** Bonus functions **must** be in separate files with the suffix `_bonus.c`  
> They are **declared in `_bonus.h` file**

---
## Project Status
| Part      | Status     | Completed | Submitted | Validation |
|-----------|------------|-----------|-----------|------------|
| Mandatory | Completed  | Yes       | Yes       | 100%       |
| Bonus     | Completed  | Yes       | Yes       | 125%       |

---
## 🧪 Testing Tips
    - Use gnl-tester and custom mains
    - Test with: empty files, no newline, read(0), large files
    - Test bonus: open 10+ FDs and alternate reads
    - Use valgrind: valgrind --leak-check=full ./test
    - Check for memory leaks and double free

---
## 📐 Style Guidelines
    - One static variable only
    - Max 25 lines per function
    - Max 4 parameters per function
    - Max 5 variables per function
    - Use tabs for indentation
    - No global variables
    - Free all mallocs

---
## 📌 Recommendations
    - Use static char *buffer[FD_MAX] for bonus
    - Or use a linked list (more advanced)
    - Handle read errors and EOF
    - Test with BUFFER_SIZE = 1, 9999, 0 (invalid)
    - Never use lseek()

---
## 📜 License
This project is part of the 42 curriculum and is submitted for evaluation. Code may be reused for educational purposes.

---
## 🙋 Author
Developed during the **42 Common Core** as a file reading challenge.

---
## 📧 Contact
rmarin-n@student.42barcelona.com
