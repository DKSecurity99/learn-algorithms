function baseConverter(decimalNumber, base) {
  const restsOfDivision = [];
  let actualRest = undefined;
  let baseResult = '';

  const charsBase = [
    '0', '1', '2', '3', '4', 
    '5', '6', '7', '8', '9', 
    'A','B', 'C', 'D', 'E', 'F'
  ];

  while (decimalNumber > 0) {
    actualRest = Math.floor(decimalNumber % base);
    restsOfDivision.push(actualRest);
    decimalNumber = Math.floor(decimalNumber / base);
  }

  while (restsOfDivision.length > 0) {
    baseResult += charsBase[restsOfDivision.pop()];
  }

  return baseResult;
}

console.log(baseConverter(123, 16)); // Hexdecimal
console.log(baseConverter(123, 2)); // binary
console.log(baseConverter(123, 8)); // octal
