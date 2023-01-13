def merge_sort_pairs(arr, n, k):
    if n < 2:
        return 0

    mid = n // 2
    left_count = merge_sort_pairs(arr[:mid], mid, k)
    right_count = merge_sort_pairs(arr[mid:], n - mid, k)
    merge_count = merge_and_count(arr, mid, n - mid, k)

    return left_count + right_count + merge_count

def merge_and_count(arr, left_size, right_size, k):
    left = arr[:left_size]
    right = arr[left_size:]
    i = j = count = 0

    for k in range(left_size + right_size):
        if i < left_size and j < right_size:
            if left[i] <= right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
                count += left_size - i
        elif i < left_size:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1

    i = j = 0
    while i < left_size and j < right_size:
        if left[i] + right[j] == k:
            count += 1
            i += 1
            j += 1
        elif left[i] + right[j] < k:
            i += 1
        else:
            j += 1

    return count

arr = [6, 1, 3, 2, 4]
n = len(arr)
k = 5

print(merge_sort_pairs(arr, n, k))
