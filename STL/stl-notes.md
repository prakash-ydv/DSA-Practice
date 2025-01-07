# C++ Standard Template Library (STL)

The **Standard Template Library (STL)** in C++ is a collection of template-based classes and functions designed for efficient data handling and algorithmic operations.

---

## Components of STL

### 1. **Containers**
Containers are data structures that store collections of data.

#### Types of Containers:

- **Sequence Containers**: Store data sequentially (linear).
  - `vector`
  - `deque`
  - `list`

- **Associative Containers**: Store data in a sorted or key-value format.
  - `set`
  - `map`
  - `multiset`
  - `multimap`

- **Unordered Containers**: Use hash tables for fast lookup.
  - `unordered_set`
  - `unordered_map`
  - `unordered_multiset`
  - `unordered_multimap`

---

### 2. **Algorithms**
STL provides a set of template functions for operations like searching, sorting, and modifying data.

#### Common Algorithms:

- **Sorting**: `std::sort`
- **Searching**: `std::find`, `std::binary_search`
- **Reversing**: `std::reverse`
- **Accumulation**: `std::accumulate`
- **Permutations**: `std::next_permutation`

---

### 3. **Iterators**
Iterators provide a way to access and traverse container elements, similar to pointers.

#### Types of Iterators:

- **Input Iterator**: Read-only access to data.
- **Output Iterator**: Write-only access to data.
- **Forward Iterator**: Sequential access in the forward direction.
- **Bidirectional Iterator**: Access in both forward and backward directions.
- **Random Access Iterator**: Direct access to any element in constant time.

---

## Advantages of STL

1. **Reusable and Efficient**: Reduces development time with ready-made implementations.
2. **Type Safety**: Uses templates for compile-time type checking.
3. **Flexibility**: Works with custom data types using templates.
4. **Interoperability**: Iterators allow easy integration of algorithms with containers.

---

## Example: Sorting a Vector

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For sort

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 3};

    // Sorting the vector
    std::sort(vec.begin(), vec.end());

    // Printing the sorted vector
    for (int i : vec) {
        std::cout << i << " ";
    }
    return 0;
}
```

### Output:
```
1 2 3 5 8
```

---

## Quick Reference

### Common Containers:
| Container       | Description                                |
|-----------------|--------------------------------------------|
| `vector`        | Dynamic array                             |
| `deque`         | Double-ended queue                        |
| `list`          | Doubly linked list                        |
| `set`           | Sorted, unique elements                   |
| `map`           | Key-value pairs, sorted by key            |
| `unordered_map` | Key-value pairs, hashed for fast access   |

### Common Algorithms:
| Algorithm               | Description                       |
|-------------------------|-----------------------------------|
| `std::sort`             | Sorts a range of elements         |
| `std::find`             | Finds an element in a range       |
| `std::binary_search`    | Performs binary search            |
| `std::reverse`          | Reverses a range of elements      |
| `std::accumulate`       | Sums up elements in a range       |

---
