<?php
    // Conversor de metros para pés
    $user = "Marcos";
    $alturaM = 1.85 * 100;
    $alturaP = $alturaM / 30.48; // Altura em pés
    // Função: valor a se formatar, qtde de casas dps da virgula.
    $alturaFormatada = number_format($alturaP, 1);

?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="utf-8">
        <title>Meu servidor Web 2</title>
    </head>
    <body>
        <h1>Meu servidor Web (Reserva)</h1>
        <p>Bem vindo(a) ao meu site hospedado em meu próprio computador</p>
        <p>A altura de <?php echo $user; ?> é de <?php echo $alturaM / 100; ?> metros ou <?php echo $alturaFormatada; ?> pés.</p>
    </body>
</html>