package com.liferay.mobile.formsscreenletdemo;

import android.content.Intent;
import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import com.liferay.mobile.screens.context.LiferayScreensContext;
import com.liferay.mobile.screens.context.SessionContext;
import com.liferay.mobile.screens.context.storage.CredentialsStorageBuilder;
import com.liferay.mobile.formsscreenletdemo.R;

public class SplashActivity extends AppCompatActivity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_splash);

		LiferayScreensContext.init(this);

		new Handler().postDelayed(() -> {

			SessionContext.loadStoredCredentialsAndServer(CredentialsStorageBuilder.StorageType.SHARED_PREFERENCES);

			//if (SessionContext.hasUserInfo()) {
			//	startActivity(HomeActivity.class);
			//} else {
			//	startActivity(LoginActivity.class);
			//}

			finish();

		}, 2000);
	}

	private void startActivity(Class<?> clazz) {
		Intent intent = new Intent(SplashActivity.this, clazz);
		startActivity(intent);
	}
}
