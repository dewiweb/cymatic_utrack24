// rea decompile_all
// name: FUN_006e6ce0
// address: 0x6e6ce0
// body: available
// range: 0x6e6ce0-0x6e6e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728945;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  operator_new(0xe0);
  local_18 = &DAT_00bfe12c;
  local_8 = 1;
  local_14 = 1;
  piVar2 = (int *)FUN_006e6560(param_1,&local_18);
  local_8 = 0xffffffff;
  iVar4 = *(int *)(in_ECX + 0xf4) + 1;
  if (*(int *)(in_ECX + 0xf0) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0xf4) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(in_ECX + 0xf4);
  *(int *)(in_ECX + 0xf4) = iVar4 + 1;
  *(int **)(*(int *)(in_ECX + 0xec) + iVar4 * 4) = piVar2;
  *(byte *)(piVar2 + 0x1a) = *(byte *)(piVar2 + 0x1a) | 0xa0;
  FUN_006c8250(iVar4,param_2,iVar4);
  FUN_006c80f0(param_3);
  FUN_006c80f0(param_4);
  uVar5 = -(uint)(in_ECX != 0) & in_ECX + 0x78U;
  if (uVar5 != 0) {
    FUN_004097d0(uVar5);
  }
  iVar4 = FUN_006e9580();
  pcVar1 = *(code **)(*(int *)(iVar4 + 0x1c) + 0x10);
  if (pcVar1 == FUN_006de160) {
    uVar6 = 0x1c;
  }
  else {
    uVar6 = (*pcVar1)();
  }
  uVar3 = FUN_006c65e0(uVar6);
  FUN_006e9790(piVar2[4],piVar2[5],uVar3,uVar6);
  (**(code **)(*piVar2 + 0x28))(1);
  FUN_006e5050(piVar2,0);
  FUN_0068e810(0);
  ExceptionList = local_10;
  return;
}

