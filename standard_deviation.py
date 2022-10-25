import mean

def get(data_list):
    deviation_mean = mean.get(data_list)
    sum = 0
    deviation_sum = 0
    for val in data_list:
        deviation_sum += (val - deviation_mean)**2
        sum +=val
    
    return deviation_sum/(len(data_list)-1)
