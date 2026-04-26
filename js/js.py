import json
f=open("Vazifa.json")
lst=json.load(f)
f.close
f=open("Vazifa.json","r+")

katta = sorted(lst, key=lambda x: x["ball"], reverse=True)
a=1
for i in katta[:3]:
    print(f"top {a}{i}")
    a+=1
kichkina=min(lst,key=lambda x:x["ball"])
print("Eng kichik:", kichkina)
json.dump(lst,f,indent=4)
f.close()
