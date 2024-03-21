def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_perfect_square(n):
    return n == int(n**0.5)**2

def count_mathematical_elements(sequence):
    even_count = sum(1 for num in sequence if num % 2 == 0)
    odd_count = sum(1 for num in sequence if num % 2 != 0)
    prime_count = sum(1 for num in sequence if is_prime(num))
    square_count = sum(1 for num in sequence if is_perfect_square(num))
    return even_count, odd_count, prime_count, square_count

sequence = [20, 13, 5, 8, 17, 23, 6, 11, 9, 12, 16, 19, 7, 14, 25, 18, 21, 10, 3, 4,
            27, 22, 29, 15, 2, 31, 26, 33, 28, 35, 37, 24, 39, 32, 41, 36, 43, 38, 45,
            47, 30, 49, 34, 51, 40, 53, 46, 55, 50, 57, 42, 59, 48, 61, 44, 63, 52, 65,
            67, 54, 69, 56, 71, 58, 73, 60, 75, 62, 77, 64, 79, 66, 81, 68, 83, 70, 85,
            87, 72, 89, 74, 91, 76, 93, 78, 95, 80, 97, 82, 99, 84, 101, 86, 103, 88, 105,
            107, 90, 109, 92, 111, 94, 113, 96, 115, 98, 117, 100, 119, 102, 121, 104, 123, 106, 125]

even_count, odd_count, prime_count, square_count = count_mathematical_elements(sequence)
print("Sum:",sum(sequence))
print("Even numbers:", even_count)
print("Odd numbers:", odd_count)
print("Prime numbers:", prime_count)
print("Perfect squares:", square_count)
