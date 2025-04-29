let body = document.querySelector("body");
let p = document.querySelector("p");
let btn = document.querySelector("button");
let selector = document.getElementById("themeSelector");

btn.onclick = () => {
    let nome = prompt("Qual o seu nome?");
    p.textContent = `Bem vindo(a), ${nome}!`
};

selector.onchange = () =>{
    if(selector.value == "Escuro"){
        body.style.backgroundColor = "#000";
        body.style.color = "#fff";
    } 
    else{
        body.style.backgroundColor = "#fff";
        body.style.color = "#000";
    }
};