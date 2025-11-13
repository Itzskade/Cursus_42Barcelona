<p align="right">
  <a href="README.md">
    <img src="https://img.shields.io/badge/Inglés-README-blue?style=for-the-badge" alt="English README" />
  </a>
</p>

# 💻 Proyecto ft_printf

## 🧾 Descripción
Este repositorio contiene la implementación de **ft_printf**, un proyecto del *Common Core* de 42 que consiste en recrear una versión simplificada de la función estándar `printf` desde cero.
El objetivo es dominar funciones variádicas, análisis de formatos y manejo seguro de tipos usando únicamente `write`, `malloc` y `free`.

---
## 🎯 Objetivos del proyecto

- Implementar una función variádica con `<stdarg.h>`
- Analizar cadenas de formato y gestionar `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` y `%%`
- Manejar banderas: `-`, `0`, `.`, `*`, ancho y precisión
- Gestionar casos límite: cadenas NULL, números negativos, valores grandes
- Cumplir estrictamente con **Norminette** y las normas de 42

---
## 📁 Tabla de ejercicios

### Conversiones Obligatorias
| Especificador | Descripción                     | Estado      |
|---------------|----------------------------------|-------------|
| `%c`          | Carácter                         | Completado  |
| `%s`          | Cadena                           | Completado  |
| `%p`          | Dirección de puntero             | Completado  |
| `%d` / `%i`   | Decimal con signo                | Completado  |
| `%u`          | Decimal sin signo                | Completado  |
| `%x`          | Hexadecimal (minúsculas)         | Completado  |
| `%X`          | Hexadecimal (mayúsculas)         | Completado  |
| `%%`          | Signo de porcentaje              | Completado  |

---
## 📋 Estado del proyecto

| Parte     | Estado       | Completado | Entregado | Validación |
|-----------|--------------|------------|-----------|------------|
| ft_printf | Completado   | Sí         | Sí        | 100%       |
| Bonus     | No iniciado  | No         | No        | 0%         |

---
## 🧪 Consejos de pruebas

    - Usa testers de Printf y mains personalizados
    - Prueba casos límite
    - Usa valgrind: `valgrind --leak-check=full ./test`
    - Compara salida y valor de retorno con el `printf` real

---
## 📐 Normas de estilo

    - Máximo 25 líneas por función
    - Máximo 4 parámetros por función
    - Máximo 5 variables por función
    - Indentación con tabuladores
    - Sin variables globales
    - Una instrucción por línea

---
## 📌 Recommendaciones

    - Comienza con `%c` y `%s`
    - Implementa una conversión a la vez
    - Prueba inmediatamente tras cada funcionalidad
    - Usa `va_arg`, `va_start`, `va_end` correctamente

---
## 📜 Licencia

Este proyecto forma parte del currículo de 42 y se entrega para evaluación. El código puede reutilizarse con fines educativos.

---
## 🙋 Autor

Desarrollado durante el **42 Common Core** como desafío de funciones variádicas.

---
## 📧 Contacto

rmarin-n@student.42barcelona.com
