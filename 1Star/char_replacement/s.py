vec = ["hello", "world", "cpp23"]
old_char, new_char = 'o', 'X'

vec = [s.replace(old_char, new_char) for s in vec]
print(vec)
