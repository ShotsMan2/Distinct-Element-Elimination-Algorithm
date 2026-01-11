# Distinct Element Elimination Algorithm

This project implements an interactive approach to finding the number of **Unique Elements** in an integer array. Instead of using standard sorting or hashing sets, it employs an **Elimination Game** mechanic using a Sentinel Value.

## ⚙️ Algorithm Logic

The system holds a dataset $S$. The user provides inputs to "clear" the board.

1.  **Initialization:** The array is populated with mixed integers (duplicates included).
2.  **Sentinel Value:** We use `-1` as a mask to represent "deleted" or "processed" items.
3.  **Process Loop:**
    * User inputs a number $x$.
    * The algorithm scans the array.
    * **IF** $x$ is found:
        * All instances of $x$ are replaced with `-1`.
        * The *Distinct Counter* is incremented by 1.
    * **ELSE**: No action is taken (input ignored).
4.  **Termination:** The loop breaks when the entire array consists of `-1`s.

### Visual State Transition
**Initial:** `[1, 6, 5, 2, 1, 4, 2]`
* *User Input:* `1`
* *Action:* Mask all 1s. Increment count.
**State 1:** `[-1, 6, 5, 2, -1, 4, 2]`
* *User Input:* `2`
* *Action:* Mask all 2s. Increment count.
**State 2:** `[-1, 6, 5, -1, -1, 4, -1]`

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o elimination_counter
    ```
2.  Run the executable:
    ```bash
    ./elimination_counter
    ```
3.  Guess numbers until the program terminates and reports the count of unique numbers.

---
*This repository demonstrates array modification and interactive state checking in C.*
