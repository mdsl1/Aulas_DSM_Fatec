<?php
    $tempC = 37.7777777777777;
    $tempF = $tempC * 1.8 + 32;
    $tempCConvertida = (($tempF - 32)/9)*5 ;
    $isEqual;

    if ($tempC == $tempCConvertida) {
        $isEqual = "Os valores são iguais.";
    }
    else {
        $isEqual = "Os valores são diferentes.";
    }

?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Conversor de Temperaturas</title>
</head>
<body>
    <h1>Conversor de Temperaturas com Verificação</h1>
    <ul>
        <li>Valor em Celsius: <?php echo number_format($tempC,2); ?><sup>o</sup>C;</li>
        <li>Valor em Fahrenheit: <?php echo $tempF ?><sup>o</sup>F;</li>
    </ul>
    <h2>Conversão para verificação:</h2>
    <p>Valor em Fahrenheit: <?php echo $tempF ?><sup>o</sup>F. Valor em Celsius: <?php echo number_format($tempCConvertida,2); ?><sup>o</sup>C. <?php echo $isEqual; ?></p>
</body>
</html>