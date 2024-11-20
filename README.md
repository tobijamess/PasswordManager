# Password Management System<br />
## Developer Installation & Setup<br />
### 1. Download<br />
If you use git:<br />
git clone https://github.com/tobijamess/PasswordManager.git<br />
If you don't, press the green code button and download the zip file:<br />
![Screenshot 2024-11-20 134033](https://github.com/user-attachments/assets/458b9c00-7980-46bb-b93d-d91ae0de479d)<br />
Then Extract the contents to your preferred location.<br />
### 2. Open Solution<br />
Open the solution "PasswordManagement.sln" with Visual Studio 2022.<br />
### 3. Linking Dependencies for DEBUG Builds<br />
a. Right click on the PasswordManagement project and select "Properties."<br />
b. Select "Debug" under "Configuration:" at the top of the property page.<br />
c. Select "VC++ Directories" under "Configuration Properties" on the left hand side.<br />
d. Under "Include Directories" link the following directory paths:<br />
![image](https://github.com/user-attachments/assets/20e9cb05-7406-4168-b7ef-2269b7bf05a6)<br />
e. Under "Library Directories" link the following directory paths:<br />
![image](https://github.com/user-attachments/assets/ee05c53e-6e63-4885-8b1d-4379381692f1)<br />
f. Select "C/C++" and then "General"<br />
g. Under "Additional Include Directories" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/1025d799-78e5-4abd-b9a1-db12ffa12a18)<br />
h. Select "Preprocessor" in "C/C++."<br />
i. Under "Preprocessor Definitions" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/5af6f21f-8514-46a8-a550-17aea6a78665)<br />
j. Select "Code Generation" in "C/C++."<br />
k. Under "Runtime Library" choose "Multi-threaded Debug (/MTd)."<br />
l. Now select "Linker" and then "General"<br />
m. Under "Additional Library Dependencies" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/9fa8b3fa-4dec-4df8-a11f-dbf97dd4adeb)<br />
n. Now select "Input" under "Linker."<br />
o. Select "Additional Dependencies" and include the following:<br />
![image](https://github.com/user-attachments/assets/87fa301c-dba6-42c0-bb37-a9d3c44e56f1)<br />
p. Lastly, select "System" under "Linker."<br />
q. Under "SubSystem" choose "Windows (/SUBSYSTEM:WINDOWS)."<br />
### 4. Linking Dependencies for RELEASE Builds<br />
a. Right click on the PasswordManagement project and select "Properties."<br />
b. Select "Release" under "Configuration:" at the top of the property page.<br />
c. Select "VC++ Directories" under "Configuration Properties" on the left hand side.<br />
d. Under "Include Directories" link the following directory paths:<br />
![image](https://github.com/user-attachments/assets/1176b326-11cc-42f7-b8e7-cd7b7fde5019)<br />
e. Under "Library Directories" link the following directory paths:<br />
![image](https://github.com/user-attachments/assets/abeb320e-445a-4bb3-9e00-72ebb4170c8b)<br />
f. Select "C/C++" and then "General"<br />
g. Under "Additional Include Directories" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/0e0a077e-400a-47cb-85cd-2f97018e0938)<br />
h. Select "Preprocessor" in "C/C++."<br />
i. Under "Preprocessor Definitions" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/44b33dac-87b0-43ad-90e3-312626e2ac87)<br />
j. Select "Code Generation" in "C/C++."<br />
k. Under "Runtime Library" choose "Multi-threaded (/MT)."<br />
l. Now select "Linker" and then "General"<br />
m. Under "Additional Library Dependencies" include the following directory paths:<br />
![image](https://github.com/user-attachments/assets/454afa0a-d479-40e7-8c1b-da9e32d98d70)<br />
n. Now select "Input" under "Linker."<br />
o. Select "Additional Dependencies" and include the following:<br />
![image](https://github.com/user-attachments/assets/0cd004e8-bf4b-447e-9d62-864d9da92037)<br />
p. Lastly, select "System" under "Linker."<br />
q. Under "SubSystem" choose "Windows (/SUBSYSTEM:WINDOWS)."<br />
### 5. Using Mailjet's SMTP Service for Emailing Recovery Codes (OPTIONAL)<br />
a. Head to https://app.mailjet.com/signup?lang=en_US and create an account with Mailjet.<br />
b. Create an API key and Secret key.<br />
c. Open the application in Visual Studios and head to "smtp.cpp."<br />
d. Enter your API key and Secret key in their corresponding fields on line 24 & 25:<br />
![image](https://github.com/user-attachments/assets/18753266-b740-4b96-b221-8b5e195f7cba)<br />















