# FUNDAMENTALS – COMPLETE REVISION NOTES

---

## 1. VARIABLES & INPUT / OUTPUT

- Variable: named memory location to store data  
- Data type decides size & kind of data  
- `cin`  → input from user  
- `cout` → output to screen  
- `return` → sends value back from function (not output)

---

## 2. DATA TYPES

- Primitive: `int`, `float`, `double`, `char`, `bool`  
- Non-primitive: `array`, `string`, `vector`  
- ASCII: each character has an integer value  
  - A–Z → 65–90  
  - a–z → 97–122  
  - 0–9 → 48–57  

---

## 3. TYPE CASTING

- Converting one data type into another  
- Used when type mismatch or precision is needed  
- Example:  
  - `char c = char(65);`

---

## 4. OPERATORS

- Arithmetic: `+  -  *  /  %`  
- Relational: `>  <  >=  <=  ==  !=`  
- Logical: `&&  ||  !`  
- Assignment: `=`  
- Operator precedence matters → use brackets `( )`

---

## 5. CONDITIONALS

- `if` → single condition  
- `if-else` → two-way decision  
- `else if` → multiple conditions  
- `switch` → fixed choices  
- `ternary` → short if-else (use sparingly)

**Important points:**
- Order of conditions matters  
- Always think about equality cases (`>=`, `<=`)

---

## 6. LOOPS – CORE IDEA

Every loop has:
1. Start  
2. Condition  
3. Update  

Missing update → infinite loop

- `for` loop → range known  
- `while` loop → condition priority  
- `do-while` loop → runs at least once  

---

## 7. DIGIT-BASED LOOPS (Number Logic)

**Pattern: digit extraction**
- `digit = n % 10`  
- `n = n / 10`

Used in:
- reverse number  
- sum of digits  
- count digits  

**Reverse number logic**
- `rev = rev * 10 + digit`

**Sum of digits logic**
- `sum = sum + digit`

---

## 8. COUNTING / ACCUMULATION LOOPS

Used in:
- factorial  
- power  
- product of series  

**Important rule**
- Sum starts from `0`  
- Product starts from `1`

**Factorial logic**
- `result = 1`  
- multiply numbers from `1` to `n`

---

## 9. RANGE / PRINTING LOOPS

Used to print:
- 1 to n  
- n to 1  
- tables  
- series  

Key points:
- correct start  
- correct end  
- correct step  
- avoid off-by-one errors  

---

## 10. SELECTIVE LOOPS (Loop + Condition)

- Loop runs for all values  
- Condition decides what to print or process  

Example:
- print even numbers  
- condition: `i % 2 == 0`

**Rule:**  
Clarity > optimisation (especially for beginners)

---

## 11. LOOP CONTROL STATEMENTS

- `break` → exits loop completely  
- `continue` → skips current iteration only  

Use `break` when:
- answer found  
- no further work needed  

Use `continue` when:
- skipping specific values  

---

## 12. COMMON MISTAKES TO AVOID

- Using `=` instead of `==`  
- Wrong loop condition (`<` vs `<=`)  
- Forgetting update  
- Destroying original input  
- Overusing nested `if`  

---

## 13. THINKING RULE (MOST IMPORTANT)

Before coding, always ask:
1. What repeats?  
2. What changes?  
3. When does it stop?  
4. What is the final output?  

---

## ✅ FUNDAMENTALS COMPLETED

- Conditionals  
- All loop patterns  
- Selective loops  
- `break` / `continue`  

**Checkpoint:**  
Sunday, **08-02-2026**

Next (after revision):
- Arrays (recommended)  
- OR Pattern Printing