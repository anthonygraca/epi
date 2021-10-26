# Elements of Programming Interviews

## How to Build
### Prerequisites
* A C++ compiler that supports at least C++11.
* [Bazel](https://bazel.build) build system
### Compile and Test C++ Code with Bazel
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
