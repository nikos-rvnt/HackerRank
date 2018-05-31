let txt_num = document.getElementById("res");
var but = document.getElementById("btns");
var row = 1
/* This sets the action to perform on a click event */

/* When pressing C (clear button) */
btnClr.onclick = function() {
    txt_num.innerHTML = " ";
};
/* When pressing 0 button */
btn0.onclick = function(){
    if(txt_num.innerHTML.length>=38 && row===1){
        txt_num.innerHTML +="\n";
        row = 2;
    }
    txt_num.innerHTML +="0";  
};
/* When pressing 1 button */
btn1.onclick = function(){
    if(txt_num.innerHTML.length>=38 && row===1){
        txt_num.innerHTML +="\n";
        row = 2;
    }
    txt_num.innerHTML +="1";  
};
/* When pressing + button */
btnSum.onclick = function(){
    txt_num.innerHTML +=" + ";
    oper = 1;
};
/* When pressing - button */
btnSub.onclick = function(){
    txt_num.innerHTML +=" - ";
    oper = 2;
};
/* When pressing * button */
btnMul.onclick = function(){
    txt_num.innerHTML +=" * "; 
    oper = 3;
};
/* When pressing / button */
btnDiv.onclick = function(){
    txt_num.innerHTML +=" / ";  
    oper = 4;
};
/* When pressing = button */
btnEql.onclick = function(){
    var num1 = "";
    var num2 = "";
    var hlp = 0;
    let oper = 0;
    let txt = txt_num.innerHTML;
    
    for(var i=1; i<txt.length; i++){
        
        if(hlp == 0){
            
           if(txt[i]!=" " && txt[i]!='+' && txt[i]!='-' && txt[i]!='*' && txt[i]!='/' ){       
                num1 += txt[i];
           }else if(txt[i]==="+") {
               //txt_num.innerHTML = "42";
                hlp = 1;
                oper = 1;
                i++;
           }
            else if(txt[i]==='-'){
                hlp = 1;
                oper = 2;
                i++;    
            }
            else if(txt[i]==='*'){
                hlp = 1;
                oper = 3;
                i++;    
            }
            else if(txt[i]==='/'){
                hlp = 1;
                oper = 4;
                i++;    
            }
            else if(txt[i]===" "){
                //txt_num.innerHTML = "21";
            }
        }else{
            //txt_num.innerHTML = "48";
            num2 += txt[i];
        }
        //txt_num.innerHTML = num1;  
    }
    //txt_num.innerHTML = num2; 
    var first = parseInt(num1,2);
    var second = parseInt(num2,2);
    switch(oper){
           case 1:
                var out = first + second; 
                txt_num.innerHTML = out.toString(2);
                break;
           case 2:
                var out = first - second;
                txt_num.innerHTML = out.toString(2);
                break;
           case 3:
                var out = first*second;
                txt_num.innerHTML = out.toString(2);
                break;
           case 4:
                var out = first/second;
                txt_num.innerHTML = Math.floor(out).toString(2);
                break;
        default:
               txt_num.innerHTML = "0";
    }
};
