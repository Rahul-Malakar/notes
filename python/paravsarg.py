def multiply_numbers(a, b):
    multiply = a * b
    return multiply

# result = multiply_numbers(2, 3)
# print(result)


def printnums(*nums):
    print(list(nums))
# printnums(1,2,3,4)


def printnums(**nums):
    print(nums["roll"])
printnums(name="rahul", roll=22)