def longest_unique_substring(s):
    n = len(s)
    max_len = 0
    max_sub = ""
    for i in range(n):
        seen = set()
        temp = ""
        for j in range(i, n):
            if s[j] in seen:
                break
            seen.add(s[j])
            temp += s[j]
            if len(temp) >= 3 and len(temp) > max_len:
                max_len = len(temp)
                max_sub = temp
    return max_sub if max_sub else "-1"

s = "A@bcd1abx"
print(longest_unique_substring(s))
