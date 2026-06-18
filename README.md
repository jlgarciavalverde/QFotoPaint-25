# QFotoPaint 25

Editor de fotografía de escritorio desarrollado en C++ con el framework Qt. Permite abrir, editar y guardar imágenes aplicando una variedad de filtros y ajustes, así como capturar vídeo desde cámara.

## Tecnologías

![C++](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus)
![Qt](https://img.shields.io/badge/Qt-6.x-41CD52?logo=qt)
![CMake](https://img.shields.io/badge/Build-qmake-064F8C)

## Características

### Ajustes de imagen
- **Brillo y contraste** — ajuste lineal de niveles
- **Ajuste lineal** — corrección de histograma por puntos de control
- **Bajorrelieve** — efecto de relieve en escala de grises

### Herramientas
- **Captura de vídeo** — grabación desde cámara conectada
- **Nueva imagen** — creación de lienzo desde cero con dimensiones personalizadas
- **Diálogo "Acerca de"** — información de la aplicación

### Gestión de archivos
- Apertura y guardado de imágenes en formatos estándar (PNG, JPG, BMP)
- Historial de cambios

## Estructura del proyecto

```
QFotoPaint6/
├── main.cpp
├── imagenes.cpp / .h      # Clase principal de gestión de imagen
├── acercade.cpp / .h      # Diálogo "Acerca de"
├── ajustelineal.cpp / .h  # Filtro de ajuste lineal
├── bajorrelieve.cpp / .h  # Filtro de bajorrelieve
├── brillocontraste.cpp/.h # Filtro de brillo y contraste
├── capturarvideo.cpp / .h # Módulo de captura de vídeo
├── dialognueva.cpp / .h   # Diálogo nueva imagen
└── *.ui                   # Ficheros de interfaz Qt Designer
```

## Requisitos

- Qt 6.x (o Qt 5.15 LTS)
- Compilador C++17 (GCC, Clang o MSVC)
- CMake 3.16+ o qmake
- Qt Multimedia (para captura de vídeo)

## Compilación y ejecución

### Con Qt Creator (recomendado)
1. Abrir el fichero `.pro` con Qt Creator
2. Configurar el kit de compilación
3. Pulsar **Build & Run** (`Ctrl+R`)

### Desde línea de comandos

```bash
cd QFotoPaint-25-main/QFotoPaint6

# Con qmake
qmake QFotoPaint6.pro
make

# Ejecutar
./QFotoPaint6
```

## Autores

Proyecto académico — **Universidad de Murcia**.

- José Luis García Valverde
