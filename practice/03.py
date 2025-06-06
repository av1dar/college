

import sys
from datetime import datetime

class Logger:
    def __init__(self, out_stream, time_formatter):
        self.   out_stream = out_stream
        self.   time_formatter = time_formatter

    def log(self, message):
        
        
        timestamp = datetime.now().   strftime(self.time_formatter)
        full_message = f"  [{timestamp}]  {message}"
        print(full_message, file=self   .out_stream)
