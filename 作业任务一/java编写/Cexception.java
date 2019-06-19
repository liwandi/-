package siti;

public class Cexception extends Exception
{
	String reason;
	
	boolean flag=true;
	
	public Cexception()
	{
		System.err.print(reason);
	}
	
	public Cexception(CDate date)
	{
		if(date.year<=0||date.month<=0||date.day<=0)
		{
			reason="年、月、日不得为负数";
			flag=false;
		}
		else
		{
			if(date.month==2)
			{
				if(date.checkLeap())
				{
					if(date.day>29)
					{
						reason="闰年下二月天数不能超过二十九天";
						flag=false;
					}	
				}
				else
					if(date.day>28)
					{
						reason="平年下二月天数不能超过二十八天";
						flag=false;
					}
			}
			else if(date.month==1||date.month==3||date.month==5||date.month==7||date.month==8
					||date.month==10||date.month==12)
			{
				if(date.day>31)
				{
					reason="该月天数赋值超过上限";
					flag=false;
				}
			}
			else if(date.month==3||date.month==6||date.month==9||date.month==11)
			{
				if(date.day>30)
				{
					reason="该月天数赋值超过上限";
					flag=false;
				}
			}
			else
			{
				reason="月的赋值应在1-12之间";
				flag=false;
			}
		}
		System.err.print(reason);
	}
	
	public void check(CDate date)
	{
		if(date.year<=0||date.month<=0||date.day<=0)
		{
			reason="年、月、日不得为负数";
			flag=false;
		}
		else
		switch(date.month)
		{
			case 2:
				if(date.checkLeap())
				{
					if(date.day>29)
					{
						reason="闰年下二月天数不能超过二十九天";
						flag=false;
						break;
					}	
				}
				else
					if(date.day>28)
					{
						reason="平年下二月天数不能超过二十八天";
						flag=false;
						break;
					}
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(date.day>31)
				{
					reason="该月天数赋值超过上限";
					flag=false;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(date.day>30)
				{
					reason="该月天数超过上限";
					flag=false;
				}
				break;
			default:
				reason="月的赋值应在1-12之间";
				flag=false;
				
		}
		
	}
	
	public Cexception(String reason)
	{
		super(reason);
	}
	public void reason()
	{
		
	}
}

