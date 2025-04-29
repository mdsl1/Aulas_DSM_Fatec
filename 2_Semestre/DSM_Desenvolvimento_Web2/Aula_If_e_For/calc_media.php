<?php
    // intval(valor) = Retorna o valor convertido para inteiro
    // floatval(valor) = Retorna o valor convertido para float
    $notas = [];
    $notas["n1"] = floatval($_GET["nota1"]);
    $notas["n2"] = floatval($_GET["nota2"]);
    $i=1;

    $media = array_sum($notas) / count($notas);

    if($media < 6){
        $result = "Reprovado";
    }
    else{
        $result = "Aprovado";
    }
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Média das Notas</title>
</head>
<body>
    <h1>Cálculo da Média</h1>
    <ul>
        <?php
        foreach($notas as $n){
            echo "<li>Nota $i: $n</li>";
            $i++;
        }
        ?>
    </ul>
    <p>Média: <?= $media; ?></p>
    <p>Resultado: <?= $result; ?></p>
</body>
</html>