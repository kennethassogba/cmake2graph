# cmake2graph

A tool to visualize CMake target dependencies as a directed graph.

## Installation

```bash
pip install cmake2graph
```

To install the package locally for development:

```bash
cd cmake2graph
pip install -e .
```

## Usage

```bash
cmake2graph /path/to/cpp-cmake-project
cmake2graph /path/to/cpp-cmake-project --exclude-external --output graph.png --target my_target --depth 2
```

## Features

- Parse CMake files recursively
- Generate dependency graphs
- Filter by specific targets
- Control dependency depth
- Exclude external libraries (not working yet)
- Export to various image formats
