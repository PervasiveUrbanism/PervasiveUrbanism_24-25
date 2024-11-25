import csv
with open('.\\csv\\data.csv', newline='') as csvfile:
	reader = csv.reader(csvfile,delimiter=',')
	for row in reader:
		print(', '.join(row))
