<?php
    $aluno = [
        "ra" => 111111,
        "nome" => "Marcos",
        "curso" => "DSM",
        "mediaFinal" => 10
    ];

?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Exercício 3 da P1</title>
    </head>
    <body>
        <h1>Exercício 3 da P1</h1>
        <table border="1">
            <tr>
                <th>R.A.</th>
                <th>Nome</th>
                <th>Curso</th>
                <th>Média Final</th>
                <th>Situação</th>
            </tr>
            <tr>
                <?php foreach($aluno as $info) {?>
                    <td><?= $info ?></td>
                <?php } ?>
                <?php if($aluno["mediaFinal"] > 6) {?>
                    <td>Aprovado</td>
                <?php } else { ?>
                    <td>Reprovado</td>
                <?php } ?>
            </tr>
        </table>
    </body>
</html>