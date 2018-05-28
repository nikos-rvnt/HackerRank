        //Write your code here

        Arrays.sort(s, new Comparator<String>() {
	        @Override public int compare(String s1, String s2) {
		                  if ((s1 == null) || (s2 == null)) {
		                      return 0;
		                  }
		                  BigDecimal b1 = new BigDecimal(s1);
		                  BigDecimal b2 = new BigDecimal(s2);
                
		                  return b2.compareTo(b1);
	                   }
	       }
        );
