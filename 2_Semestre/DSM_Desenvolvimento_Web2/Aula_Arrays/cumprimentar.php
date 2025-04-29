<?php
    $nome = $_GET["name"];
    $cidade = $_GET["city"];
?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <title>Uso dos Dados do Formulário</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h1>Dados do Formulário Processados com PHP</h1>
        <p>Prazer em conhecê-lo(a), <?php echo $nome; ?>!</p>
        <p>Gosto muito de <?php echo $cidade; ?>.</p>
    </body>
</html>