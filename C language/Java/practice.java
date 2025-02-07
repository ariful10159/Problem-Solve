/*import java.util.Scanner;
 
public class practice {
 
 public static void main(String[] args) {

  Scanner in = new Scanner(System.in);
   
  
  System.out.print("Input first number: ");

  int num1 = in.nextInt();
   
  
  System.out.print("Input second number: ");

  int num2 = in.nextInt();
  int temp;
  temp=num1;
  num1=num2;
  num2=temp;
 
  System.out.println(+num1 +","+num2);
 }
} */
/* 
import java.util.Scanner;
public class practice{
    public static void main(String[] args)
    {
        int decimal,temp,rem;
        String hexa = "";
        Scanner in= new Scanner(System.in);

       
         
        decimal = in.nextInt();

        char ch[] = {'0','1','2','3','4','5','6','7'};

        

        while(decimal!=0)
        {
            rem=decimal%8;
            hexa=ch[rem] + hexa;
            decimal = decimal/8;

        }

        System.out.println(hexa);
    }
}*/

/*class one 
{ 
  
    void print()
 {
 System.out.println("This is parent class");
 }
}

class two extends one {
    void print_two()
    {
        System.out.println("This is parent class");
    }
}
public class practice 
{
    public static void main(String[] args)
    {
        one obOne = new one();
        obOne.print();
        two obj = new two();
        obj.print_two();
        obj.print();
    }
}*/

class parentclass {
    private void parentMethod() {
        System.out.println("This is parent class");
    }

}

class child extends parentclass {
    public void childMethod() {
        System.out.println("this is child method ");
    }
}

public class practice {
    public static void main(String[] args) {
        parentclass p = new parentclass();
        child c = new child();
        c.childMethod();
    }
}