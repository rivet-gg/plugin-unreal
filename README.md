# Unreal Engine 5 Plugin

_Tested with Unreal Engine 5.2.1._

_Has not been tested with Unreal Engine 4._

## Installation

### Method 1: Initialize project with the Rivet CLI (recommended)

This method will also configure your Rivet project. 

1. Install the [Rivet CLI](https://github.com/rivet-gg/cli)
2. Run `rivet init --unreal` in the root of your project
3. The CLI will prompt you to configure your project & install the plugin
4. Restart the Unreal editor

### Method 2: Install with Rivet CLI

This method can be used to upgrade an existing plugin installation.

1. Install the [Rivet CLI](https://github.com/rivet-gg/cli)
2. Run `rivet unreal install-plugin` in the root of your project
3. Restart the Unreal editor

### Method 3: Copy manually

1. Create a `Plugins` folder in the root of your project (it may already exist)
2. Copy the `Plugins/Rivet/` folder from this repository to the `Plugins/Rivet/` folder in your project
3. Restart the Unreal editor

## Getting started

[Getting started guide](https://rivet.gg/learn/unreal)
