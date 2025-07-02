# -COMPILER-DESIGN-BASICS
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: DILIP KUMAR MURMU
*INTERN ID*: CT04DF2445
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
#Task 3 Description – Lexical Analyzer in C (Compiler Design Basics)

In Task 3, the goal is to implement a basic lexical analyzer using the C programming language. This task falls under the fundamental concepts of compiler design, where the focus is to break down source code into meaningful tokens. Specifically, the program is designed to identify keywords, operators, and identifiers from a single-line input source code. It introduces learners to the first phase of compilation — lexical analysis, where raw text is scanned and classified into recognizable syntactic units.

A lexical analyzer (or lexer) is the first component in a compiler pipeline. It reads the source code character by character and groups them into tokens, such as keywords (int, float, etc.), identifiers (x, total, sum1, etc.), operators (+, =, <, etc.), and symbols. In real-world compiler systems, lexical analysis is implemented using tools like Lex or manually through custom logic, as is done in this program.
Core Logic and Components

This C program starts by including standard libraries such as <stdio.h>, <string.h>, and <ctype.h>, which are used for input/output operations, string comparisons, and character type checking respectively.

Two key data structures are used:

A 2D array reservedWords that stores a predefined list of keywords such as int, float, if, else, while, for, and return.

A character array symbolOperators that contains basic operators (+, -, *, /, =, <, >).


These arrays act as reference sets to identify whether a given token is a keyword or operator.

Function Breakdown

1. checkReserved()

This function takes a token (a word extracted from the source code) and compares it with each entry in the reservedWords array using strcmp(). If a match is found, it returns 1, indicating a keyword; otherwise, it returns 0.

2. isSymbol()

This function checks whether a character is one of the operators by iterating through the symbolOperators array. If the character matches any operator, it returns 1; otherwise, 0.


Main Function Logic

In the main() function:

The user is prompted to paste a line of source code, which is stored in the sourceCode array using fgets().

The program then iterates through each character in the input.

If the character is alphanumeric, it is added to a temporary token.

When a non-alphanumeric character is encountered, it indicates the end of a token. At this point:

The token is null-terminated.

If the token matches a keyword, it's printed as a Keyword Found.

Otherwise, it is treated as an Identifier.


If the non-alphanumeric character is recognized as a symbol (e.g., +, -, =), it is printed as an Operator Detected.


After the loop, any remaining token is also checked and printed accordingly.

Significance and Real-World Application

This task is a vital introduction to compiler design, specifically focusing on how high-level code is parsed and understood by a compiler. The lexical analysis phase is the foundation for parsing, semantic analysis, and code generation. Understanding how to tokenize source code prepares learners for deeper topics such as syntax trees, grammar rules, and interpreters.

Furthermore, lexical analyzers are used in tools like:

Code editors for syntax highlighting,

Static analyzers to detect bugs,

Scripting engines for embedded logic in applications.

#OUTPUT: 
![Image](https://github.com/user-attachments/assets/9c86e33c-ee76-4ec9-b89c-10fabb2e3430)
