let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().split('\n');

let t = parseInt(input[0]);
let ns = input[1].split(' ');

for (let i = 0; i < t; i++) {
    let n = Number(ns[i]);

    let sum = 0;
    for (let j = 1; j <= n/2; j++) {
        if (n % j === 0) {
            sum += j;
        }
    }

    if (sum === n) {
        console.log('Perfect');
    } else if (sum < n) {
        console.log('Deficient');
    } else {
        console.log('Abundant');
    }
}
