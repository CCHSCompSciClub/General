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
                <label>
                    Email
                </label>
                <br/>
                <input type="email" name="email" id="email" class="input" required placeholder="e.g. joesmith@gmail.com"/>
                <br/>
                <br/>
                <label>
                    Password
                </label>
                <br/>
                <input type="password" name="" required/>
                <input type="submit" id="submit" value="Login"/>
            </fieldset>
        </form>
    </body>

</html>
