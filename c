[33mcommit eccc9630873d6de6e3cc2e5cae2ca748689625a6[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: annalisape <a.pe@reply.it>
Date:   Fri Jan 29 11:22:27 2021 +0100

    initial commit

[1mdiff --git a/.browserslistrc b/.browserslistrc[m
[1mnew file mode 100644[m
[1mindex 0000000..8de0b12[m
[1m--- /dev/null[m
[1m+++ b/.browserslistrc[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m# This file is used by the build system to adjust CSS and JS output to support the specified browsers below.[m
[32m+[m[32m# For additional information regarding the format and rule options, please see:[m
[32m+[m[32m# https://github.com/browserslist/browserslist#queries[m
[32m+[m
[32m+[m[32m# For the full list of supported browsers by the Angular framework, please see:[m
[32m+[m[32m# https://angular.io/guide/browser-support[m
[32m+[m
[32m+[m[32m# You can see what browsers were selected by your queries by running:[m
[32m+[m[32m#   npx browserslist[m
[32m+[m
[32m+[m[32mlast 1 Chrome version[m
[32m+[m[32mlast 1 Firefox version[m
[32m+[m[32mlast 2 Edge major versions[m
[32m+[m[32mlast 2 Safari major version[m
[32m+[m[32mlast 2 iOS major versions[m
[32m+[m[32mFirefox ESR[m
[32m+[m[32mnot IE 9-10 # Angular support for IE 9-10 has been deprecated and will be removed as of Angular v11. To opt-in, remove the 'not' prefix on this line.[m
[32m+[m[32mnot IE 11 # Angular supports IE 11 only as an opt-in. To opt-in, remove the 'not' prefix on this line.[m
[1mdiff --git a/.editorconfig b/.editorconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..59d9a3a[m
[1m--- /dev/null[m
[1m+++ b/.editorconfig[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32m# Editor configuration, see https://editorconfig.org[m
[32m+[m[32mroot = true[m
[32m+[m
[32m+[m[32m[*][m
[32m+[m[32mcharset = utf-8[m
[32m+[m[32mindent_style = space[m
[32m+[m[32mindent_size = 2[m
[32m+[m[32minsert_final_newline = true[m
[32m+[m[32mtrim_trailing_whitespace = true[m
[32m+[m
[32m+[m[32m[*.ts][m
[32m+[m[32mquote_type = single[m
[32m+[m
[32m+[m[32m[*.md][m
[32m+[m[32mmax_line_length = off[m
[32m+[m[32mtrim_trailing_whitespace = false[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..86d943a[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,46 @@[m
[32m+[m[32m# See http://help.github.com/ignore-files/ for more about ignoring files.[m
[32m+[m
[32m+[m[32m# compiled output[m
[32m+[m[32m/dist[m
[32m+[m[32m/tmp[m
[32m+[m[32m/out-tsc[m
[32m+[m[32m# Only exists if Bazel was run[m
[32m+[m[32m/bazel-out[m
[32m+[m
[32m+[m[32m# dependencies[m
[32m+[m[32m/node_modules[m
[32m+[m
[32m+[m[32m# profiling files[m
[32m+[m[32mchrome-profiler-events*.json[m
[32m+[m[32mspeed-measure-plugin*.json[m
[32m+[m
[32m+[m[32m# IDEs and editors[m
[32m+[m[32m/.idea[m
[32m+[m[32m.project[m
[32m+[m[32m.classpath[m
[32m+[m[32m.c9/[m
[32m+[m[32m*.launch[m
[32m+[m[32m.settings/[m
[32m+[m[32m*.sublime-workspace[m
[32m+[m
[32m+[m[32m# IDE - VSCode[m
[32m+[m[32m.vscode/*[m
[32m+[m[32m!.vscode/settings.json[m
[32m+[m[32m!.vscode/tasks.json[m
[32m+[m[32m!.vscode/launch.json[m
[32m+[m[32m!.vscode/extensions.json[m
[32m+[m[32m.history/*[m
[32m+[m
[32m+[m[32m# misc[m
[32m+[m[32m/.sass-cache[m
[32m+[m[32m/connect.lock[m
[32m+[m[32m/coverage[m
[32m+[m[32m/libpeerconnection.log[m
[32m+[m[32mnpm-debug.log[m
[32m+[m[32myarn-error.log[m
[32m+[m[32mtestem.log[m
[32m+[m[32m/typings[m
[32m+[m
[32m+[m[32m# System Files[m
[32m+[m[32m.DS_Store[m
[32m+[m[32mThumbs.db[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..768cdcb[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32m# Menufisso[m
[32m+[m
[32m+[m[32mThis project was generated with [Angular CLI](https://github.com/angular/angular-cli) version 10.0.1.[m
[32m+[m
[32m+[m[32m## Development server[m
[32m+[m
[32m+[m[32mRun `ng serve` for a dev server. Navigate to `http://localhost:4200/`. The app will automatically reload if you change any of the source files.[m
[32m+[m
[32m+[m[32m## Code scaffolding[m
[32m+[m
[32m+[m[32mRun `ng generate component component-name` to generate a new component. You can also use `ng generate directive|pipe|service|class|guard|interface|enum|module`.[m
[32m+[m
[32m+[m[32m## Build[m
[32m+[m
[32m+[m[32mRun `ng build` to build the project. The build artifacts will be stored in the `dist/` directory. Use the `--prod` flag for a production build.[m
[32m+[m
[32m+[m[32m## Running unit tests[m
[32m+[m
[32m+[m[32mRun `ng test` to execute the unit tests via [Karma](https://karma-runner.github.io).[m
[32m+[m
[32m+[m[32m## Running end-to-end tests[m
[32m+[m
[32m+[m[32mRun `ng e2e` to execute the end-to-end tests via [Protractor](http://www.protractortest.org/).[m
[32m+[m
[32m+[m[32m## Further help[m
[32m+[m
[32m+[m[32mTo get more help on the Angular CLI use `ng help` or go check out the [Angular CLI README](https://github.com/angular/angular-cli/blob/master/README.md).[m
[1mdiff --git a/angular.json b/angular.json[m
[1mnew file mode 100644[m
[1mindex 0000000..e05c077[m
[1m--- /dev/null[m
[1m+++ b/angular.json[m
[36m@@ -0,0 +1,128 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "$schema": "./node_modules/@angular/cli/lib/config/schema.json",[m
[32m+[m[32m  "version": 1,[m
[32m+[m[32m  "newProjectRoot": "projects",[m
[32m+[m[32m  "projects": {[m
[32m+[m[32m    "menufisso": {[m
[32m+[m[32m      "projectType": "application",[m
[32m+[m[32m      "schematics": {[m
[32m+[m[32m        "@schematics/angular:component": {[m
[32m+[m[32m          "style": "scss"[m
[32m+[m[32m        }[m
[32m+[m[32m      },[m
[32m+[m[32m      "root": "",[m
[32m+[m[32m      "sourceRoot": "src",[m
[32m+[m[32m      "prefix": "app",[m
[32m+[m[32m      "architect": {[m
[32m+[m[32m        "build": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:browser",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "outputPath": "dist/menufisso",[m
[32m+[m[32m            "index": "src/index.html",[m
[32m+[m[32m            "main": "src/main.ts",[m
[32m+[m[32m            "polyfills": "src/polyfills.ts",[m
[32m+[m[32m            "tsConfig": "tsconfig.app.json",[m
[32m+[m[32m            "aot": true,[m
[32m+[m[32m            "assets": [[m
[32m+[m[32m              "src/favicon.ico",[m
[32m+[m[32m              "src/assets"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "styles": [[m
[32m+[m[32m              "src/styles.scss"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "scripts": [][m
[32m+[m[32m          },[m
[32m+[m[32m          "configurations": {[m
[32m+[m[32m            "production": {[m
[32m+[m[32m              "fileReplacements": [[m
[32m+[m[32m                {[m
[32m+[m[32m                  "replace": "src/environments/environment.ts",[m
[32m+[m[32m                  "with": "src/environments/environment.prod.ts"[m
[32m+[m[32m                }[m
[32m+[m[32m              ],[m
[32m+[m[32m              "optimization": true,[m
[32m+[m[32m              "outputHashing": "all",[m
[32m+[m[32m              "sourceMap": false,[m
[32m+[m[32m              "extractCss": true,[m
[32m+[m[32m              "namedChunks": false,[m
[32m+[m[32m              "extractLicenses": true,[m
[32m+[m[32m              "vendorChunk": false,[m
[32m+[m[32m              "buildOptimizer": true,[m
[32m+[m[32m              "budgets": [[m
[32m+[m[32m                {[m
[32m+[m[32m                  "type": "initial",[m
[32m+[m[32m                  "maximumWarning": "2mb",[m
[32m+[m[32m                  "maximumError": "5mb"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                  "t