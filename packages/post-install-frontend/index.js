const express = require("express");
const app = express();

const PORT = process.env.PORT || 3000;

app.get("/", function(req, res) {

    //return res.send("hello, there!");
    return res.send("wget -qO- https://raw.githubusercontent.com/jeffshomelab/vminstall/refs/heads/master/tools/scripts/post-install.sh | bash");

});

app.listen(PORT, function() {
    console.log(`Service is listening on ${PORT}`);
});


