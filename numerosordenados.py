import random

def main():
    n = []
    
    while len(n) < 100:
        x = random.randint(0, 100)
        
        if x not in n:
            n.append(x)

    for num in n:
        print(num)

if __name__ == "__main__":
    main()
