// angular.bind(obj, f, args)
// 把方法f绑定到对象obj上，并传入args作为f的默认入参

var obj = {name: 'sunwukong', age: 500};
var fn = function(adj) {
    console.log(obj.name + "is " + obj.age + " year old");
    console.log("this guy is " + adj);
};

var f = angular.bind(obj, fn, 'freaking');
f();
