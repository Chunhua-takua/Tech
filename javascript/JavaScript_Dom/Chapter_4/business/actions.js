function showPic(whichPic) {
    debugger;
    var source = whichPic.getAttribute("href");
    var placeholder = document.getElementById("placeholder");
    placeholder.setAttribute("src", source);

    var text = whichPic.getAttribute("title");
    var description = document.getElementById("description");
    description.childNodes[0].nodeValue = text;
}

function countBodyChildren() {
    // Get elements named 'body'
    var body_element = document.getElementsByTagName("body")[0];
    // alert (body_element.nodeType);
}

// Execute function countBodyChildren when the page is loaded
window.onload = countBodyChildren;
