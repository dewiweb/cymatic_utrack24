// rea decompile_all
// name: FUN_006d8350
// address: 0x6d8350
// body: available
// range: 0x6d8350-0x6d84a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d8350(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,float param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
  undefined4 uVar12;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727704;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)((int)param_7 + 0x69) & 0x10) == 0) {
    in_ECX = (undefined4 *)0x0;
    if (*(int *)((int)param_7 + 0xc) != 0) {
      puStack_28 = (undefined4 *)0x6d838b;
      cVar4 = FUN_006e6320();
      in_ECX = extraout_ECX;
      if (cVar4 == '\0') goto LAB_006d8399;
    }
    param_7 = 1.0;
  }
  else {
LAB_006d8399:
    param_7 = 0.25;
  }
  ppuVar11 = &puStack_28;
  uVar9 = 0x1003240;
  puVar8 = local_14;
  puStack_28 = in_ECX;
  FUN_006e8e70(puVar8,0x1003240,1);
  uVar10 = 0x6d83c6;
  FUN_006842b0(ppuVar11);
  puVar2 = param_1;
  FUN_00684c50();
  iVar3 = param_5;
  puStack_28 = &param_1;
  param_7 = (float)param_5 * 0.85;
  if (14.0 <= param_7) {
    param_7 = 14.0;
  }
  (**(code **)(*(int *)*puVar2 + 0x6c))();
  puVar5 = (undefined4 *)FUN_00683640();
  local_8 = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    *(undefined1 *)(puVar2 + 2) = 0;
    puStack_28 = (undefined4 *)0x6d8420;
    (**(code **)(*(int *)*puVar2 + 0x34))();
  }
  uVar12 = 0x6d8428;
  puStack_28 = puVar5;
  (**(code **)(*(int *)*puVar2 + 0x68))();
  local_8 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_1 + 1;
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      uVar12 = 1;
      uVar10 = 0x6d844c;
      (**(code **)*param_1)(1);
    }
  }
  iVar6 = iVar3 / (int)param_7;
  iVar7 = 1;
  if (1 < iVar6) {
    iVar7 = iVar6;
  }
  FUN_00472d90(param_3,param_4,iVar3);
  FUN_00682290(param_6,0x24,iVar7,0,puVar8,uVar9,uVar10,uVar12);
  ExceptionList = local_10;
  return;
}

