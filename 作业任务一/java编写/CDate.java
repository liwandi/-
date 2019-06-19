package siti;

public class CDate 
{
	public int year,month,day;
	
	public CDate()
	{
		
	}
	
	public CDate(int y,int m,int d)
	{
		year=y;
		month=m;
		day=d;
	}
	
	public void setCDate(int y,int m,int d) throws Cexception
	{
		this.year=y;
		this.month=m;
		this.day=d;
	}
	
	public void outCDate()
	{
		System.out.print(month);
		System.out.print("/"+day);
		System.out.print("/"+year);
		System.out.println();
	}
	
	public boolean checkLeap()
	{
		if(year%4==0)
		{
			if(year%400==0)
				return true;
			else if(year%100==0)
				return false;
			else
				return true;
		}
		else
			return false;
	}
}

