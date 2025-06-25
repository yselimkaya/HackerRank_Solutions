def plusMinus(arr):

    total = len(arr)
    positive = 0
    negative = 0
    neutral = 0

    for i in range(total):
        if arr[i] < 0:
            negative += 1
        elif arr[i] > 0:
            positive += 1
        else:
            neutral += 1

    positive_ratio = positive / total
    negative_ratio = negative / total
    neutral_ratio = neutral / total

    print(f"{positive_ratio:.6f}")
    print(f"{negative_ratio:.6f}")
    print(f"{neutral_ratio:.6f}")
