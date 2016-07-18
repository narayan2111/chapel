#!/usr/bin/env bash
#

CWD=$(cd $(dirname $0) ; pwd)

export CHPL_TEST_PERF_CONFIG_NAME='chapcs'

source $CWD/common-perf.bash

export CHPL_NIGHTLY_TEST_CONFIG_NAME="perf.chapcs.playground"

# Test performance of not ref coutning slices and reindexing
GITHUB_USER=bradcray
GITHUB_BRANCH=noRefCountArrViews
SHORT_NAME=noRefCountArrViews
START_DATE=07/18/16

git branch -D $GITHUB_USER-$GITHUB_BRANCH
git checkout -b $GITHUB_USER-$GITHUB_BRANCH
git pull https://github.com/$GITHUB_USER/chapel.git $GITHUB_BRANCH

perf_args="-performance-description $SHORT_NAME -performance-configs default:v,$SHORT_NAME:v -sync-dir-suffix $SHORT_NAME"
perf_args="${perf_args} -numtrials 1 -startdate $START_DATE"
$CWD/nightly -cron ${perf_args} ${nightly_args}
