class Add{
    public static void add(int... values){
        int sum = 0;
        ArrayList ali = new ArrayList();
        for(int val:values){
            sum = sum + val;
            ali.add(val);
        }
        for(int i=0;i<ali.size();i++){
            if(i!=(ali.size()-1))
                System.out.print(ali.get(i)+"+");
            else
                System.out.print(ali.get(i));
        }
        System.out.println("="+sum);
    }
    
}
