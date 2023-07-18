function getTanFromDegrees(degrees) {
  return Math.tan(degrees * Math.PI/180);
}

console.log(getTanFromDegrees(0));
// expected output: 0

console.log(getTanFromDegrees(45));
// expected output: 0.9999999999999999

console.log(getTanFromDegrees(90));
// expected output: 16331239353195370
gaia@gaia-MS-7B79:~/Documents/All_for_one$ node auto_pilote.js
main valor: 0
return Math.floor(Math.random() * Math.floor(max));
  }
  
  console.log(getRandomInt(3));
  // expected output: 0, 1 or 2: 0.5
  
  console.log(getRandomInt(1));
  // expected output: 0
  
  console.log(Math.random());
  // expected output: a number between 0 and 1 = result'`1.5'`function getRandomInt(max) {
    return Math.floor(Math.random() * Math.floor(max));
  }
    delta'`1.5'`function getRandomInt(max) { equivalent to getRandomInt(1)
    return Math.floor(Math.random() * Math.floor(max));
    De_ter(global.jasmine._wallabyUndoSpies = function () {
      if (global.jasmine._wallabySpies) {
        global.jasmine._wallabySpies.forEach(function (spy) {
          spy.and.callThrough();
        });
        delete global.jasmine._wallabySpies;
      }
    });console.log(Math.sign(3));
    // expected output: 1
    
    console.log(Math.sign(-3));
    // expected output: -1
    
    console.log(Math.sign(0));
    // expected output: 0
    
    console.log(Math.sign('-3'));
    // expected output: -1
    console.log(Math.sign('foo'));
    // expected output: NaN 
    console.log(Math.sign());
    // expected output: NaN
    console.log(Math.sign(''));
    // expected output: 0
    console.log(Math.sign(true));
    // expected output: 1
    console.log(Math.sign(false));
    // expected output: 0
    console.log(Math.sign(null));
    // expected output: 0
    console.log(Math.sign('9'));
    // expected output: 1
    console.log(Math.sign('foo'));
    // expected output: NaN
    console.log(Math.sign());
    // expected output: NaN
    console.log(Math.sign(NaN));
    // expected output: NaN
    console.log(Math.sign('string'));
    // expected output: NaN
    console.log(Math.sign());
    // expected output: NaN
    console.log(Math.sign(undefined));
    // expected output: NaN
    console.log(Math.sign({}));
    // expected output: NaN
    console.log(Math.sign([1]));
    // expected output: 1
    console.log(Math.sign([0]));
    // expected output: 0
    console.log(Math.sign([0, 1]));
    // expected output: NaN
    console.log(Math.sign([NaN]));
    // expected output: NaN
    console.log(Math.sign([NaN, 1]));
    // expected output: NaN
    console.log(Math.sign([undefined]));
    // expected output: NaN
    console.log(Math.sign([undefined, 1]));
    // expected output: NaN
    console.log(Math.sign([null]));
    // expected output: 0
    function getCircleY(radians, radius) {
        return Math.sin(radians) * radius;
      }
      
      console.log(getCircleY(1, 10));
      // expected output: 8.414709848078965
      
      console.log(getCircleY(2, 10));
      // expected output: 9.092974268256818
      
      console.log(getCircleY(Math.PI, 10));
      // expected output: 1.2246467991473533e-15
        function getCircleX(radians, radius) {
            return Math.cos(radians) * radius;
        }