// rea decompile_all
// name: FUN_0043d5d0
// address: 0x43d5d0
// body: available
// range: 0x43d5d0-0x43d759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d5d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  float10 fVar6;
  undefined1 local_24 [4];
  undefined1 auStack_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e10b8;
  local_14 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  iVar4 = *(int *)(in_ECX + 0x74);
  iVar2 = iVar4 / 10;
  *(undefined4 *)(in_ECX + 0x84) = 0xffffffd0;
  *(undefined4 *)(in_ECX + 0x88) = 0xffffffe8;
  *(undefined4 *)(in_ECX + 0x8c) = 0xfffffff4;
  *(undefined4 *)(in_ECX + 0x90) = 0xfffffffa;
  *(undefined4 *)(in_ECX + 0x94) = 0xfffffffd;
  iVar5 = iVar4 / 2;
  *(int *)(in_ECX + 0x9c) = (iVar5 - iVar2) / 2 + iVar2;
  *(int *)(in_ECX + 0xa0) = iVar5;
  iVar5 = iVar5 + ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
  *(int *)(in_ECX + 0x98) = iVar2;
  *(int *)(in_ECX + 0xa4) = iVar5;
  *(int *)(in_ECX + 0xa8) = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + iVar5;
  uVar3 = FUN_005b3fb0(uVar1);
  *(undefined4 *)(in_ECX + 0xb0) = uVar3;
  iVar4 = FUN_0043d950(in_ECX);
  iVar2 = FUN_0043d950(in_ECX);
  FUN_0046537e(local_24);
  local_c = 0;
  FUN_0043a9ae(local_24,*(undefined4 *)(in_ECX + 0xb0),iVar2 - iVar4);
  FUN_0049f5e8();
  FUN_004c4d7a();
  local_c = 0xffffffff;
  FUN_004652d6();
  fVar6 = (float10)FUN_0049fa3d();
  *(float *)(in_ECX + 0xb4) = (float)fVar6;
  FUN_0046537e(auStack_20);
  local_c = 1;
  FUN_0049fa60(auStack_20);
  FUN_004652d6();
  ExceptionList = local_14;
  return;
}

