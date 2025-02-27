# Crash Dummy Plugin

v1.0.0

<p align="center">
  <img src="./Resources/crash-dummy-ui.png" alt="Kronos UI">
</p>

Crash Dummy is an audio plugin designed to stress test audio plugins. It provides a controlled way to simulate various edge cases in plugins that may arise only when a crash occurs which can help identify potential issues in audio plugins.

## ⚠️ Warning & Disclaimer

**USE AT YOUR OWN RISK**: This plugin is designed specifically for stress testing and debugging purposes. Please be aware of the following:

- This tool can intentionally cause crashes and system instability
- Always save your work before using this plugin
- Never use this plugin in a live performance or production environment
- Use in a separate DAW instance from your main production work
- I am not responsible for any data loss or system damage that may occur
- This tool should only be used by developers or qualified QA testers
- If testing third-party plugins, ensure you have permission to conduct stress tests

Best Practices:
- Create backups of your system before testing
- Test in an isolated environment
- Monitor system resources during testing
- Document all test cases and results
- Start with minimal stress parameters and gradually increase them

## Features

- Real-time session tracking
- Unlimited session history
- Dark/Light theme support
- Session sorting by date or duration
- Persistent data storage
- Resizable interface
- Visual time bars for session comparison

## Installation

### Supported Formats
- VST3
- AU (Mac only)

### System Requirements
- Windows 10 or later
- macOS 10.13 or later
- A DAW that supports VST3 or AU plugins

## Building from Source

### Prerequisites
- JUCE Framework v7.0.12
- C++20 compatible compiler
- Visual Studio 2022 (Windows) or Xcode (macOS)

### Build Steps

1. Clone the repository:
```bash
git clone https://github.com/jacklion710/Crash-Dummy.git
```

2. Download and install JUCE v7.0.12 from [JUCE's website](https://juce.com/get-juce/download)

**Note:** You may need to visit the JUCE github [releases](https://github.com/juce-framework/JUCE/releases) page to find the correct version.

3. Open `Crash Dummy.jucer` in Projucer

4. Generate project files for your IDE

5. Build the project in your IDE

## Project Structure

- `/Source` - Core plugin implementation
- `/Resources` - Assets (SVGs, fonts, etc.)
- `/JuceLibraryCode` - JUCE framework code

## Development

The plugin is built using JUCE framework and follows a standard audio plugin architecture:

- `PluginProcessor` - Handles core functionality and state management
- `PluginEditor` - Manages the UI and user interactions
- `LookAndFeel` - Custom styling and theme implementation
- `AboutComponent` - About window with links and information

## Credits

Created by Jacob Leone (Jack.Lion)

## Links

- Website: [\[Jack.Lion Official Website\]](https://jacklion.xyz)
- Instagram: [\[@jack.lion\]](https://www.instagram.com/jack.lion)
- Discord: [\[Join my community\]](https://discord.gg/EFQq7BX)
- Gumroad: [\[More plugins\]](https://jacklion.gumroad.com)
- Tech Portfolio: [\[Jacob Leones Tech Portfolio\]](https://jacobleone.tech)

### Contributing Code
- Fork the repository
- Create a feature branch (`git checkout -b feature/NewFeature`)
- Commit your changes (`git commit -m 'Add some NewFeature'`)
- Push to the branch (`git push origin feature/NewFeature`)
- Open a Pull Request

#### Guidelines
- Follow existing code style and conventions
- Update documentation as needed

#### Feature Requests & Bug Reports
- Use the Issues tab on GitHub to submit feature requests or bug reports (**preffered**)
- Clearly describe the proposed feature or bug with relevant details
- For bugs, include steps to reproduce and expected behavior
- For bug reports you may also reach me directly at [jack.lion710@gmail.com](mailto:jack.lion710@gmail.com)

#### Getting Help
- Check existing Issues and Pull Requests before creating new ones
- Join my Discord community for deeper discussions and questions
- Review the documentation in the Kronos Manual

I appreciate all contributions that help make Kronos better!

## License

Crash Dummy is licensed under the GPL v3. Redistribution of compiled binaries is discouraged unless significant modifications are made. See the LICENSE file for details.