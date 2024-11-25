file = open(".\\csv\\data.csv", "w")
lines = file.readlines()
for line in lines:
    print(line)
