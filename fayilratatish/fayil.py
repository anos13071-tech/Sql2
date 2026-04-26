f=open("Moshin.txt")
mashina={}
for i in f.read().split("\n"):
    i=i.split(",")
    if i[4] in mashina:
        mashina[i[4]]+=1
    else:
        mashina[i[4]]=1
jami = max(mashina, key=mashina.get)
print("Eng ko‘p brand:", jami)
print("Soni:", mashina[jami])
    