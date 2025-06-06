

import sys
from datetime import datetime

def log(message):
   
    
    timestamp = datetime.now().   strftime   ("%Y-%m-%d %H:%M:%S")
   
   
    full_message = f"[{timestamp}] {message}"
    
    
    print(full_message, file=sys.   stderr)
