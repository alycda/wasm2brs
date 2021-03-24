// Usage: node to_c_string.js < test.js > test.h
const fs = require("fs");
const text = fs.readFileSync(0, "utf-8");
let out = '';
for (const line of text.split("\n")) {
    out += '"' + line.replace(/\\/g, '\\\\').replace(/"/g, '\\"') + '\\n"\n';
}
fs.writeFileSync(1, out);