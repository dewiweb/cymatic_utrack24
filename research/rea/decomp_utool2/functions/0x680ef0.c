// rea decompile_all
// name: FUN_00680ef0
// address: 0x680ef0
// body: available
// range: 0x680ef0-0x681142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00680ef0(float param_1,float param_2,float param_3,char param_4,char param_5,char param_6,
                 char param_7)

{
  int iVar1;
  int *in_ECX;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fVar2;
  float fVar3;
  
  fVar2 = in_XMM3_Da * 0.5;
  if (param_2 <= in_XMM3_Da * 0.5) {
    fVar2 = param_2;
  }
  fVar3 = param_1 * 0.5;
  if (param_3 <= param_1 * 0.5) {
    fVar3 = param_3;
  }
  param_1 = in_XMM2_Da + param_1;
  if (param_4 == '\0') {
    FUN_00682e50();
  }
  else {
    FUN_00682e50();
    FUN_0067c020(in_XMM2_Da,in_XMM1_Da + fVar2,in_XMM2_Da);
  }
  if (param_5 == '\0') {
    FUN_00682d90();
  }
  else {
    FUN_00682d90();
    FUN_0067c020(fVar3 * 0.45 + in_XMM2_Da,in_XMM1_Da + in_XMM3_Da,in_XMM2_Da + fVar3);
  }
  if (param_7 == '\0') {
    FUN_00682d90();
  }
  else {
    FUN_00682d90();
    FUN_0067c020(param_1,(in_XMM1_Da + in_XMM3_Da) - fVar2,param_1);
  }
  if (param_6 == '\0') {
    FUN_00682d90();
  }
  else {
    FUN_00682d90();
    FUN_0067c020(param_1 - fVar3 * 0.45,in_XMM1_Da,param_1 - fVar3);
  }
  iVar1 = in_ECX[2];
  if ((iVar1 != 0) && (*(float *)(*in_ECX + -4 + iVar1 * 4) != 100005.0)) {
    if (in_ECX[1] < iVar1 + 1) {
      FUN_00409cf0((iVar1 + 1) / 2 + iVar1 + 9 & 0xfffffff8);
    }
    iVar1 = in_ECX[2];
    in_ECX[2] = iVar1 + 1;
    *(undefined4 *)(*in_ECX + iVar1 * 4) = 0x47c35280;
  }
  return;
}

