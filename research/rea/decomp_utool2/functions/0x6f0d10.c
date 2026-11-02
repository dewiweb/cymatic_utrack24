// rea decompile_all
// name: FUN_006f0d10
// address: 0x6f0d10
// body: available
// range: 0x6f0d10-0x6f0e52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0d10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int local_38;
  int local_34;
  char local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729783;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = in_ECX[0x1f];
  local_14 = '\0';
  local_24 = iVar4;
  FUN_006f2c40(param_1);
  local_8 = 0;
  local_28 = '\0';
  local_38 = iVar4;
  FUN_006f2c40(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006ecff0(local_1c);
  iVar1 = in_ECX[0xbd];
  piVar5 = (int *)(*(int *)(iVar1 + 0x18) + 0xc);
  LOCK();
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    *piVar5 = 1;
    iVar4 = 0;
  }
  UNLOCK();
  if ((iVar4 == 0) && (cVar2 = FUN_0063e270(uVar3), cVar2 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0xc) = 0;
    UNLOCK();
  }
  (**(code **)(*in_ECX + 0xd4))();
  in_ECX[0x28] = -1;
  if ((in_ECX[0x32] <= local_34) && (local_20 <= in_ECX[0x37])) {
    FUN_006f09a0();
  }
  if ((*(char *)((int)in_ECX + 0xa7) != '\0') &&
     ((local_34 < in_ECX[0x2d] || (in_ECX[0x2d] < local_20)))) {
    FUN_006f0a50(&local_24,0);
  }
  FUN_006f0800();
  if ((local_28 != '\0') && (local_28 = '\0', local_38 != 0)) {
    FUN_00415ff0(&local_38);
  }
  if ((local_14 != '\0') && (local_14 = 0, local_24 != 0)) {
    FUN_00415ff0(&local_24);
  }
  ExceptionList = local_10;
  return;
}

