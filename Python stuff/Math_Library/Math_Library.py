import math
from math import  *

"""==================== 2D Vector Stuffs ===================="""

class Vector2D():
    def __init__(self, a, b):
        self.x = a
        self.y = b

    def answer(self):
        print("(", self.x, ",", self.y, ")")

    def add(self, other):
        sum = Vector2D(0,0)
        sum.x = self.x + other.x
        sum.y = self.y + other.y
        return sum

    def sub(self, other):
        dif = Vector2D(0,0)
        dif.x = self.x - other.x
        dif.y = self.y - other.y
        return dif

    def mul(self, other):
        product = Vector2D(0,0)
        product.x = self.x * other.x
        product.y = self.y * other.y
        return product

    def div(self, other):
        quotient = Vector2D(0,0)
        quotient.x = self.x / other.x
        quotient.y = self.y / other.y
        return quotient

    def mag(self):
        magnitude = Vector2D(0,0)
        magnitude = math.sqrt((self.x * self.x) + (self.y * self.y))
        return magnitude

    def norm(self):
        normalize = Vector2D(0,0)
        mag = math.sqrt((self.x * self.x) + (self.y * self.y))
        normalize.x = self.x / mag
        normalize.y = self.y / mag
        return normalize

    def dotP(self, other):
        dotproduct = Vector2D(0,0)
        dotproduct = (self.x * other.x) + (self.y * other.y)
        return dotproduct

    def lerp(self, other):
        lerp = Vector2D(0,0)
        lerp.x = self.x + 0.5 * (other.x - self.x)
        lerp.y = self.y + 0.5 * (other.y - self.y)
        return lerp

"""==================== 3D Vector Stuffs ===================="""

class Vector3D():
    def __init__(self, a, b, c):
        self.x = a
        self.y = b
        self.z = c

    def answer(self):
        print("(", self.x, ",", self.y, ",", self.z, ")")

    def add(self, other):
        sum = Vector3D(0,0,0)
        sum.x = self.x + other.x
        sum.y = self.y + other.y
        sum.z = self.z + other.z
        return sum

    def sub(self, other):
        dif = Vector3D(0,0,0)
        dif.x = self.x - other.x
        dif.y = self.y - other.y
        dif.z = self.z + other.z
        return dif

    def mul(self, other):
        product = Vector3D(0,0,0)
        product.x = self.x * other.x
        product.y = self.y * other.y
        product.z = self.z * other.z
        return product

    def div(self, other):
        quotient = Vector3D(0,0,0)
        quotient.x = self.x / other.x
        quotient.y = self.y / other.y
        quotient.z = self.z / other.z
        return quotient

    def mag(self):
        magnitude = Vector3D(0,0,0)
        magnitude = math.sqrt((self.x * self.x) + (self.y * self.y) + (self.z * self.z))
        return magnitude

    def norm(self):
        normalize = Vector3D(0,0,0)
        mag = math.sqrt((self.x * self.x) + (self.y * self.y) + (self.z * self.z))
        normalize.x = self.x / mag
        normalize.y = self.y / mag
        normalize.z = self.z / mag
        return normalize

    def dotP(self, other):
        dotproduct = Vector3D(0,0,0)
        dotproduct = (self.x * other.x) + (self.y * other.y) + (self.z * other.z)
        return dotproduct

    def lerp(self, other):
        lerp = Vector3D(0,0,0)
        lerp.x = self.x + 0.5 * (other.x - self.x)
        lerp.y = self.y + 0.5 * (other.y - self.y)
        lerp.z = self.z + 0.5 * (other.z - self.z)
        return lerp

"""==================== 4D Vector Stuffs ===================="""

class Vector4D:
	def __init__(self, a = 0, b = 0, c = 0, d = 0):
		self.x = a
		self.y = b
		self.z = c
		self.a = d
		
	def answer(self):
		print("(", self.x, ",", self.y, ",", self.z, ",", self.a, ")")
		
	def add(self, other):
		sum = Vector4D()
		sum.x = self.x + other.x
		sum.y = self.y + other.y
		sum.z = self.z + other.z
		sum.a = self.a + other.a
		return sum
		
	def sub(self, other):
		dif = Vector4D()
		dif.x = self.x - other.x
		dif.y = self.y - other.y
		dif.z = self.z - other.z
		dif.a = self.a - other.a
		return dif
		
	def div(self, other):
		quotient = Vector4D()
		quotient.x = self.x / other.x
		quotient.y = self.y / other.y
		quotient.z = self.z / other.z
		quotient.a = self.a / other.a
		return quotient
		
	def mul(self, other):
		product = Vector4D()
		product.x = self.x * other.x
		product.y = self.y * other.y
		product.z = self.z * other.z
		product.a = self.a * other.a
		return product
		
	def mag(self):
		magnitude = Vector4D()
		magnitude = math.sqrt((self.x * self.x) + (self.y * self.y) + (self.z * self.z) + (self.a * self.a))
		return magnitude
		
	def norm(self):
		normalize = Vector4D()
		mag = math.sqrt((self.x * self.x) + (self.y * self.y) + (self.z * self.z) + (self.a * self.a))
		normalize.x = self.x / mag
		normalize.y = self.y / mag
		normalize.z = self.z / mag
		normalize.a = self.a / mag
		decimalpoints = Vector4D()
		decimalpoints.x = format(normalize.x, '.9f')
		decimalpoints.y = format(normalize.y, '.9f')
		decimalpoints.z = format(normalize.z, '.9f')
		decimalpoints.a = format(normalize.a, '.9f')
		return decimalpoints
		
	def dotP(self, other):
		dotproduct = Vector4D()
		dotproduct = (self.x * other.x) + (self.y * other.y) + ( self.z * other.z) + (self.a * other.a)
		return dotproduct
		
	def lerp(self, other):
		lerp = Vector4D()
		lerp.x = self.x + 0.5 * (other.x - self.x)
		lerp.y = self.y + 0.5 * (other.y - self.y)
		lerp.z = self.z + 0.5 * (other.z - self.z)
		lerp.a = self.a + 0.5 * (other.a - self.a)
		return lerp