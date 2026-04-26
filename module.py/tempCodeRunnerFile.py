def ends_with_gram(words: list[str]) -> list[str]:
    yangi=[]
    for i in words:
        if i.endswith("ram"):
            yangi.append(i)
    return yangi
    pass


words = ["telegram", "Instagram", "hello", "program", "diagram", "world"]
print(ends_with_gram(words))