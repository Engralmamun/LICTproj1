package tangible;

//----------------------------------------------------------------------------------------
//	Copyright © 2006 - 2020 Tangible Software Solutions, Inc.
//	This class can be used by anyone provided that the copyright notice remains intact.
//
//	This class provides the ability to initialize and delete array elements.
//----------------------------------------------------------------------------------------
public final class Arrays
{
	public static Point[] initializeWithDefaultPointInstances(int length)
	{
		Point[] array = new Point[length];
		for (int i = 0; i < length; i++)
		{
			array[i] = new Point();
		}
		return array;
	}

	public static Circle[] initializeWithDefaultCircleInstances(int length)
	{
		Circle[] array = new Circle[length];
		for (int i = 0; i < length; i++)
		{
			array[i] = new Circle();
		}
		return array;
	}

	public static <T extends java.io.Closeable> void deleteArray(T[] array)
	{
		for (T element : array)
		{
			if (element != null)
				element.close();
		}
	}
}