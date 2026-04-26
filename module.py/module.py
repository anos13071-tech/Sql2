# 1-----------------------------------
# def format_date(date_str: str) -> str:
#     yangi=date_str.split('.')

#     kun=yangi[0]
#     oy_nomi= Oy [yangi[1]]
#     yil=yangi[2]
#     return f"{kun} {oy_nomi} {yil}yil"
#     pass
# Oy={
#     "01":"Yanvar",
#     "02":"Fevral",
#     "03":"Mart",
#     "04":"Aprel",
#     "05":"May",
#     "06":"Iyun",
#     "07":"Iyul",
#     "08":"Avgust",
#     "09":"Sentabir",
#     "10":"Oktabir",
#     "11":"Noyabr",
#     "12":"Dekabr"
# }


# print(format_date("13.02.2025"))
# 2------------------------------------
# def get_top_user(data: list[tuple[str, int]]) -> str:
#     ball={}
#     for user,score in data:
#         if user in ball:
#             ball[user]+=score
#         else:
#             ball[user]=score
#     eng = max(ball.items(), key=lambda x: x[1])[0]
#     return eng
#     pass

# data = [
#     ("user1", 50),
#     ("user2", 60),
#     ("user1", 40),
#     ("user3", 30)
# ]
# print(get_top_user(data))
# 3-------------------------------------
# def count_passing_students(grades: list[int], passingGrade: int) -> int:
#     jami=0
#     for i in grades:
#         if i>=passingGrade:
#             jami+=1
#     return jami
#     pass

# grades = [45, 60, 75, 30, 90]
# passingGrade = 44
# print(count_passing_students(grades, passingGrade))
# 4---------------------------------------
# def ends_with_gram(words: list[str]) -> list[str]:
#     yangi=[]
#     for i in words:
#         if i.endswith("ram"):
#             yangi.append(i)
#     return yangi
#     pass


# words = ["telegram", "Instagram", "hello", "program", "diagram", "world"]
# print(ends_with_gram(words))