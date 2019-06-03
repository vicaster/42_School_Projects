########################COLORS########################

DEFAULT="\033[0m"
HIGHLIGHT="\033[1m"
UNDERLINE="\033[4m"
BLINK="\033[5m"
BLACK="\033[30m"
RED="\033[31m"
GREEN="\033[32m"
YELLOW="\033[33m"
BLUE="\033[34m"
PURPLE="\033[35m"
CYAN="\033[36m"
WHITE="\033[37m"

######################################################

echo "${GREEN}
		commit comment : 
${DEFAULT}
"
read commit
find . -name 'a.out' -print -delete | find . -name '.DS_Store' -print -delete | echo "\nKill The Cash\n\n"
git add . && git commit -m "$commit" && git push
echo "\n\n------------------------------\n\n"
git ls-files
