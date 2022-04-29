<?PHP
session_start();
require("functions.php");
?>
<html>
    <head>
    
    </head>
    <body>
        <header>
            <h0>
                Login
            </h0>
        </header>
        <form>
            <fieldset>
                <div class="formdiv">
                    <div id="emaildiv">
                        <label>
                            Email
                        </label>
                            <br/>
                        <input type="email" name="email" id="email" class="input" required placeholder="e.g. joesmith@gmail.com"/>
                    </div>
                        <br/>
                        <br/>
                    <div id="passworddiv">
                        <label>
                            Password
                        </label>
                        <input type="password" name="password" id="password" class="input" required placeholder="Enter Your Password Here"/>
                    </div>
                        <br/>
                        <br/>
                    <input type="submit" id="submit" value="Login"/>
                </div>
            </fieldset>
            <p id="phptext">
            <?PHP
                if (!filter_var($_POST["email"], FILTER_VALIDATE_EMAIL)) 
                {
                  unset($_POST["email"]);
                }

                if(isset($_POST['email']) && $_POST['password'])
                {
                    $_SESSION['email'] = $_POST['email'];
                    $_SESSION['password'] = $_POST['password'];
                }
                if(isset($_SESSION['email']) && $_SESSION['password'])
                {
                    $_SESSION['email+password'] = $_SESSION['email']." ".$_SESSION['password'];

                    switch($_SESSION['email+password'])
                    {
                        case "graysonkrause@clarke.k12.ga.us redteamcentral":
                            $_SESSION['authority'] = 5;
                            break;
                        case "julianstaton@clarke.k12.ga.us julaniscool":
                            $_SESSION['authority'] = 5;
                            break;
                        case "noahwillstay@clarke.k12.ga.us purpleteamcentral":
                            $_SESSION['authority'] = 5;
                            break;
                        case "williamsimpson@clarke.k12.ga.us blueteamcentral":
                            $_SESSION['authority'] = 5;
                            break;
                        case "walkerj@clarke.k12.ga.us cyberlab":
                            $_SESSION['authority'] = 5;
                    }
                }
                if(isset($_SESSION['authority']))
                {
                    $response = "Rank ".$_SESSION['authority']." authorized.";
                }
                else
                {
                    $response = "Credentials Invalid";
                }
                if(isset($response))
                {
                    echo $response;
                }
            ?>
            </p>
        </form>
    </body>

</html>
