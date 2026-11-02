// rea decompile_all
// name: FUN_004973b0
// address: 0x4973b0
// body: available
// range: 0x4973b0-0x4974c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004973b0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702708;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(byte *)(in_ECX + 0x1a) & 2) == 0) {
    return;
  }
  ExceptionList = &local_10;
  puVar6 = (undefined4 *)FUN_0040de70(in_ECX);
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    puVar6[1] = puVar6[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  puVar3 = (undefined4 *)in_ECX[0x37];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x37] = 0;
    (**(code **)*puVar3)(1,uVar5);
  }
  puVar3 = (undefined4 *)in_ECX[0x36];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x36] = 0;
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 4) != 0)) {
      *(int *)in_ECX[0x2a] = *(int *)(param_1 + 0x18);
    }
    if ((*(int **)(param_1 + 0x14) == (int *)0x0) ||
       (cVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))(), cVar4 != '\0')) {
      uVar7 = *(undefined4 *)(param_1 + 4);
      goto LAB_00497475;
    }
  }
  uVar7 = 0;
LAB_00497475:
  FUN_006e8fd0(uVar7);
  if (param_2 != '\0') {
    if (puVar6 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    if (puVar6[2] != 0) {
      (**(code **)(*in_ECX + 0x28))(0);
    }
  }
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar6 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar6)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

