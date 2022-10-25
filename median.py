import math

def get(data_list):
    if(len(data_list)%2 != 0):
        return data_list[math.ceil(len(data_list)/2)]
    return (data_list[int(len(data_list)/2)-1] + data_list[int(len(data_list)/2)])/2