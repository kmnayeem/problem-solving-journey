# Sheet #1 (Data type - Conditions)

In C++, choosing the right data type is important for memory efficiency, precision, and avoiding overflow.

## 📊 C++ Data Types – Quick Reference

| Data Type  | Size   | Range / Default Value                       | Example              | Notes                        |
|------------|--------|---------------------------------------------|----------------------|--------------------------------|
| int        | 4B     | -2,147,483,648 to 2,147,483,647 / garbage   | int a = 10;          | Normal integers               |
| long long  | 8B     | ±9 × 10¹⁸ / garbage                         | long long n = 1e9;   | Large integers                |
| float      | 4B     | ±3.4 × 10³⁸ / garbage                       | float x = 3.14;      | Decimal, low precision        |
| double     | 8B     | ±1.7 × 10³⁰⁸ / garbage                      | double x = 3.14159;  | Decimal, high precision       |
| char       | 1B     | 0 to 255 (unsigned) / -128 to 127 (signed)  | char c = 'A';        | Single character              |
| bool       | 1B     | true / false (global/static default: false) | bool ok = true;      | True / False                  |
| array      | varies | depends on type                             | int arr[5];          | Collection of same type       |
| string     | varies | empty / ""                                  | string s = "hi";     | Text                          |
| pointer    | 8B     | nullptr / garbage                           | int *p = &x;         | Stores memory address         |
| void       | 0      | N/A                                         | void fun() {}        | Function returns nothing      |

---

### 🧠 Key Notes

- Use `long long` for large numbers (up to 10¹⁸)  
- Use `double` instead of `float` for better precision  
- Use `int` for normal-range values  
- Use `bool` for true/false flags  
- Default values depend on scope: local variables are garbage, global/static are zero or false  
- Use modifiers when needed:  
  - `unsigned int` → only positive integers (0 to 4,294,967,295)  
  - `short` / `long` → adjust memory usage and range  
- Always choose the correct type to avoid overflow and save memory  

💡 Tip: Use `int` for most cases, `long long` for large numbers, and `double` for precise decimal calculations.
