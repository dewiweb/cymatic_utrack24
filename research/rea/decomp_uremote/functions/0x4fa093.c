// rea decompile_all
// name: FUN_004fa093
// address: 0x4fa093
// body: available
// range: 0x4fa093-0x4fa47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa093(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  uVar1 = FUN_004fc67b("glActiveTexture");
  *unaff_ESI = uVar1;
  uVar1 = FUN_004fc67b("glBindBuffer");
  unaff_ESI[1] = uVar1;
  uVar1 = FUN_004fc67b("glDeleteBuffers");
  unaff_ESI[2] = uVar1;
  uVar1 = FUN_004fc67b("glGenBuffers");
  unaff_ESI[3] = uVar1;
  uVar1 = FUN_004fc67b("glBufferData");
  unaff_ESI[4] = uVar1;
  uVar1 = FUN_004fc67b("glBufferSubData");
  unaff_ESI[5] = uVar1;
  iVar2 = FUN_004fc67b("glIsRenderbuffer");
  unaff_ESI[6] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glIsRenderbufferEXT");
    unaff_ESI[6] = uVar1;
  }
  iVar2 = FUN_004fc67b("glBindRenderbuffer");
  unaff_ESI[7] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glBindRenderbufferEXT");
    unaff_ESI[7] = uVar1;
  }
  iVar2 = FUN_004fc67b("glDeleteRenderbuffers");
  unaff_ESI[8] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glDeleteRenderbuffersEXT");
    unaff_ESI[8] = uVar1;
  }
  iVar2 = FUN_004fc67b("glGenRenderbuffers");
  unaff_ESI[9] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glGenRenderbuffersEXT");
    unaff_ESI[9] = uVar1;
  }
  iVar2 = FUN_004fc67b("glRenderbufferStorage");
  unaff_ESI[10] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glRenderbufferStorageEXT");
    unaff_ESI[10] = uVar1;
  }
  iVar2 = FUN_004fc67b("glGetRenderbufferParameteriv");
  unaff_ESI[0xb] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glGetRenderbufferParameterivEXT");
    unaff_ESI[0xb] = uVar1;
  }
  iVar2 = FUN_004fc67b("glIsFramebuffer");
  unaff_ESI[0xc] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glIsFramebufferEXT");
    unaff_ESI[0xc] = uVar1;
  }
  iVar2 = FUN_004fc67b("glBindFramebuffer");
  unaff_ESI[0xd] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glBindFramebufferEXT");
    unaff_ESI[0xd] = uVar1;
  }
  iVar2 = FUN_004fc67b("glDeleteFramebuffers");
  unaff_ESI[0xe] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glDeleteFramebuffersEXT");
    unaff_ESI[0xe] = uVar1;
  }
  iVar2 = FUN_004fc67b("glGenFramebuffers");
  unaff_ESI[0xf] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glGenFramebuffersEXT");
    unaff_ESI[0xf] = uVar1;
  }
  iVar2 = FUN_004fc67b("glCheckFramebufferStatus");
  unaff_ESI[0x10] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glCheckFramebufferStatusEXT");
    unaff_ESI[0x10] = uVar1;
  }
  iVar2 = FUN_004fc67b("glFramebufferTexture2D");
  unaff_ESI[0x11] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glFramebufferTexture2DEXT");
    unaff_ESI[0x11] = uVar1;
  }
  iVar2 = FUN_004fc67b("glFramebufferRenderbuffer");
  unaff_ESI[0x12] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glFramebufferRenderbufferEXT");
    unaff_ESI[0x12] = uVar1;
  }
  iVar2 = FUN_004fc67b("glGetFramebufferAttachmentParameteriv");
  unaff_ESI[0x13] = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_004fc67b("glGetFramebufferAttachmentParameterivEXT");
    unaff_ESI[0x13] = uVar1;
  }
  uVar1 = FUN_004fc67b("glCreateProgram");
  unaff_ESI[0x14] = uVar1;
  uVar1 = FUN_004fc67b("glDeleteProgram");
  unaff_ESI[0x15] = uVar1;
  uVar1 = FUN_004fc67b("glCreateShader");
  unaff_ESI[0x16] = uVar1;
  uVar1 = FUN_004fc67b("glDeleteShader");
  unaff_ESI[0x17] = uVar1;
  uVar1 = FUN_004fc67b("glShaderSource");
  unaff_ESI[0x18] = uVar1;
  uVar1 = FUN_004fc67b("glCompileShader");
  unaff_ESI[0x19] = uVar1;
  uVar1 = FUN_004fc67b("glAttachShader");
  unaff_ESI[0x1a] = uVar1;
  uVar1 = FUN_004fc67b("glLinkProgram");
  unaff_ESI[0x1b] = uVar1;
  uVar1 = FUN_004fc67b("glUseProgram");
  unaff_ESI[0x1c] = uVar1;
  uVar1 = FUN_004fc67b("glGetShaderiv");
  unaff_ESI[0x1d] = uVar1;
  uVar1 = FUN_004fc67b("glGetShaderInfoLog");
  unaff_ESI[0x1e] = uVar1;
  uVar1 = FUN_004fc67b("glGetProgramInfoLog");
  unaff_ESI[0x1f] = uVar1;
  uVar1 = FUN_004fc67b("glGetProgramiv");
  unaff_ESI[0x20] = uVar1;
  uVar1 = FUN_004fc67b("glGetUniformLocation");
  unaff_ESI[0x21] = uVar1;
  uVar1 = FUN_004fc67b("glGetAttribLocation");
  unaff_ESI[0x22] = uVar1;
  uVar1 = FUN_004fc67b("glVertexAttribPointer");
  unaff_ESI[0x23] = uVar1;
  uVar1 = FUN_004fc67b("glEnableVertexAttribArray");
  unaff_ESI[0x24] = uVar1;
  uVar1 = FUN_004fc67b("glDisableVertexAttribArray");
  unaff_ESI[0x25] = uVar1;
  uVar1 = FUN_004fc67b("glUniform1f");
  unaff_ESI[0x26] = uVar1;
  uVar1 = FUN_004fc67b("glUniform1i");
  unaff_ESI[0x27] = uVar1;
  uVar1 = FUN_004fc67b("glUniform2f");
  unaff_ESI[0x28] = uVar1;
  uVar1 = FUN_004fc67b("glUniform3f");
  unaff_ESI[0x29] = uVar1;
  uVar1 = FUN_004fc67b("glUniform4f");
  unaff_ESI[0x2a] = uVar1;
  uVar1 = FUN_004fc67b("glUniform4i");
  unaff_ESI[0x2b] = uVar1;
  uVar1 = FUN_004fc67b("glUniform1fv");
  unaff_ESI[0x2c] = uVar1;
  uVar1 = FUN_004fc67b("glUniformMatrix2fv");
  unaff_ESI[0x2d] = uVar1;
  uVar1 = FUN_004fc67b("glUniformMatrix3fv");
  unaff_ESI[0x2e] = uVar1;
  uVar1 = FUN_004fc67b("glUniformMatrix4fv");
  unaff_ESI[0x2f] = uVar1;
  return;
}

