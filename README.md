# compiler-design-basic
COMPANY: CODTECH IT SOLUTIONS PVT.LTD
*NAME: Vinay Kumar Hembram
INTERN ID:CT04DG1922 
DOMAIN: C++ LANGUAGE
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH KUMAR
PARAGRAPH : 

The given C++ program is a simple arithmetic expression evaluator that follows the BODMAS rule (i.e., operator precedence for multiplication and division before addition and subtraction). The program allows the user to input a single-line arithmetic expression, such as `6 + 4 * 2 - 6 / 3`, which it then parses and evaluates correctly. At the core of the program are two standard template library (STL) vectors: one to store numbers (`numbers`) and another to store operators (`operators`). It begins by prompting the user to enter a space-separated expression consisting of integers and the four basic operators (+, -, \*, /). Using a `stringstream`, the input is broken down into alternating numbers and operators. The first number is pushed directly into the `numbers` vector, and subsequent number-operator pairs are read and stored in the corresponding vectors.

To correctly implement operator precedence, the program processes the multiplication (`*`) and division (`/`) operations first in a dedicated loop. For each such operator found, it calls the `calculate()` function, which performs the specified operation between the number at the current index and the one immediately following it. The result replaces the earlier number in the `numbers` vector, and the next number and current operator are erased, effectively shrinking the vector and shifting elements accordingly. The loop index is decremented to reevaluate the updated vector, ensuring correct sequencing of multiple high-priority operations.

Once all multiplication and division have been processed, the program performs addition (`+`) and subtraction (`-`) operations in a second loop. Here, it iteratively combines the remaining values in the `numbers` vector using the `operators` vector, maintaining the proper left-to-right sequence. The final result is stored in the `answer` variable and is then printed to the console.

The `calculate()` function itself is a helper method that takes two integers and a character operator, returning the result of the operation. It includes a division check to avoid divide-by-zero errors, although the fallback in such cases is simply returning zero, which could be further improved for better error handling. All other operations are straightforward.

This program demonstrates several fundamental programming concepts, such as string parsing using `stringstream`, dynamic array manipulation with vectors, and implementing arithmetic logic with respect to operator precedence. While it doesn't handle parentheses or floating-point numbers, it effectively evaluates flat arithmetic expressions with correct order of operations. Its structured and readable format makes it a great educational example for beginners learning how to implement expression evaluation and basic parsing in C++. Enhancements like input validation, support for parentheses, decimal numbers, or error messages for malformed input would make the program more robust and user-friendly.

output: 




<img width="1920" height="1020" alt="Image" src="https://github.com/user-attachments/assets/2fda128d-ffb8-4f07-a847-3401eb8c0534" />
