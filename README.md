# VARIADIC FUNCTIONS
Variadic Functions are functions that take a variable number of arguments (a number of parameters).
### Syntax:
```c data_type variable_name(data type variable_name, ...); ```
### va_list
va_list: it serves as a mechanism employed to initialize a variable that can traverse the variable argument list.
* va_list var_name: “var_name” is where the arguments are going to be stored.
* va_list is an array containing a single element of one structure containing the necessary information to implement the “va_arg” macro.
 ```
  typedef struct {
   unsigned int gp_offset;
   unsigned int fp_offset;
   void *overflow_arg_area;
   void *reg_save_area;
} va_list[1];
```
### va_start
* va_start: is a macro that enables access to the variable number of arguments. In other words, “va_start” initializes ”ap” to point to the first unammed variable argument. So it prepares “va_list” to be used with the “va_arg” macro.
### ? When we use “va_start”, what does he do ?
### The “va_start” macro initializes the structure as follows:
* overflow_arg_area: This pointer is used to go and get (fetch) arguments passed on the stack.
* reg_save_area: This element points to the start of the register save area.
* gpr: This element holds the offset in bytes from reg_save_area to the place where the next available GPR is saved.
* fpr: This element holds the offset in bytes from reg_save_area to the place where the next available FPR is saved.
* offset: means the position or location of a particular piece of data relative to another.
### General Purpose Registers (GPRs) 
* They are designed to store general data and addresses. (used for integer arithmetic, logical operations and storing memory addresses).
### Floating Point Registers (FPRs)
* They are designed specifically for floating-point arithmetic operations (Floating-point operations deal with non-integer numbers, including real numbers and numbers with decimal points).
### va_arg
### va_arg: is a macro that is used to access the variable arguments in a function.
* we use “va_arg” to retrieve the values of the variable arguments one by one within a function that accepts a variable number of arguments. The “va_arg” is designed to fetch the next variable argument each time it is called.
### ? How does “va_arg” work ?
1. When you call “va_start”, the compiler sets “av_list” to point to the beginning of the variable argument list. It initializes “va_list” with the necessary information to access the arguments.
```
va_list ap;
va_start(ap, last_named_param);
```
2. The “va_arg” takes a “va_list” and a type as argument. Behind the scenes, the “va_arg” increments the “va_list” pointer by the size of specified type. It holds the memory at the incremented pointer and returns its value.
```
int value = va_arg(ap, int);
```
3. Finally, “va_end” is called to perform cleanup.
```
va_end(ap);
```
