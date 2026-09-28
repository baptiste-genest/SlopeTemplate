# Slope project template

A [slope](https://github.com/baptiste-genest/slope) presentation built from a deck.
Compose your slides in `slides/deck.yaml`.
Define complicated animations in C++ `slides.cpp`.
Live-editable values and functions in Lua `slides/snippets.lua`.
Latex preamble 'slides/packages.tex'.

Edit hot-reloaded files in the app by pressing E.

See the [documentation](https://slopedoc.github.io/) for the
[deck format](https://slopedoc.github.io/deck/deck_format/) and
the [dependencies](https://slopedoc.github.io/cmake/).

## Install dependencies
```
sudo apt-get update
sudo apt-get install -y build-essential cmake git xorg-dev libglu1-mesa-dev libgl1-mesa-dev libegl-dev libgl1-mesa-dri imagemagick texlive-latex-base texlive-latex-extra texlive-latex-recommended texlive-fonts-recommended ffmpeg
```

## Build and run

```
mkdir build && cd build
cmake ..
make -j
./slope_project --project_path ../slides
```

## Files

| File | Role |
| --- | --- |
| `CMakeLists.txt`, `cmake/slope.cmake` | fetch slope and build the executable |
| `slides.cpp` | loads the deck and registers C++ objects |
| `slides/deck.yaml` | the slides, hot-reloaded |
| `slides/packages.tex` | latex packages and macros, hot-reloaded |
| `slides/snippets.lua` | Lua values the deck animates with, hot-reloaded |
| `slides/views/*.pos` | label positions, dragged and saved from the running show |
