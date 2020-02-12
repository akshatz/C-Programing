var multiples = function (n) {
    var sum = 0;
    for (var i = 1; i < n; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }
    console.log(sum);
};
