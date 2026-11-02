// rea decompile_all
// name: FUN_000f0d50
// address: 0xf0d50
// body: available
// range: 0xf0d50-0xf101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f0d50(undefined2 *param_1,int *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (0x41 < (int)param_3 - *param_2) {
    *param_1 = *(undefined2 *)*param_2;
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    param_1[1] = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    uVar2 = *(undefined2 *)(iVar4 + 2);
    *param_2 = iVar4 + 4;
    uVar3 = *(undefined2 *)(iVar4 + 4);
    *param_2 = iVar4 + 6;
    *(uint *)(param_1 + 2) = CONCAT22(uVar3,uVar2);
    param_1[4] = *(undefined2 *)*param_2;
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    param_1[6] = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    param_1[7] = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    uVar2 = *(undefined2 *)(iVar4 + 2);
    *param_2 = iVar4 + 4;
    uVar3 = *(undefined2 *)(iVar4 + 4);
    *param_2 = iVar4 + 6;
    *(uint *)(param_1 + 8) = CONCAT22(uVar3,uVar2);
    param_1[10] = *(undefined2 *)*param_2;
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    param_1[0x1a] = *(undefined2 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    param_1[0x1b] = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 4;
    param_1[0x20] = *(undefined2 *)(iVar4 + 4);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    param_1[0x21] = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    puVar5 = (undefined1 *)(iVar4 + 2);
    *param_2 = (int)puVar5;
    if ((int)param_3 - (int)puVar5 < 8) {
      *(undefined1 *)(param_1 + 0x26) = 0x7f;
      *(undefined1 *)((int)param_1 + 0x4d) = 0;
      FUN_0016d910(param_1 + 0x27);
    }
    else {
      uVar1 = *puVar5;
      *param_2 = iVar4 + 3;
      *(undefined1 *)(param_1 + 0x26) = uVar1;
      *(undefined1 *)((int)param_1 + 0x4d) = *(undefined1 *)*param_2;
      iVar4 = *param_2;
      *param_2 = iVar4 + 1;
      FUN_00003628(param_1 + 0x27,iVar4 + 1,6);
      puVar5 = (undefined1 *)(*param_2 + 6);
      *param_2 = (int)puVar5;
      if (puVar5 < param_3) {
        *(undefined1 *)(param_1 + 0x22) = *puVar5;
        *param_2 = *param_2 + 1;
        return 1;
      }
    }
  }
  FUN_0010f580(param_1);
  FUN_0010f580(param_1 + 6);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  FUN_0016d910(param_1 + 0x27);
  return 0;
}

