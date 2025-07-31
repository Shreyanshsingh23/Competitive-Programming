public class OOP {
    int op;
    int cd;
    String n;
    public static void main(String[] args) {
        student s1 = new student("Shreyansh", "shreyansh@.com", "+91_1234567890", 10.0, 100, 100);

        s1.display();



        // Object creation for OOP Class
        System.out.println("For OOP Class --> ");
        OOP oop = new OOP("ICP", 45, 78);
        oop.printt();
    }

    OOP(String n, int op, int cd){
        this.n = n;
        this.op = op;
        this.cd = cd;
    }

    void printt(){
        System.out.println("Name : " +this.n);
        System.out.println("Operation : " +this.op);
        System.out.println("Code : " +this.cd);
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

