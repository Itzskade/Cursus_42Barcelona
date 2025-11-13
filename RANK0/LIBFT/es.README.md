<p align="right">
  <a href="README.md">
    <img src="https://img.shields.io/badge/English-README-blue?style=for-the-badge" alt="English README" />
  </a>
</p>

# 📚 Libft – Tu primera librería en C

## 🧾 Descripción

Libft es el primer proyecto de programación en C del cursus de 42. 

El objetivo es crear una librería personalizada que reimplementa funciones estándar de la libc, junto con funciones adicionales útiles para la manipulación de cadenas, memoria y listas enlazadas.

Esta librería será una herramienta fundamental para futuros proyectos, y debe cumplir con estrictos requisitos de estilo, funcionalidad y gestión de memoria.

---

## 📁 Archivos a entregar

- Makefile  
- libft.h  
- *.c (funciones obligatorias y bonus)  

Todos los archivos deben estar en la raíz del repositorio.

---

## ⚙️ Compilación

El proyecto debe compilarse con las siguientes flags:
```
-Wall -Werror -Wextra
```
La librería se genera con el comando `ar`, y el Makefile debe contener al menos las siguientes reglas:

- `all`  
- `clean`  
- `fclean`  
- `re`  
- `bonus`  

El Makefile no debe hacer relink innecesario.

## 🧩 Parte obligatoria

### 📦 Nombre del archivo generado

`libft.a`

---

### Funciones a implementar (Parte 1 – libc)

| Función       | Descripción breve                           |
|---------------|--------------------------------------------|
| ft_isalpha    | Verifica si un carácter es alfabético      |
| ft_isdigit    | Verifica si un carácter es un dígito       |
| ft_isalnum    | Verifica si es alfanumérico                |
| ft_isascii    | Verifica si es ASCII                        |
| ft_isprint    | Verifica si es imprimible                  |
| ft_strlen     | Calcula la longitud de una cadena          |
| ft_memset     | Rellena un bloque de memoria               |
| ft_bzero      | Pone a cero un bloque de memoria           |
| ft_memcpy     | Copia memoria                               |
| ft_memmove    | Copia memoria con manejo de solapamiento   |
| ft_strlcpy    | Copia cadenas con tamaño limitado          |
| ft_strlcat    | Concatena cadenas con tamaño limitado     |
| ft_toupper    | Convierte a mayúscula                       |
| ft_tolower    | Convierte a minúscula                       |
| ft_strchr     | Busca un carácter en una cadena            |
| ft_strrchr    | Busca un carácter desde el final           |
| ft_strncmp    | Compara cadenas                             |
| ft_memchr     | Busca en memoria                            |
| ft_memcmp     | Compara bloques de memoria                  |
| ft_strnstr    | Busca una subcadena                         |
| ft_atoi       | Convierte string a entero                   |
| ft_calloc     | Reserva memoria inicializada a cero         |
| ft_strdup     | Duplica una cadena                           |

---

### Funciones adicionales (Parte 2)

| Función         | Descripción breve                             |
|-----------------|----------------------------------------------|
| ft_substr       | Extrae una subcadena                         |
| ft_strjoin      | Une dos cadenas                               |
| ft_strtrim      | Recorta caracteres de una cadena             |
| ft_split        | Divide una cadena por delimitador            |
| ft_itoa         | Convierte entero a string                     |
| ft_strmapi      | Aplica función a cada carácter (con índice)  |
| ft_striteri     | Aplica función a cada carácter (modificable) |
| ft_putchar_fd   | Escribe un carácter en un file descriptor    |
| ft_putstr_fd    | Escribe una cadena en un file descriptor     |
| ft_putendl_fd   | Escribe una cadena con salto de línea        |
| ft_putnbr_fd    | Escribe un número en un file descriptor      |

---

## Parte bonus

Si completas la parte obligatoria perfectamente, puedes implementar funciones para manipular listas enlazadas.

### Funciones bonus

| Función         | Descripción breve                                         |
|-----------------|----------------------------------------------------------|
| ft_lstnew       | Crea un nuevo nodo                                       |
| ft_lstadd_front | Añade un nodo al principio de la lista                   |
| ft_lstsize      | Cuenta el número de nodos                                 |
| ft_lstlast      | Devuelve el último nodo                                   |
| ft_lstadd_back  | Añade un nodo al final de la lista                        |
| ft_lstdelone    | Elimina un nodo usando una función del                   |
| ft_lstclear     | Elimina todos los nodos de una lista                      |
| ft_lstiter      | Aplica una función a cada nodo                             |
| ft_lstmap       | Crea una nueva lista aplicando una función a cada nodo    |

> ⚠️ **Atención** Las funciones bonus **deben** estar en archivos separados con el sufijo `_bonus.c`  
> Se **declaran en `libft.h`** (no se permite un archivo `_bonus.h` separado)
---

## 📋 Estado del proyecto

| Parte         | Estado      | Completado | Entregado | Validación |
|---------------|-------------|------------|-----------|------------|
| Obligatoria   | Completado  | Sí         | Sí        | 100%       |
| Bonus         | Completado  | Sí         | Sí        | 125%       |

---

### 🧪 Gestión de memoria

    - No se permiten leaks de memoria.  
    - Toda memoria dinámica debe ser liberada adecuadamente.  
    - Comportamientos indefinidos como segfaults, double free o bus errors resultan en 0 en la evaluación.

---
## 📐 Pautas de estilo

    - Máximo 25 líneas por función
    - Máximo 4 parámetros por función
    - Máximo 5 variables por función
    - Indentación con tabuladores
    - Sin variables globales
    - Una instrucción por línea

---
### 📌 Recomendaciones

    - Crea programas de prueba para verificar el comportamiento de tus funciones.  
    - Verifica que todos los archivos estén correctamente nombrados y en la raíz del repositorio.

---

### 📦 Evaluación

    - Solo se evaluará el contenido del repositorio Git asignado.  
    - La parte bonus solo se evalúa si la parte obligatoria está perfecta.  
    - Deepthought puede evaluar tu trabajo después de la defensa.

---

### 🛠️ Ejemplo de uso del Makefile

```bash
make        # Compila la parte obligatoria + bonus
make bonus  # Añade solo los bonus a libft.a
make clean  # Elimina archivos .o
make fclean # Elimina archivos .o y libft.a
make re     # Limpia y recompila todo
```

---

## 🏁 Resultado final

Una librería libft.a que contiene tus propias implementaciones de funciones esenciales en C, para ser utilizada en futuros proyectos del cursus 42.

