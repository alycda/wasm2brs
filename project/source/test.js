
function hello() {
    return /*#__PURE__*/React.createElement("div", {
      style: 5
    }, /*#__PURE__*/React.createElement("td", null, "Hello world!"), "this is a test");
  }

for (var i = 0; i < 100; ++i) {
  hello();
}
console.log("DONE");
