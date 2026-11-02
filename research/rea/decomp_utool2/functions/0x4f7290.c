// rea decompile_all
// name: FUN_004f7290
// address: 0x4f7290
// body: available
// range: 0x4f7290-0x4f744b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7290(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar8;
  undefined4 **ppuStack_28;
  uint uStack_24;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070642b;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] != 0) {
      ppuStack_28 = (undefined4 **)0x4f72ca;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_004f72d4;
    }
    local_14 = (undefined4 *)CONCAT31(local_14._1_3_,1);
  }
  else {
LAB_004f72d4:
    local_14 = (undefined4 *)((uint)local_14 & 0xffffff00);
  }
  FUN_004f6fd0(param_1,in_ECX[0x39],in_ECX[0x39],in_ECX[0x3b],local_14,in_stack_ffffffd4);
  pppuVar6 = &ppuStack_28;
  uVar7 = 0x1006501;
  uVar5 = 0x4f7333;
  FUN_006e8e70(&ppuStack_28,0x1006501,0);
  FUN_00684c50();
  ppuStack_28 = &local_14;
  (**(code **)(*(int *)*param_1 + 0x6c))();
  ppuVar3 = (undefined4 **)FUN_00683640();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ppuStack_28 = (undefined4 **)0x4f7378;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar8 = 0x4f7380;
  ppuStack_28 = ppuVar3;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uVar8 = 1;
      uVar7 = 0x4f73a4;
      (**(code **)*local_14)(1);
    }
  }
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] == 0) goto LAB_004f73da;
    uVar8 = 0x4f73b6;
    cVar2 = FUN_006e6320();
    if (cVar2 != '\0') goto LAB_004f73da;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar8 = 0x3f000000;
  uVar7 = 0x4f73da;
  (**(code **)(*(int *)*param_1 + 0x48))(0x3f000000);
LAB_004f73da:
  if ((*(char *)in_ECX[0x22] != '\0') &&
     (iVar4 = in_ECX[6] - ((int)(float)in_ECX[0x39] + 5), iVar4 != 2 && -1 < iVar4 + -2)) {
    FUN_00472d90(0,(in_ECX[6] - ((int)(float)in_ECX[0x39] + 5)) + -2,in_ECX[7]);
    FUN_00682290(in_ECX + 0x22,0x21,10,0,uVar5,pppuVar6,uVar7,uVar8);
  }
  ExceptionList = local_10;
  return;
}

