# C++ CMake Project

This project is a C++ application that demonstrates the use of CMake for managing a multi-module project with nested CMakeLists.txt files. The project includes core functionalities and mathematical operations, structured in a way that allows for easy expansion and testing.

This structure creates the following dependency graph:

- `app` depends on both `core` and `math`
- `math` depends on `core`
- `core_tests` depends on `core`
- `math_tests` depends on `math` (and transitively on `core`)

## Project Structure

```md
cpp-cmake-project
├── CMakeLists.txt
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── core
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── core
│   │   │       ├── logger.hpp
│   │   │       └── utils.hpp
│   │   └── src
│   │       ├── logger.cpp
│   │       └── utils.cpp
│   ├── math
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── math
│   │   │       ├── matrix.hpp
│   │   │       └── vector.hpp
│   │   └── src
│   │       ├── matrix.cpp
│   │       └── vector.cpp
│   └── main.cpp
└── tests
    ├── CMakeLists.txt
    ├── core_tests.cpp
    └── math_tests.cpp
```

## Building the Project

To build the project, follow these steps:

1. Clone the repository or download the project files.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:

   ```bash
   mkdir build
   cd build
   ```

4. Run CMake to configure the project:

   ```bash
   cmake ..
   ```

5. Build the project:

   ```bash
   make
   ```

## Running the Application

After building the project, you can run the application using the following command:

```bash
./src/main
```

## Running Tests

To run the tests, you can use the following command after building the project:

```bash
make test
```

This will execute the unit tests defined in the `tests` directory.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
