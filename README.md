# C-List

A simple C project to practice fundamental programming concepts by implementing a dynamic list data structure. C-List explores linked list operations, pointer manipulation, and memory management, serving as a learning exercise to master C programming. This project demonstrates core C skills applicable to low-level systems and graphics programming.

## Features

- **Linked List Implementation**: Implements a singly linked list with basic operations (e.g., add, remove, traverse) using C pointers and structs.
- **Memory Management**: Practices dynamic memory allocation (`malloc`, `free`) to manage list nodes efficiently.
- **Portable C Code**: Written in standard C (C99), compatible with multiple compilers and platforms.
- **Learning Focus**: Emphasizes foundational C concepts like pointers, memory safety, and data structure design.

## Technologies

- **Language**: C (C99)
- **Tools**: GCC, Visual Studio 2022
- **Build System**: Simple make or direct compilation

## Setup Instructions

To build and run C-List:

1. **Install Prerequisites**:
   - A C compiler like [GCC](https://gcc.gnu.org/) (available via MinGW on Windows, or native on Linux/macOS).
   - Alternatively, use Visual Studio 2022 with C/C++ workload.

2. **Clone the Repository**:
   ```bash
   git clone https://github.com/ThomasDHZ/C-List.git
   cd C-List
   ```

3. **Build the Project**:
   - Using GCC:
     ```bash
     gcc -std=c99 main.c list.c -o CList
     ```
   - Using Visual Studio:
     - Open `CList.sln` (or create one if not present).
     - Set configuration to `Release|x64` or `Debug|x64`.
     - Build the solution to generate `CList.exe`.

4. **Run the Project**:
   - Execute the binary:
     ```bash
     ./CList
     ```
   - Tests basic list operations (e.g., adding/removing nodes).

## Usage Example

A sample C program using the `List` data structure:

```c
#include "list.h"
#include <stdio.h>

int main() {
    List* list = list_create();
    
    // Add elements
    list_append(list, 10);
    list_append(list, 20);
    list_append(list, 30);
    
    // Print list
    printf("List contents: ");
    for (Node* node = list->head; node != NULL; node = node->next) {
        printf("%d ", node->data);
    }
    printf("\n");
    
    // Clean up
    list_destroy(list);
    return 0;
}
```

**Output**:
```
List contents: 10 20 30
```

## Contributing

Contributions are welcome! Fork the repository, create a feature branch, and submit a pull request. For major changes, open an issue to discuss ideas.

## License

[MIT License](LICENSE) - free to use and modify for personal or commercial projects.
