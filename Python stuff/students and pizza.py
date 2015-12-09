from Pizza import *

def main():
	names = open("classNames.txt", 'r')
	file = names.readlines()
	file.sort()
	for jeremy in file:
		print(jeremy)
		
	size = input("What is the size(radius) of the pizza? ")
	
	x = float(size)
	
	singleSlice = pizzaMayne(x)
	print("The price fo a single slice is: $", singleSlice )

main()