#!/bin/sh
#
# Cloud Hook: post-code-deploy
#
# The post-code-deploy hook is run whenever you use the Workflow page to
# deploy new code to an environment, either via drag-drop or by selecting
# an existing branch or tag from the Code drop-down list. See
# ../README.md for details.
#
# Usage: post-code-deploy site target-env source-branch deployed-tag repo-url
#                         repo-type

site="$1"
target_env="$2"
source_branch="$3"
deployed_tag="$4"
repo_url="$5"
repo_type="$6"

echo "Rebuilding registry:"
drush @$site.$target_env rr

echo "disable/enable master_dependency:"
drush @$site.$target_env dis master_dependency -y
drush @$site.$target_env en master_dependency -y

echo "Update database:"
drush @$site.$target_env updatedb --yes

echo "Clearing Features:"
drush @$site.$target_env fra -y

echo "Clearing Cache:"
drush @$site.$target_env cc all

if [ "$source_branch" != "$deployed_tag" ]; then
  echo "$site.$target_env: Deployed branch $source_branch as $deployed_tag."
else
  echo "$site.$target_env: Deployed $deployed_tag."
fi
