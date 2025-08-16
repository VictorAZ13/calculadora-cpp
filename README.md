# Calculadora en C++

Este proyecto es una **calculadora modular en C++**, creada como parte de la Fase 1 (Módulo 0) del plan de estudio.

## 📌 Funcionalidades
- Suma de dos números.
- Resta de dos números.
- Multiplicación de dos números.
- División con validación de división por cero.
- Verificación de paridad (número par/impar).
- Menú interactivo en consola.

## 📂 Estructura del proyecto
Calculadora/
│── include/ # Archivos de cabecera (.h)
│ ├── sumar.h
│ ├── restar.h
│ ├── multiplicar.h
│ ├── dividir.h
│ ├── espar.h
│ └── menu.h
│
│── src/ # Código fuente (.cpp)
│ ├── main.cpp
│ ├── funciones/
│ │ ├── sumar.cpp
│ │ ├── restar.cpp
│ │ ├── multiplicar.cpp
│ │ ├── dividir.cpp
│ │ └── espar.cpp
│ └── menu/
│ └── menu.cpp
│
│── build/ # Ejecutables compilados
│── .vscode/ # Configuración de tareas (tasks.json)
└── README.md


## ⚙️ Compilación y ejecución

El proyecto usa **MSYS2 (g++)** dentro de VS Code.

1. Compilar con:
   ```bash
   C:\msys64\usr\bin\bash.exe -c "g++ -I Calculadora/include -I Calculadora/include/menu Calculadora/src/*.cpp Calculadora/src/funciones/*.cpp Calculadora/src/menu/*.cpp -o Calculadora/build/programa.exe"

   Calculadora/build/programa.exe
🔧 Requisitos

MSYS2

g++ (instalado con pacman -S mingw-w64-x86_64-gcc)

Visual Studio Code con extensión C/C++

🚀 Uso

Al iniciar, el programa muestra un menú con las operaciones disponibles.

El usuario ingresa su opción y luego los números.

El resultado se muestra en pantalla.

Para salir, seleccionar la opción 0.

📝 Bitácora de commits

feat: loop + break fuera del switch

feat: funciones modularizadas

feat: tareas de compilación con tasks.json

fix: validación división por cero

chore: documentación inicial
