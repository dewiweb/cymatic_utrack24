// rea decompile_all
// name: FUN_006f3df0
// address: 0x6f3df0
// body: available
// range: 0x6f3df0-0x6f3f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f3df0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  
  in_ECX[3] = *(int *)(*(int *)ThreadLocalStoragePointer + 0xc);
  if (*in_ECX == 0) {
    glGenTextures(1);
    glBindTexture(0xde1,*in_ECX);
    glTexParameteri(0xde1,0x2801,0x2601);
    glTexParameteri(0xde1,0x2800,0x2601);
    glTexParameteri(0xde1,0x2802,0x812f);
    glTexParameteri(0xde1,0x2803,0x812f);
  }
  else {
    glBindTexture(0xde1,*in_ECX);
  }
  glPixelStorei(0xcf5,1);
  uVar2 = param_1 - 1U | (int)(param_1 - 1U) >> 1;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 8;
  iVar3 = ((int)uVar2 >> 0x10 | uVar2) + 1;
  uVar2 = param_2 - 1U | (int)(param_2 - 1U) >> 1;
  in_ECX[1] = iVar3;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 8;
  iVar1 = ((int)uVar2 >> 0x10 | uVar2) + 1;
  in_ECX[2] = iVar1;
  if ((iVar3 == param_1) && (iVar1 == param_2)) {
    glTexImage2D(0xde1,0,0x1908,param_1,param_2,0,0x80e1,0x1401,param_3);
    return;
  }
  glTexImage2D(0xde1,0,0x1908,iVar3,iVar1,0,0x80e1,0x1401,0);
  if (param_5 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX[2] - param_2;
  }
  glTexSubImage2D(0xde1,0,0,iVar1,param_1,param_2,0x80e1,0x1401,param_3);
  return;
}

