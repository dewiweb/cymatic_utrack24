// rea decompile_all
// name: FUN_004a67f0
// address: 0x4a67f0
// body: available
// range: 0x4a67f0-0x4a6879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a67f0(int *param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  SIZE_T SVar3;
  LPVOID pvVar4;
  int *in_ECX;
  undefined2 local_24 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_24[0] = param_2;
  piVar1 = in_ECX + 1;
  local_10 = 1;
  uStack_c = 0;
  piVar1[0] = 1;
  piVar1[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_20 = 0;
  local_1c = 1;
  local_18 = 0xffffffff;
  local_14 = 1;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_24,piVar1);
  *in_ECX = iVar2;
  if (-1 < iVar2) {
    SVar3 = GlobalSize((HGLOBAL)in_ECX[2]);
    in_ECX[5] = SVar3;
    pvVar4 = GlobalLock((HGLOBAL)in_ECX[2]);
    in_ECX[4] = (int)pvVar4;
  }
  return;
}

