<p align="right">
  <a href="README.md">
    <img src="https://img.shields.io/badge/Inglés-README-blue?style=for-the-badge" alt="English README" />
  </a>
</p>

# 💻 Proyecto get_next_line

## 🧾 Descripción
Este repositorio contiene la implementación de **get_next_line**, un proyecto de 42 que permite leer una línea de un descriptor de archivo, incluso si el archivo es muy grande o se lee en fragmentos pequeños.
Incluye **bonus**: soporte para **múltiples descriptores de archivo** usando un array estático o lista enlazada.

---
## 🎯 Objetivos del proyecto
- Leer de un descriptor de archivo línea por línea
- Devolver una línea a la vez, terminada en `\n`
- Usar **solo una variable `static`**
- Gestionar `BUFFER_SIZE` (compila con `-D BUFFER_SIZE=n`)
- **Bonus**: gestionar múltiples FDs sin perder la posición de lectura

---
## 📁 Tabla de ejercicios

### Parte obligatoria
| Función         | Descripción                                      | Archivos                              |
|-----------------|--------------------------------------------------|---------------------------------------|
| `get_next_line` | Devuelve una línea de un descriptor de archivo   | `get_next_line.c`<br>`get_next_line_utils.c` |

### Parte bonus
| Función         | Descripción                                      | Archivos                                          |
|-----------------|--------------------------------------------------|---------------------------------------------------|
| `get_next_line` | Gestiona **múltiples descriptores** a la vez<br>(usa un **único array estático**) | `get_next_line_bonus.c`<br>`get_next_line_utils_bonus.c` |

> ⚠️ **Atención** Las funciones bonus **deben** estar en archivos separados con el sufijo `_bonus.c`  
> Se **declaran en un archivo `_bonus.h`**

---
## 📋 Estado del proyecto
| Parte     | Estado     | Completado | Entregado | Validación |
|-----------|------------|------------|-----------|------------|
| Obligatoria | Completado | Sí         | Sí        | 100%       |
| Bonus     | Completado | Sí         | Sí        | 125%       |

---
## 🧪 Consejos de pruebas
    - Usa gnl-tester y mains personalizados
    - Prueba con: archivos vacíos, sin salto de línea, read(0), archivos grandes
    - Prueba bonus: abre 10+ FDs y alterna lecturas
    - Usa valgrind: valgrind --leak-check=full ./test
    - Verifica fugas de memoria y double free

---
## 📐 Normas de estilo
    - Solo una variable static
    - Máximo 25 líneas por función
    - Máximo 4 parámetros por función
    - Máximo 5 variables por función
    - Indentación con tabuladores
    - Sin variables globales
    - Liberar todos los malloc

---
## 📌 Recomendaciones
    - Usa static char *buffer[FD_MAX] para el bonus
    - O usa una lista enlazada (más avanzado)
    - Gestiona errores de read y EOF
    - Prueba con BUFFER_SIZE = 1, 9999, 0 (inválido)
    - Nunca uses lseek()

---
## 📜 Licencia
Este proyecto forma parte del currículo de 42 y se entrega para evaluación. El código puede reutilizarse con fines educativos.

---
## 🙋 Autor
Desarrollado durante el **42 Common Core** como desafío de lectura de archivos.

---
## 📧 Contacto
rmarin-n@student.42barcelona.com
