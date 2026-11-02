// rea decompile_all
// name: FUN_004e1801
// address: 0x4e1801
// body: available
// range: 0x4e1801-0x4e195b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e1801(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_94 [128];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e4615;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffff58;
  ExceptionList = &local_14;
  puVar5 = *(undefined4 **)(unaff_EBX + 0xd4);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBX + 0xd4) = 0;
    (**(code **)*puVar5)(1,uVar3);
  }
  if ((((in_ECX == 0) || (*(char *)(in_ECX + 0x7c) == '\0')) || (*(int *)(in_ECX + 0x88) == 0)) ||
     (*(int *)(*(int *)(in_ECX + 0x88) + 8) < 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0xfc;
    iVar4 = FUN_005af82d(0xfc);
    uStack_c = 0;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(unaff_EBX + 0xa4);
      uVar1 = *(undefined4 *)(in_ECX + 0x88);
      uVar3 = (uint)*(byte *)(unaff_EBX + 0xbe);
      uVar7 = 0;
      uVar6 = 0;
      FUN_004c0848(in_ECX,auStack_94);
      FUN_004e24fd(uVar6,uVar8,uVar7,uVar3,uVar9);
      FUN_004e251d(uVar6);
      uVar8 = FUN_004e24c6();
      puVar5 = (undefined4 *)FUN_004e054f(iVar4,uVar1,unaff_EBX,uVar8,uVar7,uVar3,uVar9);
    }
    uStack_c = 0xffffffff;
    puVar2 = *(undefined4 **)(unaff_EBX + 0xd4);
    if ((puVar2 != puVar5) &&
       (*(undefined4 **)(unaff_EBX + 0xd4) = puVar5, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(**(int **)(unaff_EBX + 0xd4) + 0x28))(1);
    FUN_004c1397(0,0,0);
    FUN_004c052f(0);
    uVar8 = 1;
  }
  ExceptionList = local_14;
  return uVar8;
}

