<?php
// Connessione al database (sostituisci con le tue informazioni reali)
$servername = "localhost";
$username = "Amir2005";
$password = "Amir290032";
$database = "mysql";

$conn = new mysqli($servername, $username, $password, $database);

if ($conn->connect_error) {
    die("Connessione al database fallita: " . $conn->connect_error);
}

// Ricevi dati dalla form
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $password = $_POST["password"];

    // Esegui una query per verificare le credenziali (sostituisci con la tua logica)
    $query = "SELECT * FROM users WHERE username='$username' AND password='$password'";
    $result = $conn->query($query);

    if ($result->num_rows > 0) {
        // Accesso consentito, reindirizza l'utente alla pagina di successo
        header("Location: success.php");
    } else {
        // Accesso negato, reindirizza l'utente alla pagina di errore
        header("Location: error.php");
    }
}

$conn->close();
?>
