### Set Default Shell to Start tmux

https://unix.stackexchange.com/questions/43601/how-can-i-set-my-default-shell-to-start-up-tmux


Add the following to the bottom of ~/.bashrc
```sh
if command -v tmux &> /dev/null && [ -n "$PS1" ] && [[ ! "$TERM" =~ screen ]] && [[ ! "$TERM" =~ tmux ]] && [ -z "$TMUX" ]; then
  tmux a -t default || exec tmux new -s default && exit;
fi
```