from turtle import*
speed(.00001)
bgcolor('white')
color("red")
hideturtle()
n=12
p=True
while True:
	circle(n)
	if p:
		n=n-3
	else:
		n=n+3

	if n==0 or n==60:
		p = not p
	left(1)
	forward(3)
done()
