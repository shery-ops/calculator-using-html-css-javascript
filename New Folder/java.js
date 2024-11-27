let currentInput = "";

    // Output element
    // const output = document.getElementById("output");
    var ans = document.getElementById("ans");
    let y = 0;
    ans.innerHTML = y;
    let array = [];

    console.log(array);
    function press(n) {
        currentInput += n;
      console.log(n);
      ans.innerHTML = currentInput;
      array.push(n);
    }

    function calculate(){
      try {
        console.log(currentInput)
        let result = eval(currentInput)
        ans.innerHTML  = result
        console.log(result)
      } catch (error) {
       ans.innerHTML = "<span style='color:red'>expression invalid </span>" 
      }
        
    }
    function clearAll(){
      currentInput = "";
      ans.innerHTML = "0";
      array = [];
    }