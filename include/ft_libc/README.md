# ft_libc

`ft_libc` is a custom C library combining the functionality of three major projects: [libft](https://github.com/Dexter88xD/libft), [ft_printf](https://github.com/Dexter88xD/ft_printf), and [get_next_line](https://github.com/Dexter88xD/get_next_line). It offers a comprehensive set of utility functions, a flexible output formatting library, and an efficient file-reading tool. All functionality is managed through a single `Makefile`, making it easy to compile and integrate into your projects.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [File Structure](#file-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

The `ft_libc` library provides a robust suite of tools for developers working in C. With its unified structure, this repository integrates essential utility functions [libft](https://github.com/Dexter88xD/libft), advanced string formatting capabilities ([ft_printf](https://github.com/Dexter88xD/ft_printf)), and efficient line-reading tools ([get_next_line](https://github.com/Dexter88xD/get_next_line)). This repository simplifies the process of working with C projects, consolidating everything under one roof with a single `Makefile`.

---

## Features

### **1. Utility Functions ([libft](https://github.com/Dexter88xD/libft))**
- **String Manipulation**: Functions for string conversion, searching, trimming, and joining.
- **Memory Management**: Allocate, move, and manipulate memory blocks.
- **Linked List Operations**: Manage linked lists with ease.
- **File I/O**: Write formatted output to files.
- **Character Handling**: Check and manipulate character properties.

### **2. Advanced Output Formatting ([ft_printf](https://github.com/Dexter88xD/ft_printf))**
- custom implementation of the standard `printf`.
- Supports formatting for strings, integers, characters, pointers, and more.

### **3. Line Reading ([get_next_line](https://github.com/Dexter88xD/get_next_line))**
- Efficiently read lines from a file descriptor.
- Supports both single and multiple file descriptors (in the bonus section of gnl).

---

## File Structure

```
  └── Dexter88xD-libft/
      ├── ft_printf/
      ├── get_next_line/
      ├── README.md
      ├── LICENSE
      ├── Makefile
      ├── ft_atoi.c
      ├── ft_bzero.c
      ├── ft_calloc.c
      ├── ft_isalnum.c
      ├── ft_isalpha.c
      ├── ft_isascii.c
      ├── ft_isdigit.c
      ├── ft_isprint.c
      ├── ft_itoa.c
      ├── ft_lstadd_back_bonus.c
      ├── ft_lstadd_front_bonus.c
      ├── ft_lstclear_bonus.c
      ├── ft_lstdelone_bonus.c
      ├── ft_lstiter_bonus.c
      ├── ft_lstlast_bonus.c
      ├── ft_lstmap_bonus.c
      ├── ft_lstnew_bonus.c
      ├── ft_lstsize_bonus.c
      ├── ft_memchr.c
      ├── ft_memcmp.c
      ├── ft_memcpy.c
      ├── ft_memmove.c
      ├── ft_memset.c
      ├── ft_putchar_fd.c
      ├── ft_putendl_fd.c
      ├── ft_putnbr_fd.c
      ├── ft_putstr_fd.c
      ├── ft_split.c
      ├── ft_strchr.c
      ├── ft_strdup.c
      ├── ft_striteri.c
      ├── ft_strjoin.c
      ├── ft_strlcat.c
      ├── ft_strlcpy.c
      ├── ft_strlen.c
      ├── ft_strmapi.c
      ├── ft_strncmp.c
      ├── ft_strnstr.c
      ├── ft_strrchr.c
      ├── ft_strtrim.c
      ├── ft_substr.c
      ├── ft_tolower.c
      ├── ft_toupper.c
      └── libft.h
```

---

## Installation

### **Step 1: Clone the Repository**
```bash
  git clone https://github.com/Dexter88xD/ft_libc.git
  cd ft_libc
```

### **Step 2: Build the Library**
Use the unified `Makefile`:
- Build all [libft](https://github.com/Dexter88xD/libft) components:
  ```bash
    make
  ```
- Build [libft](https://github.com/Dexter88xD/libft) components with bonuses:
  ```bash
    make bonus
  ```
- Build only [ft_printf](https://github.com/Dexter88xD/ft_printf):
  ```bash
    make printf
  ```
- Build only [get_next_line](https://github.com/Dexter88xD/get_next_line):
  ```bash
    make gnl
  ```
- Build all components:
  ```bash
    make files
  ```
---

## Usage

Here’s an example showcasing the combined functionality:

```c
  #include "libft.h"
  #include <stdio.h>
  
  int main(void)
  {
      char *line;
      
      // Using ft_printf
      ft_printf("Welcome to Dexter88xD-libft!\n");
      
      // Using ft_strlen
      char *str = "Hello, Libft!";
      ft_printf("String length: %d\n", ft_strlen(str));
      
      // Using get_next_line
      int fd = open("example.txt", O_RDONLY);
      if (fd >= 0 && get_next_line(fd, &line) > 0)
      {
          ft_printf("Read line: %s\n", line);
          free(line);
          close(fd);
      }
      
      return 0;
  }
```

---

## Contributing

Feel free to contribute by:
- Reporting bugs or suggesting enhancements through issues.
- Submitting pull requests with fixes or new features.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
