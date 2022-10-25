def get(data_list):
    sum = 0
    size = len(data_list)
    for val in data_list:
        sum += val
    return (sum/size)


