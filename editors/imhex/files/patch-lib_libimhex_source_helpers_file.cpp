--- lib/libimhex/source/helpers/file.cpp.orig	2022-10-08 08:03:47 UTC
+++ lib/libimhex/source/helpers/file.cpp
@@ -17,12 +17,12 @@ namespace hex::fs {
                 this->m_file = _wfopen(path.c_str(), L"w+b");
         #else
             if (mode == File::Mode::Read)
-                this->m_file = fopen64(hex::toUTF8String(path).c_str(), "rb");
+                this->m_file = fopen(hex::toUTF8String(path).c_str(), "rb");
             else if (mode == File::Mode::Write)
-                this->m_file = fopen64(hex::toUTF8String(path).c_str(), "r+b");
+                this->m_file = fopen(hex::toUTF8String(path).c_str(), "r+b");
 
             if (mode == File::Mode::Create || (mode == File::Mode::Write && this->m_file == nullptr))
-                this->m_file = fopen64(hex::toUTF8String(path).c_str(), "w+b");
+                this->m_file = fopen(hex::toUTF8String(path).c_str(), "w+b");
         #endif
     }
 
@@ -50,7 +50,7 @@ namespace hex::fs {
 
 
     void File::seek(u64 offset) {
-        fseeko64(this->m_file, offset, SEEK_SET);
+        fseeko(this->m_file, offset, SEEK_SET);
     }
 
     void File::close() {
@@ -135,10 +135,10 @@ namespace hex::fs {
     size_t File::getSize() const {
         if (!isValid()) return 0;
 
-        auto startPos = ftello64(this->m_file);
-        fseeko64(this->m_file, 0, SEEK_END);
-        auto size = ftello64(this->m_file);
-        fseeko64(this->m_file, startPos, SEEK_SET);
+        auto startPos = ftello(this->m_file);
+        fseeko(this->m_file, 0, SEEK_END);
+        auto size = ftello(this->m_file);
+        fseeko(this->m_file, startPos, SEEK_SET);
 
         if (size < 0)
             return 0;
@@ -149,7 +149,7 @@ namespace hex::fs {
     void File::setSize(u64 size) {
         if (!isValid()) return;
 
-        auto result = ftruncate64(fileno(this->m_file), size);
+        auto result = ftruncate(fileno(this->m_file), size);
         hex::unused(result);
     }
 
