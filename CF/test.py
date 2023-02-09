def find_numbers(num):
    num_str = str(num)
    n = len(num_str)
    for i in range(1, n):
        first_num = int(num_str[:i])
        second_num = num - first_num
        if sum(map(int, str(first_num))) == sum(map(int, str(second_num))):
            return (first_num, second_num)
    return None
print(find_numbers(1))