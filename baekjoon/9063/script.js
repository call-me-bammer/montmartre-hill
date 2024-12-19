let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = parseInt(input[0]);
let x = [];
let y = [];

for (let i = 0; i < n; i++) {
    let coordinate = input[i+1].split(' ');
    x.push(parseInt(coordinate[0]));
    y.push(parseInt(coordinate[1]));
}

let minX = Math.min(...x);
let maxX = Math.max(...x);
let minY = Math.min(...y);
let maxY = Math.max(...y);

let area = (maxX - minX) * (maxY - minY);
console.log(area);
