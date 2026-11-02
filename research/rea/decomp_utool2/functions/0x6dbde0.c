// rea decompile_all
// name: FUN_006dbde0
// address: 0x6dbde0
// body: available
// range: 0x6dbde0-0x6dbf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dbde0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6,undefined4 *param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_9;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727b4c;
  local_10 = ExceptionList;
  uStack_20 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)(param_9 + 0x69) & 0x10) == 0) {
    uStack_24 = 0;
    if (*(int *)(param_9 + 0xc) != 0) {
      uStack_24 = 0x6dbe1c;
      cVar3 = FUN_006e6320();
      in_ECX = extraout_ECX;
      uStack_24 = extraout_ECX;
      if (cVar3 == '\0') goto LAB_006dbe70;
    }
    if (((char)param_7 == '\0') && (param_6 == '\0')) {
      FUN_006e8e70(&uStack_24,0x1000600,0);
    }
    else {
      FUN_006e8e70(&uStack_24,0x1000900,0);
      FUN_00684a80();
      uStack_24 = extraout_ECX_00;
      FUN_006e8e70(&uStack_24,0x1000800,0);
    }
  }
  else {
LAB_006dbe70:
    puVar6 = &uStack_24;
    uStack_24 = in_ECX;
    FUN_006e8e70(&param_7,0x1000600,0);
    FUN_00684d10(puVar6);
  }
  FUN_00684c50();
  uStack_24 = param_5;
  puVar6 = &param_7;
  uVar5 = 0x6dbeaf;
  uVar4 = FUN_006dbf50(puVar6,iVar7,param_4);
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    uStack_24 = 0x6dbec9;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar8 = 0x6dbed1;
  uStack_24 = uVar4;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (param_7 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_7 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar8 = 1;
      iVar7 = 0x6dbef5;
      (**(code **)*param_7)(1);
    }
  }
  FUN_00472d90(0,param_2,param_3);
  FUN_00682290(param_5,0x24,1,extraout_EDX,uVar5,puVar6,iVar7,uVar8);
  ExceptionList = local_10;
  return;
}

