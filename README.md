# Slope project template

A [slope](https://github.com/baptiste-genest/slope) presentation built from a deck.
Compose your slides in `slides/deck.yaml`.
Define complicated animations in C++ `slides.cpp`.
Live-editable values and functions in Lua `slides/snippets.yaml`.
Latex preamble 'slides/packages.tex'.

Edit hot-reloaded files in the app by pressing E.

See the [documentation](https://slopedoc.github.io/) for the
[deck format](https://slopedoc.github.io/deck/deck_format/) and
the [dependencies](https://slopedoc.github.io/cmake/).

## Build and run

```
mkdir build && cd build
cmake ..
make -j
./slope_project --project_path ..
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
