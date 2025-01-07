# Searching in a Vector

C++ provides efficient ways to search elements in a `vector` using the Standard Template Library (STL). Here are the most commonly used methods:

---

## **1. Linear Search**
You can perform a linear search using `std::find` from the `<algorithm>` header.

### **Syntax:**
```cpp
std::find(start_iterator, end_iterator, value);
```
- **`start_iterator`**: Beginning of the range.
- **`end_iterator`**: End of the range (exclusive).
- **`value`**: The element to search for.

- Returns an iterator to the first occurrence of the element or `end_iterator` if not found.

### **Example:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For std::find

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Searching for an element
    auto it = std::find(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        std::cout << "Element found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}
```

### **Output:**
```
Element found at index: 2
```

---

## **2. Binary Search**
For faster searching, you can use `std::binary_search` if the vector is **sorted**. It performs a binary search to check if an element exists.

### **Syntax:**
```cpp
std::binary_search(start_iterator, end_iterator, value);
```
- **Returns**: `true` if the element exists, otherwise `false`.

### **Example:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For sort and binary_search

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Sorting the vector (required for binary_search)
    std::sort(vec.begin(), vec.end());

    // Searching for an element
    if (std::binary_search(vec.begin(), vec.end(), 30)) {
        std::cout << "Element found" << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
```

### **Output:**
```
Element found
```

---

## **3. Lower Bound and Upper Bound**
For more control over searching, you can use `std::lower_bound` and `std::upper_bound`:

### **`std::lower_bound`**
- Finds the first position where the element is **not less than** the given value.

### **`std::upper_bound`**
- Finds the first position where the element is **greater than** the given value.

### **Syntax:**
```cpp
std::lower_bound(start_iterator, end_iterator, value);
std::upper_bound(start_iterator, end_iterator, value);
```

### **Example:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For lower_bound and upper_bound

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Sorting the vector (required for lower_bound/upper_bound)
    std::sort(vec.begin(), vec.end());

    // Using lower_bound
    auto lower = std::lower_bound(vec.begin(), vec.end(), 30);

    if (lower != vec.end()) {
        std::cout << "Lower bound for 30 is at index: " << std::distance(vec.begin(), lower) << std::endl;
    }

    // Using upper_bound
    auto upper = std::upper_bound(vec.begin(), vec.end(), 30);

    if (upper != vec.end()) {
        std::cout << "Upper bound for 30 is at index: " << std::distance(vec.begin(), upper) << std::endl;
    }

    return 0;
}
```

### **Output:**
```
Lower bound for 30 is at index: 2
Upper bound for 30 is at index: 3
```

---

## **4. Partial Search with Custom Comparator**
You can also use custom comparators to define your search criteria.

### **Example:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // For abs

// Custom comparator
bool customComparator(int a, int b) {
    return std::abs(a) < std::abs(b);
}

int main() {
    std::vector<int> vec = {-10, -20, 30, -40, 50};

    // Sorting by absolute value
    std::sort(vec.begin(), vec.end(), customComparator);

    // Searching for an element by absolute value
    auto it = std::find(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        std::cout << "Element found" << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
```

---

## **Comparison of Methods**
| **Method**           | **Use Case**                              | **Complexity**         |
|----------------------|------------------------------------------|------------------------|
| `std::find`          | Linear search in unsorted vector          | \(O(n)\)               |
| `std::binary_search` | Check for existence in sorted vector      | \(O(\log n)\)          |
| `std::lower_bound`   | Find first position (\>= value) in sorted | \(O(\log n)\)          |
| `std::upper_bound`   | Find first position (> value) in sorted   | \(O(\log n)\)          |

---
