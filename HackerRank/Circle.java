public class Circle
{
	public Point c = new Point();
	public double r;
	public Circle()
	{
	}
	public Circle(Point c, double r)
	{
		this.c = new Point(c);
		this.r = r;
	}
	public final Point getPoint(double theta)
	{
		return new Point(c.x + Math.cos(theta) * r, c.y + Math.sin(theta) * r);
	}
}