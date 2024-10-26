d = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"

try:
    while True:
        s = input()
        for i in s:
            if (i == ' ') :
                print(' ', end='')
                continue
            print(d[d.find(i) - 2], end='')
        print()
except EOFError:
    pass