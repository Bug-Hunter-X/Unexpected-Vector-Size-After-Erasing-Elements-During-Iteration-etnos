# Unexpected Vector Size After Erasing Elements During Iteration

This repository demonstrates a common C++ error involving erasing elements from a `std::vector` while iterating over it using an index-based loop.  The code attempts to remove every other element but results in an unexpected final vector size because the iterators are invalidated by the `erase()` operation.

## Problem

The issue stems from the fact that `vec.erase(vec.begin() + i)` invalidates the iterator `vec.begin() + i` and shifts the remaining elements.  Thus, the loop counter `i` no longer correctly reflects the element positions after erasing.