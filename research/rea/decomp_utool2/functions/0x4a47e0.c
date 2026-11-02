// rea decompile_all
// name: FUN_004a47e0
// address: 0x4a47e0
// body: available
// range: 0x4a47e0-0x4a4940 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a47e0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070371e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x20) == 0) || (*(int *)(*(int *)(in_ECX + 0x20) + 8) == 0)) {
    local_8 = 0;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      DAT_00c8a67c = FUN_006cb960();
    }
    iVar3 = FUN_006cb680(uVar2);
    local_8 = 0xffffffff;
  }
  else if (*(int *)(in_ECX + 0x20) == 0) {
    iVar3 = FUN_006e9580();
  }
  else {
    iVar3 = FUN_006e9580();
  }
  piVar4 = (int *)(**(code **)(*(int *)(iVar3 + 0x1c) + 4))();
  local_8 = 1;
  local_14 = local_14 & 0xffffff00;
  EnumWindows(FUN_00686f00,(LPARAM)&local_14);
  FUN_006d1c90(local_14);
  if (*(char *)(in_ECX + 0x28) == '\0') {
    uVar5 = *(undefined4 *)(in_ECX + 0x24);
    cVar1 = FUN_006d1aa0(0);
    if (cVar1 == '\0') {
      FUN_0048c530();
      FUN_006ca6c0(piVar4,1);
      FUN_006ca640(piVar4,uVar5);
      (**(code **)(*piVar4 + 0x28))(1);
      FUN_006cc500(2,1);
    }
  }
  else {
    uVar5 = FUN_006e5240();
    *(undefined4 *)(in_ECX + 0x1c) = uVar5;
    if (piVar4 != (int *)0x0) {
      (**(code **)*piVar4)(1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

