# Elements of Programming Interviews

## How to Build
### Prerequisites
* A C++ compiler that supports at least C++11.
* [Bazel](https://bazel.build) build system
### Compile and Test C++, Java, Python, and Clojure Code with Bazel
1.) Git clone repository.  
```
git clone https://github.com/anthonygraca/epi
```
2.) Change directory into project root.  
```
cd epi
```
3.) Use the following command: 
```
bazel test --test_output=all //...
```  

## Table of Contents
### Chapter 4. Primitive Types
| Problem | Source | Tests | Time | Space |
|---------|--------|-------|------|-------|
| Count Bits | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/counting-bits.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/counting-bits-test.cc) | O(n) | O(1) |
| Parity  | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/parity.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/parity-test.cc) | O(logn) | O(1) |
| Swap Bits  | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/swap-bits.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/swap-bits-test.cc) | O(1) | O(1) |
| Find a Closest Integer With the Same Weight | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/closest-integer-same-weight.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/closest-integer-same-weight-test.cc) | O(n) | O(1) |
| Find Product Without Arithmetical Operators | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/product-without-arithmetical-operators.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/product-without-arithmetical-operators-test.cc) | O(n^2) | O(1) |
| Find Quotient Without Arithmetical Operators | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/quotient-without-arithmetical-operators.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/quotient-without-arithmetical-operators-test.cc) | O(n) | O(1) |
| Compute pow(x,y) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/compute-pow.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/compute-pow-test.cc) | O(n) | O(1) |
| Reverse Digits | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/reverse-digits.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/reverse-digits-test.cc) | O(n) | O(1) |
| Check if a Decimal Integer is a Palindrome | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/decimal-palindrome.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/decimal-palindrome-test.cc) | O(n) | O(1) |
| Generate Uniform Random Numbers | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/generate-random-numbers.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/generate-random-numbers-test.cc) | O(log(b - a + 1)) | O(1) |
| Rectangle Intersection | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/primitive-types/rectangle-intersection.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/primitive-types/rectangle-intersection-test.cc) | O(1) | O(1) |

### Chapter 5. Arrays
| Problem | Source | Tests | Time | Space |
|---------|--------|-------|------|-------|
| Partition Even Odd | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/arrays/even-odd.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/arrays/even-odd-test.cc) | O(n) | O(1) |
| Dutch National Flag | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/arrays/dutch-national-flag.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/arrays/dutch-national-flag-test.cc) | O(n) | O(1) |
| Increment an Arbitrary-Precision Integer | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/main/data-structures-and-algorithms/arrays/arbitrary-precision-integer.h) | [:heavy_check_mark:](https://github.com/anthonygraca/epi/blob/main/src/test/data-structures-and-algorithms/arrays/arbitrary-precision-integer-test.cc) | O(n) | O(1) |
