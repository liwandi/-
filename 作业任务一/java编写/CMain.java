package siti;

import java.util.Scanner;

public class CMain {

	/**
	 * @param args
	 */
	public static void main(String[] args) 
	{
		int y,m,d;
		// TODO Auto-generated method stub
		try
		{
			Scanner in=new Scanner(System.in);
			System.out.print("������:");
			y=in.nextInt();
			System.out.print("������:");
			m=in.nextInt();
			System.out.print("������:");
			d=in.nextInt();
			CDate date=new CDate(y,m,d);
			date.outCDate();
			if(!new Cexception(date).flag)
			{
				throw new Cexception(date);
			}
			else
				System.out.print("����������ȷ");
		}catch(Cexception e)
		{
			e.printStackTrace();
		}
	}

}

