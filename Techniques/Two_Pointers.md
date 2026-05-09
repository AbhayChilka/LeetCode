# Two Pointers Technique

The Two Pointers technique is an optimization approach where two indices/pointers are used to traverse a data structure efficiently.

It helps reduce unnecessary iterations and often converts brute force solutions from `O(n²)` to `O(n)`.

---

# When to Use

Use Two Pointers when:

- Array is sorted
- Need pair/triplet problems
- Need optimized linear traversal
- Need in-place modification
- Need efficient searching

---

# Core Idea

Instead of checking every possible pair manually, move pointers intelligently based on conditions.

---

# Opposite Direction Pointers

One pointer starts from the beginning and another from the end.

### Template

```cpp
int left = 0;
int right = n - 1;

while(left < right)
{
    // logic

    if(condition)
    {
        left++;
    }
    else
    {
        right--;
    }
}
```

---

# Fast & Slow Pointers

Both pointers move forward but at different speeds.

### Template

```cpp
int slow = 0;

for(int fast = 1; fast < n; fast++)
{
    if(arr[fast] != arr[slow])
    {
        slow++;
        arr[slow] = arr[fast];
    }
}
```

---

# Time Complexity

| Approach | Complexity |
|---|---|
| Brute Force | O(n²) |
| Two Pointers | O(n) |

---

# Space Complexity

```text
O(1)
```

because operations are usually performed in-place.

---

# Problems-Solution

| Problem | Difficulty | LeetCode | Solution |
|---|---|---|---|
| 26.Remove Duplicates from Sorted Array | Easy | [Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [26-removeduplicate_sortedarray.c](../Topics/Arrays/1-Easy/26-removeduplicate_sortedarray.c) |
| 27.Remove Element | Easy | [Problem](https://leetcode.com/problems/remove-element/) | [27-remove_elements_from_array.c](../Topics/Arrays/1-Easy/27-remove_elements_from_array.c) |

---

# Recognition Clues

Think Two Pointers when:

- Array is sorted
- Need target pair sum
- Need duplicate removal
- Need optimized traversal

---

# Common Mistakes

- Incorrect pointer movement
- Infinite loops
- Forgetting boundary conditions
- Not handling duplicates properly

---

# Key Observation

```text
Move pointers based on conditions instead of checking every pair manually.
```

---

# Golden Rule

```text
Two Pointers reduce unnecessary work by intelligently moving indices.
```