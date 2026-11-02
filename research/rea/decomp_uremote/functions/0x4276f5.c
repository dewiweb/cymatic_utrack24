// rea decompile_all
// name: FUN_004276f5
// address: 0x4276f5
// body: available
// range: 0x4276f5-0x42786a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004276f5(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_10;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar9 = (uint)*(short *)(iVar3 + 0x16);
  bVar6 = *(byte *)(in_EAX + 4) & 200;
  if ((bVar6 != 0) && (param_3 < uVar9)) {
    local_10 = uVar9 - param_3;
    do {
      FUN_00410783();
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if ((*(ushort *)(in_EAX + 4) & 2) == 0) {
    uVar7 = *(int *)(in_EAX + 8) + param_2;
    uVar8 = *(int *)(in_EAX + 0xc) + param_3;
    if ((param_3 <= uVar7) || (uVar9 <= uVar8)) {
      return 0x15;
    }
    iVar3 = *(int *)(iVar3 + 0x18);
    piVar1 = (int *)(iVar3 + uVar7 * 8);
    piVar2 = (int *)(iVar3 + uVar8 * 8);
    uVar9 = *piVar1 - *piVar2;
    uVar7 = piVar1[1] - piVar2[1];
  }
  else {
    uVar9 = *(uint *)(in_EAX + 8);
    uVar7 = *(uint *)(in_EAX + 0xc);
    if ((uVar9 == 0) && (uVar7 == 0)) {
      return 0;
    }
    if ((bVar6 != 0) && ((*(ushort *)(in_EAX + 4) & 0x800) != 0)) {
      uVar5 = *(undefined4 *)(in_EAX + 0x14);
      thunk_FUN_00401000(*(undefined4 *)(in_EAX + 0x10),*(undefined4 *)(in_EAX + 0x10));
      thunk_FUN_00401000(uVar5,uVar5);
      uVar4 = FUN_0040d4c7();
      uVar5 = *(undefined4 *)(in_EAX + 0x1c);
      thunk_FUN_00401000(*(undefined4 *)(in_EAX + 0x18),*(undefined4 *)(in_EAX + 0x18));
      thunk_FUN_00401000(uVar5,uVar5);
      uVar5 = FUN_0040d4c7();
      uVar9 = thunk_FUN_00401000(uVar9,uVar4);
      uVar7 = thunk_FUN_00401000(uVar7,uVar5);
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34);
      uVar9 = thunk_FUN_00401000(uVar9,*(undefined4 *)(*(int *)(param_1 + 4) + 0x30));
      uVar7 = thunk_FUN_00401000(uVar7,uVar5);
      if ((*(byte *)(in_EAX + 4) & 4) != 0) {
        uVar9 = uVar9 + 0x20 & 0xffffffc0;
        uVar7 = uVar7 + 0x20 & 0xffffffc0;
      }
    }
  }
  if ((uVar9 != 0) || (uVar7 != 0)) {
    FUN_00426b90();
  }
  return 0;
}

