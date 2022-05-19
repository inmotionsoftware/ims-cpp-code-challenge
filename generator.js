const { stringify } = require("querystring");

const n_chars = 10;
const n_sequence = 20;
const n_pairs = 100;

const all_characters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'];

function randomRange(min, max) {
    const diff = max - min;
    const idx = Math.floor(Math.random() * diff);
    return min + idx;
}

function randomValue(array) {
    return array[randomRange(0, array.length)];
}

var characterMap = {};
while (Object.keys(characterMap).length < n_chars) {
    const ch = randomValue(all_characters)
    characterMap[ch] = 1;
}

const characters = Object.keys(characterMap);
console.log("characters:", JSON.stringify(characters));

var pairs = {};


function recurse(pairs, max, ch1, ch2) {
    if (Object.keys(pairs).length >= max) { return; }

    const ch3 = randomValue(characters);
    const k0 = ch1 + ch2;
    if (pairs.hasOwnProperty(k0)) {
        return;
    }

    const k1 = ch1 + ch3;
    const k2 = ch3 + ch2;
    pairs[k0] = ch3;

    if (!pairs.hasOwnProperty(k1)) {
        recurse(pairs, max, ch1, ch3);
    }

    if (!pairs.hasOwnProperty(k2)) {
        recurse(pairs, max, ch3, ch2);
    }
}

while (Object.keys(pairs).length < n_pairs) {
    const ch1 = randomValue(characters);
    const ch2 = randomValue(characters);
    recurse(pairs, n_pairs, ch1, ch2);    
}

  console.log("--------------------------------------------");
  console.log("count:", Object.keys(pairs).length);
  console.log("pairs:", JSON.stringify(pairs));

const keys = Object.keys(pairs);
var sequence = "";
for (var i = 0; i < n_sequence/2; ++i) {
    const key = randomValue(keys);
    sequence += key;
}
console.log(sequence);

document.write(sequence);
for (const [key, value] of Object.entries(pairs)) {
    document.writeln(key, '->', value);
}