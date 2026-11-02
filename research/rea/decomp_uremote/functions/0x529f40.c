// rea decompile_all
// name: FUN_00529f40
// address: 0x529f40
// body: available
// range: 0x529f40-0x52a219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00529f40(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  undefined4 local_3c;
  uint local_18;
  char local_12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0337;
  local_10 = ExceptionList;
  uVar7 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_12 = '\x01';
  bVar4 = false;
  bVar3 = false;
  uVar1 = *(uint *)(in_ECX + 0x10);
  *(uint *)(in_ECX + 0x10) = uVar1 + 1;
  *(uint *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + (uint)(0xfffffffe < uVar1);
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(in_ECX + 0x20);
  *(uint *)(in_ECX + 0x20) = uVar1 + *(uint *)(in_ECX + 0x20);
  *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + (uint)CARRY4(uVar1,uVar2);
  if ((*(ushort *)(param_1 + 0x4c) & 2) == 2) {
    bVar4 = false;
    bVar3 = true;
  }
  else if (((*(ushort *)(param_1 + 0x4c) & 0xc) == 0) || ((*(ushort *)(param_1 + 0x4c) & 0xc) == 8))
  {
    bVar3 = true;
  }
  else if ((*(ushort *)(param_1 + 0x4c) & 0x10) == 0x10) {
    bVar3 = true;
  }
  else if (*(short *)(param_1 + 0x12) != 0) {
    for (local_18 = 0; local_18 < *(ushort *)(param_1 + 0x12); local_18 = local_18 + 1) {
      uVar8 = FUN_005378a0(local_18);
      cVar5 = FUN_00526ae0(uVar8);
      if (cVar5 == '\0') {
        bVar3 = true;
      }
      else {
        bVar4 = true;
      }
    }
  }
  if (bVar3) {
    iVar9 = FUN_005323b0(uVar7);
    if (iVar9 != 0) {
      if (*(int *)(in_ECX + 8) == 0) {
        local_12 = '\0';
      }
      else if (param_2 == '\0') {
        FUN_00515830();
        sVar6 = (**(code **)(**(int **)(in_ECX + 8) + 4))(iVar9);
        local_12 = '\x01' - (sVar6 != 0);
        FUN_00515860();
      }
      else {
        iVar10 = FUN_005af82d(0x14);
        local_8 = 0;
        if (iVar10 == 0) {
          local_3c = 0;
        }
        else {
          local_3c = FUN_0052c1c0(iVar9);
        }
        local_8 = 0xffffffff;
        FUN_00517bb0(local_3c);
        iVar9 = *(int *)(in_ECX + 0x30);
        FUN_00515830();
        SetEvent(*(HANDLE *)(iVar9 + 0x3b8));
        *(undefined4 *)(in_ECX + 0x98) = 1;
      }
      FUN_0052f1a0();
    }
  }
  else if (bVar4) {
    iVar9 = FUN_005323b0(uVar7);
    if (iVar9 != 0) {
      if (*(int *)(in_ECX + 8) == 0) {
        local_12 = '\0';
      }
      else {
        sVar6 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))(iVar9);
        local_12 = '\x01' - (sVar6 != 0);
      }
      FUN_0052f1a0();
    }
  }
  ExceptionList = local_10;
  return local_12;
}

