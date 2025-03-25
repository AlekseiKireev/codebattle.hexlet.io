def solution(s): 
    return s.rsplit(' ', 1)[0] + ' ' + {"smile": ":D", "grin": ":)", "sad": ":(", "shocked": "D:", "bored": "(._.)", "painful": "(>_<)"}.get(s.rsplit(' ', 1)[1], "")
