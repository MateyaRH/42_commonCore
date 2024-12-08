# libft - 42 Common Core Project

Welcome to the **libft** directory, showcasing my implementation of essential C library functions as part of the 42 Common Core curriculum. This project demonstrates foundational programming concepts, memory manipulation, string handling, and data structure implementation.

---

## 📚 **About libft**

The **libft** project is a custom implementation of standard C library functions, as well as some additional utility functions (bonuses) that are essential for system programming, memory operations, and string manipulation.

The objective of this project was to solidify foundational programming skills by reimplementing standard library functions and creating a basic linked list utility library.

---

## 🛠️ **Implemented Functions**

The following is the complete list of implemented functions grouped by their category:

---

### 🔹 **Character Tests**

These functions verify properties of characters:

- `int ft_isalpha(int c);`
- `int ft_isdigit(int c);`
- `int ft_isalnum(int c);`
- `int ft_isascii(int c);`
- `int ft_isprint(int c);`
- `int ft_toupper(int c);`
- `int ft_tolower(int c);`

---

### 🔹 **String Manipulation**

String handling operations, including string copying, concatenation, and trimming:

- `size_t ft_strlen(const char *s);`
- `size_t ft_strlcpy(char *dst, const char *src, size_t size);`
- `size_t ft_strlcat(char *dst, const char *src, size_t size);`
- `char *ft_strchr(const char *s, int c);`
- `char *ft_strrchr(const char *s, int c);`
- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- `char *ft_strnstr(const char *s1, const char *s2, size_t n);`
- `char *ft_strdup(const char *s);`
- `char *ft_substr(char const *s, unsigned int start, size_t len);`
- `char *ft_strjoin(char const *s1, char const *s2);`
- `char *ft_strtrim(char const *s1, char const *set);`
- `char **ft_split(char const *s, char c);`
- `int ft_atoi(const char *nptr);`

---

### 🔹 **Memory Manipulation**

Memory handling and allocation:

- `void *ft_memset(void *str, int c, size_t n);`
- `void ft_bzero(void *s, size_t n);`
- `void *ft_memcpy(void *dest, const void *src, size_t n);`
- `void *ft_memmove(void *dest, const void *src, size_t n);`
- `void *ft_memchr(const void *s, int c, size_t n);`
- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- `void *ft_calloc(size_t count, size_t size);`

---

### 🔹 **Conversions**

Functions to convert between different data representations:

- `int ft_atoi(const char *nptr);`
- `char *ft_itoa(int n);`

---

### 🔹 **File Descriptors**

Functions for printing to file descriptors:

- `void ft_putchar_fd(char c, int fd);`
- `void ft_putstr_fd(char *s, int fd);`
- `void ft_putnbr_fd(int n, int fd);`
- `void ft_putendl_fd(char *s, int fd);`

---

### 🔹 **Linked List**

Implementation of a simple linked list library:

- `t_list *ft_lstnew(void *content);`
- `void ft_lstadd_front(t_list **lst, t_list *new);`
- `int ft_lstsize(t_list *lst);`
- `t_list *ft_lstlast(t_list *lst);`
- `void ft_lstadd_back(t_list **lst, t_list *new);`
- `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- `void ft_lstclear(t_list **lst, void (*del)(void *));`
- `void ft_lstiter(t_list *lst, void (*f)(void *));`
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

---

## 🚀 **Features**

- ✅ Implementation of mandatory standard library functions (`string`, `memory`, and `character` manipulation).
- ✨ Bonus utility functions and robust linked list utilities for versatile operations.
- 💡 Designed to adhere to strict coding standards and 42's project requirements.

