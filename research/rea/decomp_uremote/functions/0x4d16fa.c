// rea decompile_all
// name: FUN_004d16fa
// address: 0x4d16fa
// body: available
// range: 0x4d16fa-0x4d1986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d16fa(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int iStack_5c;
  int *local_4c [13];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e30ad;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar7 = *(int *)(in_ECX + 0x18);
  }
  else {
    iVar7 = *(int *)(in_ECX + 0x1c);
  }
  piVar3 = (int *)thunk_FUN_004c1d58(DAT_00955fd4 ^ (uint)&stack0xffffff98);
  local_4c[0] = piVar3;
  cVar2 = (**(code **)(*piVar3 + 4))();
  if (cVar2 == '\0') {
    puVar5 = *(undefined4 **)(in_ECX + 0xe8);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xe8) = 0;
      (**(code **)*puVar5)(1);
    }
    puVar5 = *(undefined4 **)(in_ECX + 0xec);
    if ((puVar5 != (undefined4 *)0x0) && (*(int *)(in_ECX + 0xec) = 0, puVar5 != (undefined4 *)0x0))
    {
      (**(code **)*puVar5)(1);
    }
  }
  else {
    if (*(int *)(in_ECX + 0xe8) == 0) {
      iVar4 = FUN_005af82d(0xe4);
      uStack_c = 0;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_004d0e7e((*(char *)(in_ECX + 0xe4) != '\0') - 1U & 3,in_ECX);
      }
      uStack_c = 0xffffffff;
      puVar1 = *(undefined4 **)(in_ECX + 0xe8);
      if ((puVar1 != puVar5) &&
         (*(undefined4 **)(in_ECX + 0xe8) = puVar5, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      FUN_004c1064(0xffffffff);
      iVar4 = FUN_005af82d(0xe4);
      uStack_c = 1;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_004d0e7e((*(char *)(in_ECX + 0xe4) != '\0') + '\x01',in_ECX);
      }
      uStack_c = 0xffffffff;
      puVar1 = *(undefined4 **)(in_ECX + 0xec);
      if ((puVar1 != puVar5) &&
         (*(undefined4 **)(in_ECX + 0xec) = puVar5, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      FUN_004c1064(0xffffffff);
      FUN_004d1382(*(undefined4 *)(in_ECX + 0xd8),*(undefined4 *)(in_ECX + 0xdc));
      piVar3 = local_4c[0];
    }
    uVar6 = (**(code **)(*piVar3 + 0x1c))();
    FUN_00440367(uVar6);
  }
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if (iVar7 < iVar4 + 0x20) {
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    *(int *)(in_ECX + 0xc0) = iVar7 / 2;
  }
  else {
    *(int *)(in_ECX + 0xc0) = iStack_5c;
    *(int *)(in_ECX + 0xc4) = iVar7 + iStack_5c * -2;
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    FUN_004c2047(local_4c);
    if (*(char *)(in_ECX + 0xe4) == '\0') {
      FUN_004f5b9e(iStack_5c);
      FUN_004c0c1f();
      FUN_004f5bd0(iStack_5c);
      FUN_004c0c1f();
    }
    else {
      FUN_004f5b6b(iStack_5c);
      FUN_004c0c1f();
      FUN_004f5c0c(iStack_5c);
      FUN_004c0c1f();
    }
  }
  FUN_004d142f();
  ExceptionList = pvStack_18;
  return;
}

