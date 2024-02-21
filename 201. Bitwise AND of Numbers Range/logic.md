<h3>Used Chat gpt to explain my code, better for future purposes </h3>


1. `#include <iostream>`: This line includes the standard input-output stream header file, which provides facilities for performing input and output operations, such as `cin` and `cout`.

2. `using namespace std;`: This line brings all the symbols in the `std` namespace into the current scope. It's used here so that you don't need to prefix `cout` and `endl` with `std::`.

3. `int rangeBitwiseAnd(int left, int right)`: This function takes two integers, `left` and `right`, which represent the range [left, right]. It calculates the bitwise AND of all numbers in this range, inclusive, and returns the result.

4. Inside the `rangeBitwiseAnd` function:
   - `int shift = 0;`: Initialize a variable `shift` to 0. This variable will keep track of the number of right shifts needed to find the common bits between `left` and `right`.
   - `while (left < right) { ... }`: Iterate until `left` is greater than or equal to `right`.
     - `left >>= 1;`: Right shift `left` by 1 bit.
     - `right >>= 1;`: Right shift `right` by 1 bit.
     - `shift++;`: Increment the `shift` variable to keep track of the number of shifts performed.
   - `return left << shift;`: After the loop, left-shift `left` by `shift` bits and return the result. This is the bitwise AND of all numbers in the range `[left, right]`.

5. `int main() { ... }`: This is the main function where the program execution starts.
   - `cout << rangeBitwiseAnd(5, 7) << endl;`: Calls the `rangeBitwiseAnd` function with `left` equal to 5 and `right` equal to 7, and prints the result followed by a newline.
   - `cout << rangeBitwiseAnd(0, 0) << endl;`: Calls the `rangeBitwiseAnd` function with `left` and `right` both equal to 0, and prints the result followed by a newline.
   - `cout << rangeBitwiseAnd(1, 2147483647) << endl;`: Calls the `rangeBitwiseAnd` function with `left` equal to 1 and `right` equal to 2147483647, and prints the result followed by a newline.

6. `return 0;`: Indicates successful program termination to the operating system.