/* 定义一个函数用来显示当前时间 */
function displayTime() {
	var elt = document.getElementById("clock");
	var now = new Date();
	elt.innerHTML = now.toLocaleTimeString();
	setTimeout(displayTime, 1000);
}

/* 页面在加载完毕后才会执行以下动作
	为了防止页面上的元素还没有加载好js代码就已经执行了
*/
window.onload = displayTime;