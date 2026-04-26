# class Kitob:
#     def __init__(self, nomi, muallif, narx, nashriyot):
#         self.nomi=nomi
#         self.mualif=muallif
#         self.narx=narx
#         self.nashriyot=nashriyot
#     def ki (self):
#         print(f"Nomi: {self.nomi}")
#         print(f"Mualifi: {self.mualif}")
#         print(f"Narxi: {self.narx}")
#         print(f"Nashriyoti: {self.nashriyot}")
# kitobi=[]
# for i in range(5):
#     print(f"{i+1} kitobni kiriting")
#     nomi=input("Nomi: ")
#     mualif=input("Muallif: ")
#     narx=float(input("Narx: "))
#     nashriyot=input("Nashriyot: ")   

#     k = Kitob(nomi, mualif, narx, nashriyot)
#     kitobi.append(k)     
# for k in kitobi:
#     k.ki()
# --------------------------------------------
# class Komputer:
#     def __init__(self,nomi,ram,narx,protsessor):
#         self.nomi=nomi
#         self.ram=ram
#         self.narx=narx
#         self.protsessor=protsessor

#     def kom (self):
#         print(f"Nomi: {self.nomi}")
#         print(f"RAM: {self.ram}")
#         print(f"Narx: {self.narx}")
#         print(f"Protsessor: {self.protsessor}")
# komp=[]
# for i in range(4):
#     print(f"{i+1} komputerni kiriting")
#     nomi=input("Nomi: ")
#     ram=int(input("RAM: "))
#     narx=float(input("Narx: "))
#     protsessor=input("Protsessor: ")

#     k=Komputer(nomi,ram,narx,protsessor)
#     komp.append(k)

# for k in komp:
#     if k.ram>4 and k.ram<16:
#         print("8 ramliylar\n")
#         k.kom()
# ------------------------------------------------------
class Malumot:
    def __init__(self,isim_fam,email,yosh):
        self.isim_fam=isim_fam
        self.email=email
        self.yosh=yosh
    
    def ma (self):
        print(f"Isim-familiya: {self.isim_fam}")
        print(f"Email: {self.email}")
        print(f"Yosh: {self.yosh}")
ma=[]
for i in range (2):
    print(f"{i+1} Haqidagi malumot")
    ism=input("Isim-Familiya")
    email=input("Email: ")
    yosh=int(input("Yosh: "))

    k=Malumot(ism,email,yosh)
    ma.append(k)
for k in ma:
    print(f"Isim-Familiyasi: {k.isim_fam}, Email: {k.email}, Yosh: {k.yosh}")
    k.ma
