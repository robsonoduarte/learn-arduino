#include "server.h"
#include "ESPAsyncTCP.h"
#include "ESPAsyncWebServer.h"

const char* PARAM_INPUT_1 = "output";
const char* PARAM_INPUT_2 = "state";

AsyncWebServer server(80);

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html>
<head>
  <title>ESP Web Server</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" href="data:,">
  <style>
    html {font-family: Arial; display: inline-block; text-align: center;}
    h2 {font-size: 3.0rem;}
    p {font-size: 3.0rem;}
    body {max-width: 600px; margin:0px auto; padding-bottom: 25px;}
    .switch {position: relative; display: inline-block; width: 120px; height: 68px}
    .switch input {display: none}
    .slider {position: absolute; top: 0; left: 0; right: 0; bottom: 0; background-color: #ccc; border-radius: 6px}
    .slider:before {position: absolute; content: ""; height: 52px; width: 52px; left: 8px; bottom: 8px; background-color: #fff; -webkit-transition: .4s; transition: .4s; border-radius: 3px}
    input:checked+.slider {background-color: #b30000}
    input:checked+.slider:before {-webkit-transform: translateX(52px); -ms-transform: translateX(52px); transform: translateX(52px)}
  </style>
</head>
<body>
  <h2>ESP Web Server</h2>
  %BUTTONPLACEHOLDER%
<script>function toggleCheckbox(element) {
  var xhr = new XMLHttpRequest();
  if(element.checked){ xhr.open("GET", "/update?output="+element.id+"&state=1", true); }
  else { xhr.open("GET", "/update?output="+element.id+"&state=0", true); }
  xhr.send();
}
</script>
</body>
</html>

)rawliteral";


String outputState(int output){
    return digitalRead(output) ? "checked" : "";
}

String processor(const String& value){
    if(value == "BUTTONPLACEHOLDER"){
        String buttons = "";
        buttons += "<h4>Output - GPIO 5</h4><label class=\"switch\"><input type=\"checkbox\" onchange=\"toggleCheckbox(this)\" id=\"5\" " + outputState(5) + "><span class=\"slider\"></span></label>";
        buttons += "<h4>Output - GPIO 4</h4><label class=\"switch\"><input type=\"checkbox\" onchange=\"toggleCheckbox(this)\" id=\"4\" " + outputState(4) + "><span class=\"slider\"></span></label>";
        buttons += "<h4>Output - GPIO 2</h4><label class=\"switch\"><input type=\"checkbox\" onchange=\"toggleCheckbox(this)\" id=\"2\" " + outputState(2) + "><span class=\"slider\"></span></label>";
        return buttons;
    }
    return String();
}


void start(){
    server.on("/", HTTP_GET, [](AsyncWebServerRequest * request){
        request -> send_P(200, "text/html", index_html, processor);
    });

    server.on("/update", HTTP_GET, [] (AsyncWebServerRequest * request){
        String output = request->getParam(PARAM_INPUT_1)->value();
        String state = request->getParam(PARAM_INPUT_2)->value();
        digitalWrite(output.toInt(), state.toInt());
        request->send(200, "text/plain", "OK");
    });

    server.begin();
}
