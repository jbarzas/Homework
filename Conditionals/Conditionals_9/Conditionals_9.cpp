
A.		(a || b) || ( a && b)
			1 || 0
answer				1

B.		!((!a) &&(a)) || (a && b)
			!((0 && 1) || 0)
				!(0 || 0)
answer				1

C.		!((5 || a) || (!b)) && (!(a) && b)
			!(1) || ( 1 && 1)
				!( 1)
answer			0

D.		a || b && a
answer		1

E.		!a&&b
answer		1