public class OOP {
    public static void main(String[] args) {
        student s1 = new student();
        s1.name = "Shreyansh";
        s1.email = "shreyansh@.com";
        s1.pNum = "+91_1234567890";
        s1.cgr = 10.0;
        s1.icpMarks = 100;
        s1.wDevMarks = 100;

        s1.display();
    }
}
    class student{

        String name;
        String email;
        String pNum;
        double cgr;
        int icpMarks;
        int wDevMarks;


        student(String name, String email, String pNum, double cgr, int icpMarks, int wDevMarks){
            this.name = name;
            this.email = email;
            this.pNum = pNum;
            this.cgr = cgr;
            this.icpMarks = icpMarks;
            this.wDevMarks = wDevMarks; 
        }
        public void display(){
            System.out.println("Name : " +this.name);
            System.out.println("pNum : " +this.pNum);
            System.out.println("Email : " +this.email);
            System.out.println("CGR : " +this.cgr);
            System.out.println("IcpMarks : " +this.icpMarks);
            System.out.println("Web_DevMarks : " +this.wDevMarks);
        }
        

    }

