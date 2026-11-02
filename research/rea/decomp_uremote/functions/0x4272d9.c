// rea decompile_all
// name: FUN_004272d9
// address: 0x4272d9
// body: available
// range: 0x4272d9-0x4274e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004272d9(int param_1,char param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte **ppbVar9;
  byte *local_20 [5];
  undefined4 *local_c;
  int local_8;
  
  local_8 = *(int *)(*(int *)(param_1 + 8) + 0x8c);
  puVar6 = (undefined4 *)(param_1 + 0x7c);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x8c) + -0x20 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  local_c = puVar6;
  if ((uVar3 + 0x20 & 0xffffffc0) != uVar3) {
    FUN_00426b90();
  }
  if (local_8 != 0) {
    _memcpy(*(void **)(param_1 + 0x88),*(void **)(param_1 + 0x8c),
            (uint)*(ushort *)(param_1 + 0x84) << 3);
  }
  puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + 0xac);
  puVar8 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x11c);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34)
    ;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = 0x10000;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = 0x10000;
    _memcpy(*(void **)(param_1 + 0x90),*(void **)(param_1 + 0x8c),
            (uint)*(ushort *)(param_1 + 0x84) << 3);
  }
  iVar4 = local_8;
  puVar1 = (uint *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  *puVar1 = *puVar1 + 0x20 & 0xffffffc0;
  puVar1 = (uint *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  *puVar1 = *puVar1 + 0x20 & 0xffffffc0;
  if (local_8 != 0) {
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x38);
    ppbVar9 = local_20;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppbVar9 = (byte *)*puVar7;
      puVar7 = puVar7 + 1;
      ppbVar9 = ppbVar9 + 1;
    }
    iVar4 = FUN_0042934d(iVar4);
    if (iVar4 != 0) {
      return iVar4;
    }
    *(char *)(*(int *)(param_1 + 0xa0) + 0x230) = param_2;
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x90);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar4 = FUN_004296a7();
    if ((iVar4 != 0) && (*(char *)(*(int *)(param_1 + 0xa0) + 0x231) != '\0')) {
      return iVar4;
    }
    *local_20[2] = *local_20[2] | *(char *)(*(int *)(param_1 + 0xa0) + 0x154) << 5 | 4U;
    puVar6 = local_c;
  }
  if (*(char *)(param_1 + 0x41) == '\0') {
    uVar2 = *(ushort *)(puVar6 + 2);
    iVar4 = puVar6[4];
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar4 + -0x20 + (uint)uVar2 * 8);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + -0x1c + (uint)uVar2 * 8);
    uVar2 = *(ushort *)(puVar6 + 2);
    iVar4 = puVar6[4];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + -0x18 + (uint)uVar2 * 8);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + -0x14 + (uint)uVar2 * 8);
    uVar2 = *(ushort *)(puVar6 + 2);
    iVar4 = puVar6[4];
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar4 + -0x10 + (uint)uVar2 * 8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar4 + -0xc + (uint)uVar2 * 8);
    uVar2 = *(ushort *)(puVar6 + 2);
    iVar4 = puVar6[4];
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar4 + -8 + (uint)uVar2 * 8);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar4 + -4 + (uint)uVar2 * 8);
  }
  return 0;
}

