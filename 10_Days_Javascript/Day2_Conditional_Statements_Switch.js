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
function getLetter(s) {
    let letter;
    // Write your code here
    switch (0) {
        case "aeiou".search(s.charAt(0)):
        //case "aeiou".match(s.charAt(0)).index:
            letter = 'A'
            break;
        case "bcdfg".search(s.charAt(0)):
        //case "bcdfg".match(s.charAt(0)).index:
            letter = 'B';
            break;
        case "hjklm".search(s.charAt(0)):
        //case "hjklm".match(s.charAt(0)).index:
            letter = 'C';
            break;
        case "npqrstvwxyz".search(s.charAt(0)):
        //case "npqrstvwxyz".match(s.charAt(0)).index:
            letter = 'D';
            break;
        default:
            letter = 'D';
    }
    return letter;
}

function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}
