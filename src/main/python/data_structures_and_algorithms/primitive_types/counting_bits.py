def count_bits(x):
    num_bits = 0
    while (x > 0):
        num_bits += 1
        x = x & (x-1)
    return num_bits
