def recover_names(string):
    if len(string) < 3:
        return ":("
    min_char = min(string)
    min_index = string.index(min_char)
    name1 = string[:min_index]
    name2 = string[min_index:]
    if (name1 <= name2) and (name1 <= recover_names(name2)):
        return name1 + " " + name2 + " " + recover_names(name2)
    name3 = recover_names(name2)
    if (name2 <= name3) and (name2 <= name1):
        return name2 + " " + name3 + " " + name1
    return ":("

num_tests = int(input())
for i in range(num_tests):
    string = input()
    print(recover_names(string))
