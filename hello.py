from flask import Flask
import time


app = Flask(__name__)


@app.route("/")
def hello(i):
    i = i + 1
    print i
    time.sleep(1)	
    return str(i)

if __name__ == "__main__":
    i = 0
    app.run(host='0.0.0.0', port=3000)
    
	
