# class Dorihona:
#     def __init__(self):
#         self.ruyhat=[]
#         self.kassa=4000
        
#     def sklad(self,name,narx,nmauchun,qancha):
#         dori = {
#             "name":name,
#             "narx":narx,
#             "nmauchun":nmauchun,
#             "soni":qancha
#         }
#         self.ruyhat.append(dori)

#     def suragan_narsasi(self, narsasi):
        
#         for i in self.ruyhat:
#             if i["name"] == narsasi:
#                 if i["soni"] > 0:
#                     i["soni"] -= 1
#                     self.kassa += i["narx"]
#                     print(f"{narsasi} sotildi. Qoldiq: {i['soni']}")
#                 else:
#                     print("Bunaqa dori qolmadi")
#                 break
#         else:
#             print("Bunaqa dori biza sotmaymiz")

#     def qayeri_ogriyabti(self,ogriq):
#         for i in self.ruyhat:
#             if i["nmauchun"] == ogriq:
#                 print(f"{i["nmauchun"]}ga qarshi {i["name"]}bor {i["narx"]}")
#                 break
#         else:
#             print(f"{i["nmauchun"]} ga qarshi dori yuq")

    
# st1=Dorihona()

# st1.sklad("trimol", 2000, "bosh", 5)
# st1.sklad("analgin", 3000, "tish", 3)
# st1.sklad("paracetamol", 2500, "isitma", 4)
# st1.sklad("naftezin",3000,"burin",4)

# narsasi = input("Qanaqa dori kerak: ")
# st1.suragan_narsasi(narsasi)
# ogriq=input("Qayeriz og'rayabti")
# st1.qayeri_ogriyabti(ogriq)


# --------------------------------------------------------------------------
# ism=("Aziz","Davlat","Akbar","Abror")
# for i in ism:
#     print(f"{i} {len(i)}")
# -----------------------------------------------
# narx=(2000,5000,4444,3589)
# katta=max(narx)
# kichik=min(narx)
# print(katta)
# print(kichik)
# ----------------------------------
# fanlar = ("Matematika","Fizika","Informatika","Tarix")

# for i in fanlar:
#     print(i)
# -----------------------------
# shahar=("toshkent","andijon","Samarqand","Xiva")

# for i in shahar:
#     if len(i)>5:
#         print(i)
# -----------------------------------
# kitoblar = ("Python", "Algebra", "Adabiyot", "Biologiya")
# birinchi = sorted(kitoblar)
# print(birinchi[0])