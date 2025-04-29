<?php
    $dados = [];
    $dados["nome"] = strtoupper($_GET["name"]);// Retorna o parâmetro em letra maiuscula
    $dados["email"] = htmlspecialchars($_GET["email"]); // Filtra os dados
    $dados["senha"] = md5($_GET["password"]); // "Criptografa" a senha
    $dados["cidade"] = $_GET["city"];
    $dados["estado"] = $_GET["state"];
    $dados["nascimento"] = date("d/m/Y",strtotime($_GET["birthday"])); // "Converte" a data para o formato que usamos
?>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Cadastro</title>
    </head>
    <body>
        <h1>Visualização de Cadastro</h1>
        <ul>
            <?php foreach( $dados AS $info ){ echo "<li>$info</li>"; }; ?>
        </ul>
    </body>
</html>