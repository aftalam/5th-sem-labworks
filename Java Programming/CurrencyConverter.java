//program to implement currency converter in java

import java.util.*;
import java.text.DecimalFormat;

class CurrencyConverter
{
    public static void main(String[] args) 
    {
        double rupee,dollar,pound,code,euro,yen;
        DecimalFormat f = new DecimalFormat("##.###");
 
        Scanner sc = new Scanner(System.in);
 
        System.out.println("Enter the Currency Code :\n1:Rupees\n2:Dollar\n3:Pound\n4:Euro\n5:Yen\nCode :"); 
        code=sc.nextInt();
 
        //For Rupee Conversion
        if(code == 1)
        {
            System.out.println("Enter Amount in Rupees :");
            rupee = sc.nextFloat();
                 
            dollar = rupee / 71.60;
            System.out.println(" Dollar : "+f.format(dollar));
 
            pound = rupee / 92.16;
            System.out.println(" Pound : "+f.format(pound));
 
            euro = rupee / 79.00;
            System.out.println(" Euro : "+f.format(euro));
 
             yen = rupee / 0.66;
            System.out.println(" Yen : "+f.format(yen));
 
        }
 
        //For Dollar Conversion
        else if (code == 2)
        {
            System.out.println("Enter Amount in Dollar :");
            dollar = sc.nextFloat();
 
            rupee = dollar * 71.60;
            System.out.println(" Rupees : "+f.format(rupee));
 
            pound = dollar * 0.78;
            System.out.println(" Pound : "+f.format(pound));
                        
            euro = dollar * 0.90;
            System.out.println(" Euro : "+f.format(euro));
               
            yen = dollar * 109.08;
            System.out.println(" Yen : "+f.format(yen));
        }
 
        //For Pound Conversion
        else if(code == 3)
        {
            System.out.println("Enter Amount in Pound :");
            pound = sc.nextFloat();
 
            rupee = pound * 92.14;
            System.out.println(" Rupees : "+f.format(rupee));
                        
            dollar = pound * 1.30;
            System.out.println(" Dollar : "+f.format(dollar));
 
            euro = pound * 1.16;
            System.out.println(" Euro : "+f.format(euro));
 
            yen = pound * 140.34;
            System.out.println(" Yen : "+f.format(yen));
        }
 
        //For Euro Conversion
        else if(code == 4)
        {
            System.out.println("Enter Amount in Euro :");
            euro = sc.nextFloat();
 
            rupee = euro * 79.00;
            System.out.println(" Rupees : "+f.format(rupee));
                        
            dollar = euro * 1.10;
            System.out.println(" Dollar : "+f.format(dollar));
 
            pound = euro * 0.86;
            System.out.println(" Pound : "+f.format(pound));
 
            yen = euro * 120.36;
            System.out.println(" Yen : "+f.format(yen));
        }
 
        //For Yen Conversion
        else if(code == 5)
        {
            System.out.println("Enter Amount in Yen :");
            yen = sc.nextFloat();
 
            rupee = yen * 0.66;
            System.out.println(" Rupees : "+f.format(rupee));
 
            dollar = yen * 0.0092;
            System.out.println(" Dollar : "+f.format(dollar));
 
            pound = yen * 0.0072;
            System.out.println(" Pound : "+f.format(pound));
 
            euro = yen * 0.0084;
            System.out.println(" Euro : "+f.format(euro));
        }
 
        else
            System.out.println(" Invalid Code ! ");
    }
}