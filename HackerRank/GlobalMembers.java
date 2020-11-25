//====================================================================================================
//The Free Edition of C++ to Java Converter limits conversion output to 100 lines per file.

//To purchase the Premium Edition, visit our website:
//https://www.tangiblesoftwaresolutions.com/order/order-cplus-to-java.html
//====================================================================================================

public class GlobalMembers
{
	//C++ TO JAVA CONVERTER NOTE: The following #define macro was replaced in-line:
	//ORIGINAL LINE: #define mm(a,b) memset(a,b,sizeof(a))
	public static final double eps = 1e-9;
	public static final double PI = acos(-1.0);
	public static final int MAXN = 105;
	public static int cnt;


//C++ TO JAVA CONVERTER TODO TASK: The following operator cannot be converted to Java:
	Point operator + (Point A, Point B)
	{
		return new Point(A.x + B.x, A.y + B.y);
	}

//C++ TO JAVA CONVERTER TODO TASK: The following operator cannot be converted to Java:
	Point operator - (Point A, Point B)
	{
		return new Point(A.x - B.x, A.y - B.y);
	}

//C++ TO JAVA CONVERTER TODO TASK: The following operator cannot be converted to Java:
	Point operator * (Point A, double p)
	{
		return new Point(A.x * p, A.y * p);
	}

	private Point divide(Point A, double p)
	{
		return new Point(A.x / p, A.y / p);
	}

	public static int dcmp(double x)
	{
		if (Math.abs(x) < eps)
		{
			return 0;
		}
		else
		{
			return x < 0 ? -1 : 1;
		}
	}

	private boolean lessThan(final Point A, final Point B)
	{
		return dcmp(A.x - B.x) < 0 || (dcmp(A.x - B.x) == 0 && dcmp(A.y - B.y) < 0);
	}

	private boolean greaterThan(final Point A, final Point B)
	{
		return dcmp(A.x - B.x) > 0 || (dcmp(A.x - B.x) == 0 && dcmp(A.y - B.y) > 0);
	}

	private boolean equalsTo(final Point a, final Point b)
	{
		return dcmp(a.x - b.x) == 0 && dcmp(a.y - b.y) == 0;
	}

	public static double Cross(Point A, Point B)
	{
		return A.x * B.y - A.y * B.x;
	}

	public static double PointDis(Point a, Point b)
	{
		return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
	}

	public static double dist(Point a,Point b)
	{
		return Math.sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	}
	public static int graham(Point[] p, int n, Point[] ch)
	{
		if (n <= 2)
		{
			return 0;
		}
		int top = 0;
		sort(p, p + n);

		ch[top] = p[0];
		ch[++top] = p[1];
		ch[++top] = p[2];

		top = 1;

		for (int i = 2; i < n; ++i)
		{
			while (top != 0 && dcmp(Cross(ch[top] - ch[top - 1], p[i] - ch[top - 1])) <= 0)
			{
				--top;
			}
			ch[++top] = p[i];
		}
		int len = top;
		ch[++top] = p[n - 2];
		for (int i = n - 3; i >= 0; --i)
		{
			while (top > len && dcmp(Cross(ch[top] - ch[top - 1], p[i] - ch[top - 1])) <= 0)
			{
				--top;
			}
			ch[++top] = p[i];
		}
		return top;
	}
	public static boolean getTangentPoints(Point p, Circle C, Point[] tps, int idd)
	{
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: double dis = sqrt(PointDis(p, C.c));
		double dis = Math.sqrt(PointDis(new Point(p), new Point(C.c)));
		int aa = dcmp(dis - C.r);
		if (aa < 0)
		{
			return false;
		}
		else if (aa == 0)
		{
			return false;
		}
		double base = Math.atan2(p.y - C.c.y, p.x - C.c.x);
		double ang = Math.acos(C.r / dis);

		tps[cnt] = C.getPoint(base - ang), tps[cnt++].id = idd;
		tps[cnt] = C.getPoint(base + ang), tps[cnt++].id = idd;
		return true;
	}
	public static void makeCircle(Circle c1, Circle c2, Point[] p, int idd)
	{
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: double d = sqrt(PointDis(c1.c, c2.c)), dr = c1.r - c2.r;
		double d = Math.sqrt(PointDis(new Point(c1.c), new Point(c2.c)));
		double dr = c1.r - c2.r;
		double b = Math.acos(dr / d);
		double a = Math.atan2(c2.c.y - c1.c.y, c2.c.x - c1.c.x);
		double a1 = a - b;
		double a2 = a + b;
		p[cnt] = new Point(Math.cos(a1) * c1.r, Math.sin(a1) * c1.r) + c1.c;
		p[cnt++].id = idd;
		p[cnt] = new Point(Math.cos(a2) * c1.r, Math.sin(a2) * c1.r) + c1.c;
		p[cnt++].id = idd;
	}

	public static double DisOnCircle(Point a, Point b, Circle c)
	{
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: Point o = c.c;
		Point o = new Point(c.c);
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: double A = sqrt(PointDis(o, a));
		double A = Math.sqrt(PointDis(new Point(o), new Point(a)));
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: double B = sqrt(PointDis(o, b));
		double B = Math.sqrt(PointDis(new Point(o), new Point(b)));
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: double C = sqrt(PointDis(a, b));
		double C = Math.sqrt(PointDis(new Point(a), new Point(b)));
		double alpha = Math.acos((A * A + B * B - C * C) / (2.0 * A * B));
		if (dcmp(Cross(o - a, o - b)) < 0)
		{
			return alpha * c.r;
		}
		else
		{
			return (2.0 * PI - alpha) * c.r;
		}
	}

	public static double getarea(Point[] p, int n)
	{
		double area = 0;
		p[n] = p[0];
		for (int i = 0;i < n;i++)
		{
			area += p[i].x * p[i + 1].y - p[i + 1].x * p[i].y;
		}
		return area * 0.5;
	}

	public static double getarea2(Point a,Point b,Point c,Point d)
	{
		double area = 0;
//C++ TO JAVA CONVERTER TODO TASK: The following line was determined to contain a copy constructor call - this should be verified and a copy constructor should be created:
//ORIGINAL LINE: area+=Cross(a,b)+Cross(b,c)+Cross(c,d)+Cross(d,a);
		area += Cross(new Point(a), new Point(b)) + Cross(new Point(b), new Point(c)) + Cross(new Point(c), new Point(d)) + Cross(new Point(d), new Point(a));
		return area * 0.5;
	}

	public static void main(String[] args)
	{
		int n;
		int cntc;
		int m;
		int nn;
		int e;
		double x;

//====================================================================================================
//End of the allowed output for the Free Edition of C++ to Java Converter.

//To purchase the Premium Edition, visit our website:
//https://www.tangiblesoftwaresolutions.com/order/order-cplus-to-java.html
//====================================================================================================
