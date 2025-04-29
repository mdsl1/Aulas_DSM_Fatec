<?php
    $v1 = floatval($_GET["valor1"]);
    $v2 = floatval($_GET["valor2"]);
    $op = $_GET["operacao"];

    $result;

    if($op == "+") {
        $result = $v1 + $v2;
    }
    else if($op == "-") {
        $result = $v1 - $v2;
    }
    else if($op == "*") {
        $result = $v1 * $v2;
    }
    else if($op == "/") {
        if($v2 == 0) {
            $result = "Erro: Divisão por Zero";
        }
        else{
            $result = $v1 / $v2;
        }
    }
    else{
        $result = "Erro";
    }
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado</title>
</head>
<body>
    <h1>Resultado do Cálculo</h1>
    <p>Calculo realizado <?= "$v1 $op $v2"; ?></p>
    <p>Resultado: <?= $result; ?></p>
</body>
</html>