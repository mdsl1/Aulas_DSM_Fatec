<?php
    $usuario = strtolower($_POST["usuario"]);
    $senha = $_POST["senha"];

    if($usuario == "marcos" && $senha == "1234"){
        $logado = true;
        $usuario = ucfirst($usuario);
    }
    else{
        $logado = false;
    }
?>
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
    </head>
    <body>
        <h1>Login no Sistema</h1>
        <?php if($logado) { ?>
            <h2>Bem vindo(a) ao Sistema, <?= $usuario ?>!</h2>
        <?php } else { ?>
            <h2>Acesso negado, usuário ou senha inválidos!</h2>
        <?php } ?>
    </body>
</html>
