// rea decompile_all
// name: FUN_006b2fb0
// address: 0x6b2fb0
// body: available
// range: 0x6b2fb0-0x6b30ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2fb0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00723ba0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX[1] == 0) {
    return;
  }
  if (*(int *)(in_ECX[1] + 8) == 0) {
    return;
  }
  piVar1 = in_ECX + 6;
  if ((char)in_ECX[6] != '\0') {
    return;
  }
  iVar2 = *piVar1;
  ExceptionList = &local_10;
  *(undefined1 *)piVar1 = 1;
  local_8 = 0;
  iVar4 = FUN_006d1d80(uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x2c);
  }
  if (iVar4 != in_ECX[2]) {
    (**(code **)(*in_ECX + 0x24))();
    if ((in_ECX[1] == 0) || (*(int *)(in_ECX[1] + 8) == 0)) goto LAB_006b3096;
    in_ECX[2] = iVar4;
  }
  FUN_006b2cc0();
  FUN_006b2d10();
  if (in_ECX[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(in_ECX[1] + 8);
  }
  (**(code **)(*in_ECX + 4))(uVar5,1,1);
  if ((in_ECX[1] != 0) && (*(int *)(in_ECX[1] + 8) != 0)) {
    if (in_ECX[1] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(in_ECX[1] + 8);
    }
    (**(code **)(*in_ECX + 0xc))(uVar5);
  }
LAB_006b3096:
  *(char *)piVar1 = (char)iVar2;
  ExceptionList = local_10;
  return;
}

