# Problem 326: Power of Three

# Given an integer, write a function to determine if it is a power of three.

# Example 1:

# Input: 27
# Output: true
# Example 2:

# Input: 0
# Output: false
# Example 3:

# Input: 9
# Output: true
# Example 4:

# Input: 45
# Output: false


class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0:
            return False
        while n > 0:
            if n == 1:
                return True
            elif n % 3 == 0:
                n = n/3
            else:
                return False
        return True
