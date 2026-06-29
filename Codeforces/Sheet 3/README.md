# Sheet #3 (Arrays)

An array is a data structure that stores multiple values of the same data type in a single variable, arranged in contiguous memory locations.

---

# 📊 C++ Arrays – Quick Reference

| Type        | Syntax           | Time Complexity | Space Complexity | Purpose              |
|-------------|------------------|-----------------|------------------|----------------------|
| 1D Array    | `int arr[n];`    | O(1) access     | O(n)             | Linear data storage  |
| 2D Array    | `int arr[n][m];` | O(1) access     | O(n²)            | Matrix/Grid problems |
| Vector      | `vector<int> v;` | O(1) amortized  | O(n)             | Dynamic arrays       |

---

# 🧠 Array Indexing

- Array index starts from **0**
- Last index = `n - 1`

### Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

# 📊 Array Indexing Example

| Index | Value |
|-------|-------|
| 0     | 10    |
| 1     | 20    |
| 2     | 30    |
| 3     | 40    |
| 4     | 50    |

---

# 📌 1-Based Indexing in C++ Arrays

When using **1-based indexing**, array positions start from `1` instead of `0`.

---

## 📏 Array Size Rule

If you want to store `n` elements using indices from `1 → n`, you must declare the array as:

```cpp
int arr[n + 1];
```

# 🔁 Basic Array Operations

## Input
```cpp
for(int i = 0; i < n; i++)
{
    cin >> arr[i];
}
```

## Output
```cpp
for(int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
```

## Sum of Array
```cpp
int sum = 0;
for(int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

# ⚡ Time Complexity

| Operation      | Complexity |
|----------------|------------|
| Access element | O(1)       |
| Traversal      | O(n)       |
| Search         | O(n)       |
| Insert         | O(n)       |

# 🧠 Key Notes

Arrays store same type of elements only
Memory is contiguous
Index starts from 0
Always avoid out-of-bounds access
Use `vector` for dynamic size
Use nested loops for matrix problems
Prefix sum helps in fast range queries

# 🚀 Practice Sheet

https://codeforces.com/group/MWSDmqGsZm/contest/219774

---
