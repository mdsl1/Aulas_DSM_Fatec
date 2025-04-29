<?php
    session_start();

    if(!isset($_SESSION["admin"])) {
        header("Location: login_admin.php");
    }
?>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Área Administrativa</title>
    </head>
    <body>
        <h1>Área Administrativa - Miner's Shopping</h1>
        <p>Bem vindo(a), <?= $_SESSION["admin"]; ?></p>
        <ul>
            <li><a href="cadastrar_produto.php">Cadastrar produto</a></li>
            <li><a href="listar_produtos.php">Listar produtos cadastrados</a></li>
            <li><a href="logout.php">Sair do sistema</a></li>
        </ul>
    </body>
</html>