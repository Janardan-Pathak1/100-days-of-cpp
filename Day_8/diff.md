# Difference Between Pass By Value and Pass By reference

| Feature          | Pass-by-Value                                                    | Pass-by-Reference                                         |
| ---------------- | ---------------------------------------------------------------- | --------------------------------------------------------- |
| **Definition**   | A copy of the variable is passed to the function.                | The actual variable is passed to the function.            |
| **Modification** | Changes inside the function do not affect the original variable. | Changes inside the function affect the original variable. |
| **Memory Usage** | More memory is used as copies are created.                       | Less memory is used as no copy is created.                |
| **Performance**  | Slower for large data structures (due to copying).               | Faster for large data structures (as no copying occurs).  |
| **Syntax**       | `void func(int x)`                                               | `void func(int &x)`                                       |
