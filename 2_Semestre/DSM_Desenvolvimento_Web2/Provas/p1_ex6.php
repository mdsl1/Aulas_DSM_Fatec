<?php
    $nome = strtoupper($_GET["nome"]);
    $pessoas = ["Marcos"];
    if($nome != ""){
        array_push($pessoas, $nome);
    }
    $i = 1;
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Exercício 6 da P1</title>
</head>
<body>
    <h1>Exercício 6 da P1</h1>
    <table border="1">
        <tr>
            <th>Código</th>
            <th>Nome</th>
        </tr>
        <?php foreach($pessoas as $n) {
            echo"<tr>
                    <td>$i</td>
                    <td>$n</td>
                </tr>";
            $i++;
        }
        ?>
    </table>
</body>
</html>