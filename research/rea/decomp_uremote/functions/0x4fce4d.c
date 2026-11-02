// rea decompile_all
// name: FUN_004fce4d
// address: 0x4fce4d
// body: available
// range: 0x4fce4d-0x4fcf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fce4d(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  int *in_EAX;
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_004fe21f();
  in_EAX[3] = iVar1;
  if (*in_EAX == 0) {
    glGenTextures(1);
    glBindTexture(0xde1,*in_EAX);
    glTexParameteri(0xde1,0x2801,0x2601);
    glTexParameteri(0xde1,0x2800,0x2601);
    glTexParameteri(0xde1,0x2802,0x812f);
    glTexParameteri(0xde1,0x2803,0x812f);
  }
  else {
    glBindTexture(0xde1,*in_EAX);
  }
  glPixelStorei(0xcf5,1);
  iVar1 = FUN_004fce23();
  in_EAX[1] = iVar1;
  lVar2 = FUN_004fce23();
  in_EAX[2] = (int)lVar2;
  if (lVar2 == CONCAT44(param_1,param_2)) {
    glTexImage2D(0xde1,0,0x1908,param_1,param_2,0,0x80e1,0x1401,param_3);
  }
  else {
    glTexImage2D(0xde1,0,0x1908,(int)((ulonglong)lVar2 >> 0x20),(int)lVar2,0,0x80e1,0x1401,0);
    if (param_4 == '\0') {
      iVar1 = 0;
    }
    else {
      iVar1 = in_EAX[2] - param_2;
    }
    glTexSubImage2D(0xde1,0,0,iVar1,param_1,param_2,0x80e1,0x1401,param_3);
  }
  return;
}

