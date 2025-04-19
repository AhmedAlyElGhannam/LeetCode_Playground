# LeetCode_Playground

## Progress
### Day 1 (9/4/2025)
- [x] 4. Median of Two Sorted Arrays **Hard**
- [x] 35. Search Insert Position **Easy**
- [x] 374. Guess Number Higher or Lower **Easy**
- [x] 704. Binary Search **Easy**
### Day 2 (10/4/2025)
- [x] 744. Find Smallest Letter Greater Than Target **Easy**
### Day 3 (11/4/2025)
- [x] 50. pow(x, n) **Medium**
### Day 4 (12/4/2025)
- [x] 2. Add Two Numbers **Medium**
- [x] 231. Power of Two **Easy**
- [x] 191. Number of 1 Bits **Easy**
### Day 5 (13/4/2025)
- [x] 148. Sort List **Easy**
- [x] 190. Reverse Bits **Easy**
- [x] 326. Power of Three **Easy**
- [x] 342. Power of Four **Easy**
### Day 6 (14/4/2025)
- [x] 143. Reorder List **Medium**
- [x] 206. Reverse Linked List **Easy**
- [x] 2807. In Greatest Common Divisor in Linked List **Medium**
- [x] 876. Middle of The Linked List **Easy**
### Day 7 (15/4/2025)
- [x] 21. Merge Two Sorted Lists **Easy**
- [x] 217. Contains Duplicate **Easy**
### Day 8 (16/4/2025)
- [x] 141. Linked List Cycle **Easy**
### Day 9 (17/4/2025)
- [x] 160. Intersection of Two Linked Lists **Easy**
### Day 10 (18/4/2025)
- [x] 169. Majority Element **Easy**
### Day 11 (19/4/2025)
- [x] 169. Majority Element **Easy** (Solved it again with a different approach)
- [x] 229. Majority Element II **Medium**

## Solution Rationale
- #4 Median of Two Sorted Arrays &rarr; Inserted two vectors into a larger vector and used `stl` sorting algorithm on it.
- #35 Search Insert Position &rarr; Binary search to find if the element is already there **or if it is not, return `lowerBound` since it holds the index at which element should be inserted in**.
- #374 Guess Number Higher or Lower &rarr; Binary search with extra steps.
- #704 Binary Search &rarr; Binary search.
- #744 Find Smallest Letter Greater Than Target &rarr; Binary search but with letters.
- #50 pow(x, n) &rarr; Exponentiation by squaring with recursion + wrapper function to handle negative powers.
- #2 Add Two Numbers &rarr; Recursion to handle base cases and carry + utilized Linked Lists properties.
- #231 Power of Two &arr; Solved it twice: using recursion & bit masking then using a single bit manipulation statement. Both run blazingly fast but the single statement uses slightly lower memory.
- #191 Number of 1 Bits &rarr; Recursion and bit masking. Similar to my recursive approach in #231 but even easier.
