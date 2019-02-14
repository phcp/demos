# TGF - Liferay Forms Demo

<div align="center">
    <img src="desktop.png" alt="Desktop" width="400" height="227">
</div>

<div style="display: inline" align="center">
    <img src="mobile1.png" alt="Mobile" width="130" height="227">
    <img src="mobile2.png" alt="Mobile" width="130" height="227">
</div>

TGF is an insurance company demo that uses Liferay technologies to leverage customer experience through mobile and web platforms.

## What Liferay technologies were used?

### Web and APIs
- [**Liferay CE 7.1 GA3**](https://github.com/liferay/liferay-portal) for a web experience and to provide API services, mainly using:
    - [**Liferay Forms**](https://forms.liferay.com)
    - [**Headless APIs**](https://headlessapis.wedeploy.io)

### Mobile (Android)
- [**Liferay Screens**](https://github.com/liferay/liferay-screens) with the following Screenlets:
    - **Login, Sign Up and Forgot Password Screenlets** for login and create account pages
    - **DDM Form Screenlet** for the Insurance Quote page
    - **Asset List, PDF Display and Video Display Screenlets** for the content sessions in the app
    - **Web Screenlet** to display the Special Offers web page
- [**Liferay Push**](https://github.com/liferay-mobile/liferay-push-android) to receive notifications

## Installation Guideline

### Liferay Portal

#### Remotely on WeDeploy[<img src="https://avatars3.githubusercontent.com/u/10002920" alt="WeDeploy logo" width="90" height="90" align="right">][wedeploy]

To Deploy your backend you can try WeDeploy Magic button:

[![Deploy](https://cdn.wedeploy.com/images/deploy.svg)](https://console.wedeploy.com/deploy?repo=https://github.com/phcp/liferay-forms-demo)

#### Locally on Docker[<img src="https://cdn-ak.f.st-hatena.com/images/fotolife/m/muziyoshiz/20160529/20160529223041.png" alt="Docker" width="110" height="90" align="right">][docker]

To run the backend localy you can try our docker image:
- **Clone** this repo `git clone https://github.com/phcp/liferay-forms-demo.git`
- Go to the project folder `cd liferay-forms-demo`
- **Run** `docker-compose up` and wait the server startup
- Access http://localhost:8080 to try the demo

### Mobile (Android)
Set Up `service_context.xml` with your IP address if you have chosen to run remotely. In this case, if you are using `localhost` you should use `10.0.2.2` to access the Liferay on Android.

[wedeploy]: https://wedeploy.com/
[docker]: https://www.docker.com/
