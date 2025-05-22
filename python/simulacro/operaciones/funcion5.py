def capicua(N):
   while N>0:
    if str(N) == str(N)[::-1]:
      print(f"El {N} numero es capicua")
    else:
      print(f"El {N} numero no es capicua")
    break    