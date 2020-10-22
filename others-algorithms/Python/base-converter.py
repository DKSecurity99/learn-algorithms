import math

def baseConverter(decimalNumber, base):
    rests_of_divisision = []
    actual_rest = None
    base_result = ''
    
    chars_base = [
        '0', '1', '2', '3', '4', 
        '5', '6', '7', '8', '9', 
        'A','B', 'C', 'D', 'E', 'F'
    ]

    while decimalNumber > 0:
        actual_rest = math.floor(decimalNumber % base)
        rests_of_divisision.append(actual_rest)
        decimalNumber = math.floor(decimalNumber / base)

    while len(rests_of_divisision) > 0:
        base_result += chars_base[rests_of_divisision.pop()]

    return base_result


print(baseConverter(123, 16)) # Hexdecimal
print(baseConverter(123, 2)) # binary
print(baseConverter(123, 8)) # octal

