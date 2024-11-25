import csv

with open('values.csv', mode='w') as file:
    writer = csv.writer(file, delimiter=',')

    writer.writerow([30, 50, 3.55])
    writer.writerow([40, 80, 34.44])
