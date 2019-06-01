var user = {
    name: "孙悟空",
    age: 500,
    skill: "变化"
};

// 把对象转化为json
var str = angular.toJson(user);
console.log(str);

// json转化为对象
var obj = angular.fromJson(str);
console.log(obj);
