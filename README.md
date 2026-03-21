# 🔐 Secure File Management System

A production-ready secure file management system with encryption, role-based access control, and analytics.

## 🌟 Features

- **🔒 File Encryption**: All files encrypted using Fernet (AES) before storage
- **👥 User Authentication**: Secure login with bcrypt password hashing
- **🎭 Role-Based Access**: Admin and User roles with different permissions
- **📤 File Sharing**: Share files with specific users
- **📊 Analytics Dashboard**: Usage statistics and visualizations
- **📋 Activity Logs**: Complete audit trail of all actions
- **⚙️ Admin Panel**: User management and system monitoring

## 🚀 Installation

1. **Clone the repository:**

```bash
   git clone https://github.com/YOUR_USERNAME/secure-file-system.git
   cd secure-file-system
```

2. **Create virtual environment:**

```bash
   python -m venv venv
   venv\Scripts\activate  # Windows
   # source venv/bin/activate  # Linux/Mac
```

3. **Install dependencies:**

```bash
   pip install -r requirements.txt
```

4. **Create storage directory:**

```bash
   mkdir storage
```

5. **Run the application:**

```bash
   streamlit run app.py
```

## 👤 Creating Admin User

1. Register a user through the web interface
2. Run the admin script:

```bash
   python make_admin.py
```

3. Follow the prompts to promote your user to admin

## 🛠️ Technology Stack

- **Backend**: Python 3.8+
- **UI Framework**: Streamlit
- **Database**: SQLite
- **Encryption**: cryptography (Fernet)
- **Password Hashing**: bcrypt
- **Analytics**: Pandas, Plotly

## 📁 Project Structure

```
secure_file_system/
├── app.py              # Main application
├── ui/                 # UI components
├── core/               # Core business logic
├── analytics/          # Analytics module
├── database/           # Database layer
└── storage/            # Encrypted files (excluded from git)
```

## 🔒 Security Features

- End-to-end file encryption
- Secure password hashing
- Role-based access control
- Permission-based file sharing
- Complete audit logging
- Session management

## 📝 License

MIT License

## 🤝 Contributing

Contributions welcome! Please feel free to submit a Pull Request.