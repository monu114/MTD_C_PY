from collections import Counter

def max_frames(sticks):
    count = Counter(sticks)
    total_pairs = sum(count[length] // 2 for length in count)
    return total_pairs // 2

sticks = [2, 2, 3, 2, 3, 2]
print(max_frames(sticks))
