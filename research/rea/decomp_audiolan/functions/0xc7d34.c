// rea decompile_all
// name: FUN_000c7d34
// address: 0xc7d34
// body: available
// range: 0xc7d34-0xc7ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c7d34(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_e0 [76];
  int local_94 [2];
  int local_8c;
  undefined4 local_88 [2];
  undefined1 auStack_80 [20];
  int local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  
  iVar4 = FUN_0018a074(*(undefined4 *)(param_3 + 0x20),&local_6c);
  if (((iVar4 != 0) || (param_2 < 8)) || (iVar4 = FUN_000c899c(param_1), iVar4 == 0)) {
    return 0;
  }
  uVar9 = 0;
  local_94[0] = local_6c;
LAB_000c7da4:
  FUN_00002904(auStack_38,0x10,DAT_000c7ffc,uVar9);
  FUN_000e1e1c(auStack_80,param_1 + 4);
  local_50 = 0;
  uStack_4c = 0;
  uVar5 = FUN_0014f7cc(auStack_48,auStack_38);
  iVar4 = FUN_000e1aac(auStack_80,uVar5);
  FUN_0014f868(auStack_48);
  FUN_001b98a8(&local_50);
  if (iVar4 != 0) {
    uVar6 = FUN_0015c970(auStack_80);
    local_58 = 0;
    uStack_54 = 0;
    FUN_0014f7b8(auStack_68);
    FUN_001b98a8(&local_58);
    uVar8 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = FUN_000e1cfc(auStack_80,uVar8);
        if (iVar4 == 0) break;
        FUN_0015c8fc(auStack_80,auStack_68);
        iVar4 = FUN_001609a4(auStack_68,DAT_000c8000);
        if (iVar4 != 0) {
          FUN_000acc64(auStack_e0);
          iVar4 = FUN_000e1dac(auStack_80,auStack_e0);
          if ((iVar4 != 0) && (iVar4 = FUN_00159894(auStack_e0,&local_8c), iVar4 != 0))
          goto code_r0x000c7ea0;
          FUN_000acc88(auStack_e0);
        }
        uVar8 = uVar8 + 1;
        if (uVar6 <= uVar8) break;
      } while( true );
    }
    FUN_0014f868(auStack_68);
  }
  FUN_000e1e40(auStack_80);
  return 0;
code_r0x000c7ea0:
  local_8c = local_8c << 10;
  FUN_000acc88(auStack_e0);
  FUN_0014f868(auStack_68);
  FUN_000e1e40(auStack_80);
  iVar7 = FUN_00189fb4(*(undefined4 *)(param_3 + 0x20),local_94[0] - local_8c,local_88);
  iVar4 = local_94[0];
  if (iVar7 != 0) {
    return 0;
  }
  iVar7 = FUN_00189f64(*(undefined4 *)(param_3 + 0x20),local_88[0],local_94,auStack_28);
  if (iVar7 != 0) {
    return 0;
  }
  uVar9 = uVar9 + 1;
  if (param_2 - 8 < uVar9) {
    *(char *)(param_3 + 0xc) = (char)local_94[0];
    *(char *)(param_3 + 0x14) = (char)local_94[0];
    uVar1 = (undefined1)((uint)local_94[0] >> 8);
    *(undefined1 *)(param_3 + 0xd) = uVar1;
    iVar4 = iVar4 - local_94[0];
    uVar2 = (undefined1)((uint)local_94[0] >> 0x10);
    *(undefined1 *)(param_3 + 0xe) = uVar2;
    uVar3 = (undefined1)((uint)local_94[0] >> 0x18);
    *(undefined1 *)(param_3 + 0xf) = uVar3;
    *(undefined1 *)(param_3 + 0x15) = uVar1;
    *(undefined1 *)(param_3 + 0x16) = uVar2;
    *(undefined1 *)(param_3 + 0x17) = uVar3;
    *(char *)(param_3 + 0x10) = (char)iVar4;
    *(char *)(param_3 + 0x18) = (char)iVar4;
    uVar1 = (undefined1)((uint)iVar4 >> 8);
    *(undefined1 *)(param_3 + 0x11) = uVar1;
    uVar2 = (undefined1)((uint)iVar4 >> 0x10);
    *(undefined1 *)(param_3 + 0x12) = uVar2;
    uVar3 = (undefined1)((uint)iVar4 >> 0x18);
    *(undefined1 *)(param_3 + 0x13) = uVar3;
    *(undefined1 *)(param_3 + 0x19) = uVar1;
    *(undefined1 *)(param_3 + 0x1a) = uVar2;
    *(undefined1 *)(param_3 + 0x1b) = uVar3;
    return 1;
  }
  goto LAB_000c7da4;
}

