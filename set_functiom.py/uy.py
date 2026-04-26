# a=4444
# b=5
# while a>b:
#     print(a)
#     a=a//b
    
# ish=[
#     {"name":"Alijon","price":100},
#     {"name":"Asad","price":110},
#     {"name":"Azam","price":120},
#     {"name":"Jahon","price":130}
# ]

# katta= sorted(ish,key=lambda x:x["price"],reverse=True)
# print(katta[0], katta[1])

uyinchi=input("1 uyinchi. Share yo steal")
uyichi2=input("2 uyinchi. Share yo steal")
a=0
b=0
if uyinchi=="share" and uyichi2=="share":
    a+=5
    b+=5

elif  uyinchi=="share" and uyichi2=="steal" :
    b+=6
    a+=2
elif  uyinchi=="steal" and uyichi2=="share" :
    a+=6
    b+=2
else:
    a+=3
    b+=3
print(a,b)