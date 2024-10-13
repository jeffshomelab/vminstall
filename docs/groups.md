To get a list of groups belonging to the current user:

```sh
groups $USER
```

To add a user to a group where `group_name` is the name of the group they should be added to:

```sh
sudo usermod -aG group_name $USER
```

Refresh the enw changes to the group, where `group_name` is the group's name.

```sh
newgrp group_name
```


