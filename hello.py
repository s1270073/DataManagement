print("Hello,world!")
print("Here is my mmessage:")
with open('message.txt','r') as f:
    print(f.read())
    print(f.read().upper())
    print("Good-bye!")
