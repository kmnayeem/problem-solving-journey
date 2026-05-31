# Sheet #2 (Loops)

Loops are fundamental control structures that allow repeated execution of a block of code. They are widely used in competitive programming for iteration, counting, pattern generation, and numerical processing.

---

# 🔁 C++ Loops – Quick Reference

| Loop Type     | Syntax                                   | Time Complexity  | Space Complexity | Purpose                    |
|---------------|------------------------------------------|------------------|------------------|----------------------------|
| `for`         | `for(initialization; condition; update)` | O(n)             | O(1)             | Fixed number of iterations |
| `while`       | `while(condition)`                       | O(n)             | O(1)             | Condition-based iteration  |
| `do while`    | `do { } while(condition);`               | O(n)             | O(1)             | Executes at least once     |
| Nested Loops  | Loop inside another loop                 | O(n²)            | O(1)             | Matrices, patterns, grids  |
| Infinite Loop | `while(true)`                            | ∞                | O(1)             | Continuous execution       |

---

# 📌 Loop Variables Convention

When working with nested loops, different loop counters should be used for readability and maintainability.

| Loop Level | Variable |
|------------|----------|
| 1st Loop   | `i`      |
| 2nd Loop   | `j`      |
| 3rd Loop   | `k`      |
| 4th Loop   | `l`      |

### Example

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        // Process cell (i, j)
    }
}
```

---

# ⚡ Control Statements

| Statement  | Description                     |
|------------|---------------------------------|
| `break`    | Terminates the loop immediately |
| `continue` | Skips the current iteration     |
| `return`   | Exits the current function      |

---

# ⏱️ Time Complexity Reference

| Pattern                     | Complexity |
|-----------------------------|------------|
| Single Loop                 | O(n)       |
| Two Nested Loops            | O(n²)      |
| Three Nested Loops          | O(n³)      |
| Divide by 2 Each Iteration  | O(log n)   |
| Nested + Logarithmic Loop   | O(n log n) |

### Examples

```cpp
for(int i = 0; i < n; i++) {}
```

**Complexity:** O(n)

```cpp
while(n)
{
    n /= 2;
}
```

**Complexity:** O(log n)

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++) {}
}
```

**Complexity:** O(n²)

---

# 💾 Space Complexity Reference

| Structure           | Complexity |
|---------------------|------------|
| Primitive Variables | O(1)       | 
| Array of Size n     | O(n)       |
| String of Length n  | O(n)       |
| Matrix n × n        | O(n²)      |

---

# 🎯 Common Loop Applications

| Problem Type         | Complexity |
|----------------------|------------|
| Count Digits         | O(log n)   |
| Sum of Digits        | O(log n)   |
| Reverse Number       | O(log n)   |
| Multiplication Table | O(n)       |
| Pattern Printing     | O(n²)      |
| Matrix Traversal     | O(n²)      |

---

# 🧠 Key Notes

- Prefer `for` loops when the number of iterations is known.
- Use `while` loops when iteration depends on a runtime condition.
- `do while` guarantees at least one execution.
- Nested loops commonly appear in matrix and pattern problems.
- Always analyze both **Time Complexity** and **Space Complexity** before submitting a solution.
- Follow the `i → j → k → l` convention for nested loops.

---

# 🚀 Practice Sheet

**Codeforces Sheet #2 (Loops)**

https://codeforces.com/group/MWSDmqGsZm/contest/219432
