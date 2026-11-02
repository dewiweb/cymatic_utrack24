// rea decompile_all
// name: FUN_000d37a8
// address: 0xd37a8
// body: available
// range: 0xd37a8-0xd3a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d37a8(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 auStack_a0 [10];
  ushort local_96;
  undefined4 local_94;
  ushort local_8a;
  undefined1 local_6c [4];
  int local_68 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  ushort local_58;
  ushort local_56;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  piVar7 = (int *)**(int **)(param_2 + 0x10);
  local_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  if (piVar7 != *(int **)(param_2 + 0x10)) {
    do {
      iVar4 = piVar7[2];
      piVar8 = piVar7 + 2;
      uVar6 = *(ushort *)(iVar4 + *(int *)(iVar4 + -4) * 2 + -0xc) - 0x30;
      if (9 < uVar6) {
LAB_000d3a1c:
        FUN_000028a4(DAT_000d3a3c);
        return 8;
      }
      uVar6 = uVar6 * 0xa000000;
      local_6c[0] = (undefined1)(uVar6 >> 0x18);
      uVar5 = (uint)*(ushort *)(iVar4 + *(int *)(iVar4 + -4) * 2 + -10);
      if (9 < uVar5 - 0x30) goto LAB_000d3a1c;
      uVar6 = ((uVar6 >> 0x18) + uVar5) - 0x30;
      local_6c[0] = (undefined1)uVar6;
      uVar5 = (uVar6 & 0xff) - 1;
      if (0x1f < uVar5) {
        FUN_000028a4(DAT_000d3a38,uVar6 & 0xff);
        return 8;
      }
      local_6c[0] = (undefined1)uVar5;
      FUN_001d9c54(local_68,local_30 + 0x340);
      uVar6 = *(uint *)(local_68[0] + -4);
      iVar4 = *(int *)(*piVar8 + -4);
      if ((*(uint *)(local_68[0] + -8) < uVar6 + iVar4) || (1 < *(int *)(local_68[0] + -0xc) + 1U))
      {
        if (-iVar4 - 0xfU < uVar6) {
          FUN_0010f7cc(8,DAT_000d3a30,DAT_000d3a30,uVar6,-iVar4 - 0xfU);
        }
        FUN_001d982c(local_68,*(undefined4 *)(local_68[0] + -4),0,*piVar8,
                     *(undefined4 *)(*piVar8 + -4),0,iVar4);
      }
      else {
        FUN_00003628(local_68[0] + uVar6 * 2,*piVar8,(iVar4 + 1) * 2);
        *(uint *)(local_68[0] + -4) = uVar6 + iVar4;
      }
      iVar4 = FUN_000c38fc(local_68,auStack_a0,auStack_48,auStack_40,&local_50,auStack_4c);
      if (iVar4 == 0) {
        FUN_000028a4(DAT_000d3a34,*piVar8);
        FUN_001d9b00(local_68);
        return 4;
      }
      puVar2 = (undefined4 *)FUN_001db4e0(local_28,local_6c);
      uVar1 = local_8a;
      uVar6 = (uint)local_96;
      local_60 = 0;
      uStack_5c = local_94;
      local_58 = local_96;
      local_56 = local_8a;
      uVar3 = local_50;
      iVar4 = FUN_001d9c54(auStack_54,local_68);
      puVar9 = (undefined4 *)(iVar4 + -0xc);
      if (uVar1 < 0x11) {
        uVar3 = FUN_00006158(uVar3,uVar6 << 1);
        *puVar9 = uVar3;
      }
      else if (uVar1 < 0x19) {
        uVar3 = FUN_00006158(uVar3,uVar6 * 3);
        *puVar9 = uVar3;
      }
      if (puVar2 != puVar9) {
        *puVar2 = *puVar9;
        puVar2[1] = *(undefined4 *)(iVar4 + -8);
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(iVar4 + -4);
        *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)(iVar4 + -2);
        FUN_001d9d2c(puVar2 + 3,iVar4);
      }
      FUN_001d9b00(auStack_54);
      FUN_001d9b00(local_68);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(param_2 + 0x10));
  }
  return 0;
}

