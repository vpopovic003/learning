Python Remove newline from String

s = 'ab\ncd\nef'
print(s.replace('\n', ''))
print(s.translate({ord('\n'): None}))
