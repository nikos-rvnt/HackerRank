/* This assigns the element with id 'btn' to 'btn1' */
var btn1 = document.getElementById('btn');
var cnt_clk = 0;
/* This sets the action to perform on a click event */
btn1.onclick = function() {
    /* This changes the button's label */
    
    btn1.innerHTML = ++cnt_clk;
};
