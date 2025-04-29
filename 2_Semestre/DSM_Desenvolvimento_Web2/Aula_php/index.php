<?php
    // Declarando uma variável
    $user = "Marcos";

    $idade = 1;
    $diasVividos = $idade * 365;
    $semanasVividas = $diasVividos / 7;
?>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="utf-8">
        <title>Meu servidor Web</title>
    </head>
    <body>
        <h1>Meu servidor Web</h1>
        <p>Bem vindo(a) <?php echo $user; ?> ao meu site hospedado em meu próprio computador</p>
        <p><?php echo $user; ?>, se você tem <?php echo $idade; ?> ano(s), então já viveu <?php echo $diasVividos; ?> dias. Isso equivale a <?php echo $semanasVividas; ?> semanas.</p>
    </body>
</html>