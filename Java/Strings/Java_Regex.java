//Write your code here
class MyRegex{

    /** to \\d{1,2} gia opoiodhpote monopsifio h dipsifio arithmo, to (0|1)\\d{2} gia tripsifio pou ksekinaei me 0 h 1
    to 2[0-4]\\d gia arithmous metaksy 200 kai 249 (to d anaparista to [0-9]) kai to 25[0-5] gia arithmo metaksy 250-255*/
    String ipRegex = "(\\d{1,2}|(0|1)\\d{2}|2[0-4]\\d|25[0-5])";
    public String pattern = ipRegex + "." + ipRegex + "." + ipRegex + "." + ipRegex ;
    
}
