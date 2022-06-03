#Caesar Cipher Technique
def encrypt(text,k,shift):
    key = ""
    result=''
 
    for i in range(len(text)):
        char = text[i]
 
        if (char.isupper()):
            key += chr((ord(char) + k-65) % 26 + 65)
 
        else:
            key += chr((ord(char) + k - 97) % 26 + 97)
        
        temp = (shift+1) % len(key)
        fin = key[temp : ] + key[ : temp]
        result=(str(fin))
 
    return result
 
text = input("")
k = int(input(""))
shift=int(input(""))
print (encrypt(text,k,shift))