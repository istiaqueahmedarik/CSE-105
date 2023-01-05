def min_ops_to_sort(arr):
    ops = 0
    i = 0
    while i < len(arr):
        ops += 1
        i = index_of_first_element_not_in_correct_position(arr)
        if i == -1:
            break
        # Perform the operation to move the elements at indices i, i+1, ..., len(arr)-1 to the end of the array
        arr[i:] = sorted(arr[i:])
    return ops

def index_of_first_element_not_in_correct_position(arr):
    for i in range(len(arr)):
        if arr[i] != i + 1:
            return i
    return -1

# Test the solution
print(min_ops_to_sort([3, 1, 2]))  # Output: 1
