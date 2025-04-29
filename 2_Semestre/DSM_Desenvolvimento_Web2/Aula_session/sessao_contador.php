<?php
    session_start();

    // Verifica se a variavel de sessão "contador" já foi definida, caso já tenha sido criada aumenta em 1
    // isset(Is Set) verifica se a variavel já foi setada (criada)
    if(isset($_SESSION["contador"])) {
        $_SESSION["contador"]++;
    }
    // Caso a variavel ainda não tenha sido criada, cria ela e atribui o valor 1
    else {
        $_SESSION["contador"] = 1;
    }
?>

<h1>Contador de Acessos</h1>
<h2><?= $_SESSION["contador"]; ?></h2>