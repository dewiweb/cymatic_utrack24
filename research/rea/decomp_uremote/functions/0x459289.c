// rea decompile_all
// name: FUN_00459289
// address: 0x459289
// body: available
// range: 0x459289-0x45950d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459289(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 **ppuStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_3c;
  int local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 auStack_2c [4];
  undefined4 *local_28;
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0639;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  local_28 = &piStack_50;
  puStack_54 = (undefined1 *)0x4592c8;
  FUN_004d076d();
  puStack_54 = (undefined1 *)0x4592d0;
  FUN_0047cda7();
  piStack_50 = &local_38;
  ppuVar3 = (undefined4 **)(*(int *)(in_ECX + 0x1c) / 2);
  puStack_54 = (undefined1 *)0x4592e9;
  FUN_0046537e();
  local_c = 0;
  piStack_50 = &local_38;
  puStack_54 = (undefined1 *)0x4592fe;
  local_34 = (undefined1 *)FUN_0049fa60();
  local_c = 0xffffffff;
  piStack_50 = (int *)0x459310;
  FUN_004652d6();
  piStack_50 = &local_38;
  puStack_54 = (undefined1 *)0x45931f;
  FUN_0046537e();
  piStack_50 = &local_38;
  local_30 = (undefined4 *)(in_ECX + 0x84);
  local_c = 1;
  iVar4 = *(int *)(in_ECX + 0x18);
  puStack_54 = (undefined1 *)0x45933e;
  iVar1 = FUN_0049fa60();
  iVar4 = iVar4 - (int)local_34;
  local_c = 0xffffffff;
  piStack_50 = (int *)0x45935b;
  FUN_004652d6();
  local_38 = (*(int *)(in_ECX + 0x18) - (iVar4 - iVar1) / 2) - (int)local_34;
  local_34 = (undefined1 *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x7c) + 0x1e0);
  if (**(char **)(in_ECX + 0x7c) != '\0') {
    piStack_50 = (int *)(in_ECX + 0x80);
    puStack_54 = (undefined1 *)0x459392;
    FUN_0047ceaa();
    puStack_54 = auStack_2c;
    ppuStack_58 = (undefined4 **)0x4593b3;
    puStack_54 = (undefined1 *)FUN_0046537e();
    ppuStack_58 = &local_30;
    puStack_10 = (undefined1 *)0x2;
    uVar2 = FUN_00465bec();
    puStack_54 = (undefined1 *)0x1;
    puStack_20 = (undefined1 *)&ppuStack_58;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
    ppuStack_58 = (undefined4 **)0x21;
    FUN_0047d02d(param_1,uVar2,uStack_3c,0,*(undefined4 *)(in_ECX + 0x18),ppuVar3);
    puStack_54 = (undefined1 *)0x4593fd;
    FUN_004652d6();
    puStack_10 = (undefined1 *)0xffffffff;
    puStack_54 = (undefined1 *)0x45940b;
    FUN_004652d6();
    puStack_54 = local_34;
    ppuStack_58 = (undefined4 **)0x459414;
    FUN_0047ceaa();
    piStack_50 = (int *)0x1;
    puStack_1c = (undefined1 *)&puStack_54;
    puStack_54 = (undefined1 *)0x22;
    ppuStack_58 = ppuVar3;
    FUN_0047d02d(param_1,in_ECX + 0x7c,0,0,local_38);
  }
  local_28 = (undefined4 *)(in_ECX + 0x78);
  if (*(char *)*local_28 != '\0') {
    piStack_50 = (int *)(in_ECX + 0x80);
    puStack_54 = (undefined1 *)0x459457;
    FUN_0047ceaa();
    puStack_54 = auStack_24;
    ppuStack_58 = (undefined4 **)0x459478;
    puStack_54 = (undefined1 *)FUN_0046537e();
    ppuStack_58 = &local_28;
    puStack_10 = (undefined1 *)0x4;
    uVar2 = FUN_00465bec();
    puStack_54 = (undefined1 *)0x1;
    puStack_20 = (undefined1 *)&ppuStack_58;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
    ppuStack_58 = (undefined4 **)0x21;
    FUN_0047d02d(param_1,uVar2,uStack_3c,ppuVar3,*(undefined4 *)(in_ECX + 0x18),ppuVar3);
    puStack_54 = (undefined1 *)0x4594c1;
    FUN_004652d6();
    puStack_10 = (undefined1 *)0xffffffff;
    puStack_54 = (undefined1 *)0x4594cf;
    FUN_004652d6();
    puStack_54 = local_34;
    ppuStack_58 = (undefined4 **)0x4594d8;
    FUN_0047ceaa();
    piStack_50 = (int *)0x1;
    puStack_1c = (undefined1 *)&puStack_54;
    puStack_54 = (undefined1 *)0x22;
    ppuStack_58 = ppuVar3;
    FUN_0047d02d(param_1,local_28,0,ppuVar3,local_38);
  }
  ExceptionList = local_14;
  return;
}

