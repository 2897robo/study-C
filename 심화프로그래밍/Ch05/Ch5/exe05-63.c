/* SEND + MORE = MONEY */ 
#include <stdio.h>

int main()
{
	int s=9, e, n, d=7, m, o, r=8, y=2;
	int money;
	printf("send + more = money\n");
	for(e=0; e <10; e++)
		for(n=0; n<10; n++)
			for(m=1; m<10; m++)
				for(o=0; o<10; o++) {
					money = (s+m)*1000 + (e+o)*100 + (n+r)*10 + d+e;
		 			if(s==e || s==n || s==m || s==o)
						continue;
					if(e==n || e==d || e==m || e==o || e==r || e==y)
						 continue;
					if(n==d || n==m || n==o || n==r || n==y)
						continue;
					if(d==m || d==o)
						continue;
					if(m==o || m==r || m==y)
						continue;
					if(o==r || o==y)
						continue;
					if(money == m*10000 + o*1000 + n*100 + e*10 + y) {
						printf("%1d%1d%1d%1d + ", s,e,n,d);
						printf("%1d%1d%1d%1d",m,o,r,e);
						printf(" = %1d%1d%1d%1d%1d\n", m,o,n,e,y);
						break;
					}
		     	}
}

/*
#include <stdio.h>

int main()
{
	int send, more;
	int money;
	int s, e, n, d, m, o, r, y;

	for(send = 9007; send < 10000; send+=10) { // s(천의 자리)가 9이고, d(의 자리)가 7이므로 
		s = (send/1000)%10; 	e = (send/100)%10;
		n = (send/10)%10; 		d = send%10;

		if( s == e || s == n || s == d ) continue;
		if( e == n || e == d || n == d ) continue;
		for(more = 1085; more < 2000; more+=100) {
		// m은 자연적으로 1이고, 위에서 d가 7이므로 1의 자리는 5이다. 
			m = (more/1000)%10; 	o = (more/100)%10;
			r = (more/10)%10; 		e = more%10;
			if( m == o || m == r || m == e ) continue;
			if( o == r || o == e || r == e ) continue;

			money = send + more;

			m = (money/10000)%10; 	n == (money/100)%10;
			o = (money/1000)%10; 	e = (money/10)%10;
			y = money%10;

			if( m == n || m == y || o == n) continue;
			if( o == y || n == y || e == y) continue;
			if( s == y || s == r || s == n || n == r ) continue;

			if( (more/100)%10 == (money/1000)%10 )
				if( (money/100)%10 == (send/10)%10 )
					if((send/100)%10 == more%10 && more%10 == (money/10)%10){
						printf("send + more = money\n");
						printf("%d + %d = %d\n", send, more, money);
					}
		}
	}
}
*/
