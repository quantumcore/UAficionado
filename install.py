from shutil import copyfile
import sys, os

def main():
    os.system("clear")
    try:
        if(sys.argv[1] == "--install"):
            print("Installing UAficionado..")
            print("Copying Red Team HQ Files to /var/www/html/")
            try:
                os.system("mkdir /var/www/html/uploads/")
                copyfile("redteamhq/index.html", "/var/www/html/index.html")
                copyfile("redteamhq/login.php", "/var/www/html/login.php")
                copyfile("redteamhq/main.css", "/var/www/html/main.css")
                copyfile("redteamhq/uploads/do-not-open", "/var/www/html/uploads/do-not-open")
                copyfile("redteamhq/uploads/another-meme", "/var/www/html/uploads/another-meme")
                copyfile("redteamhq/uploads/and-another-meme", "/var/www/html/uploads/and-another-meme")
                copyfile("redteamhq/uploads/other-info", "/var/www/html/uploads/other-info")
                copyfile("redteamhq/uploads/random-meme", "/var/www/html/uploads/random-meme")
                print("--> Done!")
                print("Compiling Program. Be Patient.")
                os.system("gcc Uaficionado.c -o UAficionado")
                os.system("g++ notAbackdoor.cpp -o backdoor")
                print("--> @_@ < --") # Backdoor process indication
                print("Setting up things for you")
                os.system("cp backdoor $HOME/Downloads/notABackdoor")
                os.system("cp UAficionado /usr/bin/UAficionado")
                os.system("chmod +x UAficionado")
                print("--> Done. Type UAficionado anywhere to run.")
            except Exception as e:
                print("Error : ", e)
                input("")
        else:
            print("Error : Unidentified Argument " + sys.argv[1])
            print("USAGE : " + sys.argv[0] + " --install")

    except IndexError:
        print("USAGE : " + sys.argv[0] + " --install")


if __name__ == "__main__":
    main()