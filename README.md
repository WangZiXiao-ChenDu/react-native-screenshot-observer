## Installation
Installation can be done through ``npm``:

```shell
$ npm i react-native-screenshot-observer --save
$ react-native link react-native-screenshot-observer
```

## Usage
iOS截屏手势捕获通知
支持react native 0.40+

```jsx
import React, { PropTypes } from 'react';
import { connect } from 'react-redux';
import {
  View,
  StyleSheet,
  Text,
  TouchableOpacity,
  NativeModules,
  DeviceEventEmitter,
} from 'react-native';

class App extends React.Component {
  componentWillUnmount () {
    this.screenshotObserver.remove();
  }

  render() {
    return (
      const RNScreenshotNotification = NativeModules.RNScreenshotNotification;

      this.screenshotObserver = DeviceEventEmitter.addListener('ScreenshotObserver', (data) => { this.setState({ screenShotUri: data.imagePath }) });
      RNScreenshotNotification.addObserverScreenshot();
    )
  }
}
```
