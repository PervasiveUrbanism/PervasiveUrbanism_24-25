file = open(".\\csv\\data.csv", "r")
lines = file.readlines()
for line in lines:
    print(line)
file.close
