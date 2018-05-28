'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    nums.sort();
    /*var maxi = nums[nums.length - 1];
    var i = nums.length-1;
    for(let i=0;i<nums.length;i++){
        console.log(nums[i]);
    }
    for(i;i>=0;i--){
        if(nums[i]<maxi){
            return nums[i];
        }
           
    }*/
    var fir = 0;
    var sec = 0;
    for (let i=0; i < nums.length; i++) {

        if (nums[i] > fir) {
            sec = fir;
            fir = nums[i];
        }
        if (nums[i] > sec && nums[i] < fir) {
            sec = nums[i];
        }
    }

    return sec;
}

function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}
