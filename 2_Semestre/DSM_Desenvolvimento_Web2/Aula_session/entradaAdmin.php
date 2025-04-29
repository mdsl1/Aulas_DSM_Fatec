<?php
    session_start();
    $usuario = ucfirst($_SESSION["usuario"]);
    
    if(!isset($_SESSION["logado"]) || $_SESSION["logado"] == false) {
        // Redireciona o usuário para a página(local) escolhido
        header("Location: login.php");
    }

?>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Admin</title>
    </head>
    <body>
        <h1>Area Restrita para Administradores</h1>
        <h2>Bem vindo(a), <?= $usuario ?></h2>
        <ul>
            <li><a href="#">Incluir Conteúdo</a></li>
            <li><a href="#">Alterar Conteúdo</a></li>
            <li><a href="#">Excluir conteúdo</a></li>
        </ul>
    </body>
</html>