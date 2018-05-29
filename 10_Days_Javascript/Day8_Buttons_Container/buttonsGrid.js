/* This assigns each buttons id to a var */
/*var btn1 = document.getElementById('btn1');
var btn2 = document.getElementById('btn2');
var btn3 = document.getElementById('btn3');
var btn4 = document.getElementById('btn4');
var btn6 = document.getElementById('btn6');
var btn7 = document.getElementById('btn7');
var btn8 = document.getElementById('btn8');
var btn9 = document.getElementById('btn9');*/

var btns = document.getElementById('btns');

var temp = 0;
var temp2 = 0;

/* This sets the action to perform on a click event */
btns.onclick = function() {
    /* This rotate the buttons clock-wise with button-5 as a vertical axis */
    
    temp = btn2.innerHTML;
    btn2.innerHTML = btn1.innerHTML;
    temp2 = btn3.innerHTML;
    btn3.innerHTML = temp;
    
    temp = btn6.innerHTML;
    btn6.innerHTML = temp2;
    temp2 = btn9.innerHTML;
    btn9.innerHTML = temp; 
    
    temp = btn8.innerHTML;
    btn8.innerHTML = temp2;
    temp2 = btn7.innerHTML;
    btn7.innerHTML = temp;
    
    temp = btn4.innerHTML;
    btn4.innerHTML = temp2;
    temp2 = btn1.innerHTML;
    btn1.innerHTML = temp;
};
