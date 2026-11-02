// rea decompile_all
// name: FUN_000d28d0
// address: 0xd28d0
// body: available
// range: 0xd28d0-0xd2b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d28d0(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_a0 [10];
  ushort local_96;
  undefined4 local_94;
  ushort local_8a;
  undefined1 local_70 [12];
  int local_64;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_50;
  ushort local_4e;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [16];
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  piVar7 = (int *)**(int **)(param_2 + 0x10);
  if (piVar7 != *(int **)(param_2 + 0x10)) {
    local_30 = param_1;
    iStack_2c = param_2;
    local_28 = param_3;
    do {
      puVar6 = (ushort *)piVar7[2];
      piVar8 = piVar7 + 2;
      if (9 < *puVar6 - 0x30) {
        FUN_000028a4(DAT_000d2b6c);
        return 8;
      }
      uVar2 = (*puVar6 - 0x30) * 0xa000000;
      local_70[0] = (undefined1)(uVar2 >> 0x18);
      if (9 < puVar6[1] - 0x30) {
        FUN_000028a4(DAT_000d2b6c,puVar6);
        return 8;
      }
      uVar2 = ((uVar2 >> 0x18) + (uint)puVar6[1]) - 0x30;
      local_70[0] = (undefined1)uVar2;
      uVar3 = (uVar2 & 0xff) - 1;
      if (0x1f < uVar3) {
        FUN_000028a4(DAT_000d2b68,uVar2 & 0xff);
        return 8;
      }
      local_70[0] = (undefined1)uVar3;
      FUN_001d9c54(&local_64,local_30 + 0x340);
      uVar2 = *(uint *)(local_64 + -4);
      iVar9 = *(int *)(*piVar8 + -4);
      if ((*(uint *)(local_64 + -8) < uVar2 + iVar9) || (1 < *(int *)(local_64 + -0xc) + 1U)) {
        if (-iVar9 - 0xfU < uVar2) {
          FUN_0010f7cc(8,DAT_000d2b60,DAT_000d2b60,uVar2,-iVar9 - 0xfU);
        }
        FUN_001d982c(&local_64,*(undefined4 *)(local_64 + -4),0,*piVar8,
                     *(undefined4 *)(*piVar8 + -4),0,iVar9);
      }
      else {
        FUN_00003628(local_64 + uVar2 * 2,*piVar8,(iVar9 + 1) * 2);
        *(uint *)(local_64 + -4) = uVar2 + iVar9;
      }
      iVar9 = FUN_000c38fc(&local_64,auStack_a0,auStack_40,auStack_44,local_60,auStack_48);
      if (iVar9 == 0) {
        FUN_000028a4(DAT_000d2b64,*piVar8);
        FUN_001d9b00(&local_64);
        return 4;
      }
      puVar4 = (undefined4 *)FUN_001db4e0(local_28,local_70);
      uVar1 = local_8a;
      uVar2 = (uint)local_96;
      local_58 = 0;
      uStack_54 = local_94;
      local_50 = local_96;
      local_4e = local_8a;
      uVar5 = local_60[0];
      iVar9 = FUN_001d9c54(auStack_4c,&local_64);
      puVar10 = (undefined4 *)(iVar9 + -0xc);
      if (uVar1 < 0x11) {
        uVar5 = FUN_00006158(uVar5,uVar2 << 1);
        *puVar10 = uVar5;
      }
      else if (uVar1 < 0x19) {
        uVar5 = FUN_00006158(uVar5,uVar2 * 3);
        *puVar10 = uVar5;
      }
      if (puVar4 != puVar10) {
        *puVar4 = *puVar10;
        puVar4[1] = *(undefined4 *)(iVar9 + -8);
        *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar9 + -4);
        *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(iVar9 + -2);
        FUN_001d9d2c(puVar4 + 3,iVar9);
      }
      FUN_001d9b00(auStack_4c);
      FUN_001d9b00(&local_64);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(param_2 + 0x10));
  }
  return 0;
}

