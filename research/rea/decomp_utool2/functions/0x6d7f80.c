// rea decompile_all
// name: FUN_006d7f80
// address: 0x6d7f80
// body: available
// range: 0x6d7f80-0x6d80e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d7f80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 **ppuVar8;
  undefined4 *puStack_38;
  uint uStack_34;
  int local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007276b8;
  local_10 = ExceptionList;
  uStack_34 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)((int)param_4 + 0x69) & 0x10) == 0) {
    in_ECX = (undefined4 *)0x0;
    if (*(int *)((int)param_4 + 0xc) != 0) {
      puStack_38 = (undefined4 *)0x6d7fbf;
      cVar3 = FUN_006e6320();
      in_ECX = extraout_ECX;
      if (cVar3 == '\0') goto LAB_006d7fcd;
    }
    param_4 = (undefined4 *)0x3f800000;
  }
  else {
LAB_006d7fcd:
    param_4 = (undefined4 *)0x3f19999a;
  }
  ppuVar8 = &puStack_38;
  puVar5 = local_14;
  puStack_38 = in_ECX;
  FUN_006e8e70(puVar5,0x1008301,0);
  FUN_00684d10(ppuVar8);
  puVar1 = param_1;
  FUN_00684c50();
  iVar4 = param_3;
  if (0x18 < param_3) {
    iVar4 = 0x18;
  }
  puStack_38 = &param_1;
  param_4 = (undefined4 *)((float)iVar4 * 0.65);
  (**(code **)(*(int *)*puVar1 + 0x6c))();
  param_4 = (undefined4 *)FUN_00683640();
  local_8 = 0;
  if (*(char *)(puVar1 + 2) != '\0') {
    *(undefined1 *)(puVar1 + 2) = 0;
    puStack_38 = (undefined4 *)0x6d8057;
    (**(code **)(*(int *)*puVar1 + 0x34))();
  }
  puStack_38 = param_4;
  (**(code **)(*(int *)*puVar1 + 0x68))();
  local_8 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = param_1 + 1;
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  piVar7 = &local_24;
  uVar6 = 0x6d8091;
  iVar4 = iVar2;
  FUN_006d7f30(piVar7,iVar2);
  FUN_00472d90(local_20,local_24 + -5,local_18);
  FUN_00682290(iVar2 + 4,0x21,2,0,puVar5,uVar6,piVar7,iVar4);
  ExceptionList = local_10;
  return;
}

