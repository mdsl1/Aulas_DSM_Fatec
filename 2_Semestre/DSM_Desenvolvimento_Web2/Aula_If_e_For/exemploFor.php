<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Exemplo de uso For</title>
</head>
<body>
    <h1>Exemplo de uso de For em php</h1>
    <h2>Contando de 1 a 10</h2>
    <?= "<p><i>Iniciando Contagem....</i></p>"; ?>
    <ul>
        <?php
            for($i=1;$i <= 10; $i++){
                echo "<li>$i</li>";
            }
        ?>
    </ul>
    <?= "Contagem finalizada"; ?>
</body>
</html>