// rea decompile_all
// name: FUN_0009c884
// address: 0x9c884
// body: available
// range: 0x9c884-0x9c9f1 inclusive
// range: 0x9c9f6-0x9ca03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0009c884(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 extraout_r1;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  
  *param_1 = _DAT_0009ca04;
  param_1[5] = 0;
  FUN_001f0168(param_1 + 4,s___ResourceManager_0009ca06 + 2);
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = extraout_r1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  iVar2 = FUN_0021d466();
  param_1[0x11] = iVar2;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  *(undefined4 *)(param_1[0x11] + 0xc) = param_1[0x11];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1d] = 0;
  local_28 = 0;
  local_20 = 0xffffffff;
  local_24 = 0;
  iVar3 = FUN_000ed2b8(param_1 + 0x1f,0xffffffff,0);
  iVar6 = iVar3 + -0x7c;
  FUN_001a2920(auStack_1c,iVar3 + -0x6c);
  iVar4 = FUN_000b4964();
  iVar2 = DAT_0009ca34;
  if (iVar4 != 0) {
    iVar2 = FUN_000b472c(iVar4,iVar6);
    if (iVar2 != 0) {
      iVar2 = FUN_001c6b14(0x2c,DAT_0009ca18);
      puVar5 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar2,1,iVar3 + -0x48);
        uVar1 = DAT_0009ca1c;
        puVar5[10] = 0xffffffff;
        *puVar5 = uVar1;
      }
      *(undefined4 **)(iVar3 + -0x2c) = puVar5;
      iVar2 = FUN_001c6b14(0x28,DAT_0009ca18);
      puVar5 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar2,2,iVar3 + -0x48);
        *puVar5 = DAT_0009ca20;
      }
      *(undefined4 **)(iVar3 + -0x20) = puVar5;
      iVar2 = FUN_001c6b14(0x28,DAT_0009ca18);
      puVar5 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar2,3,iVar3 + -0x48);
        *puVar5 = DAT_0009ca24;
      }
      *(undefined4 **)(iVar3 + -0x24) = puVar5;
      iVar4 = FUN_001c6b14(0x44,DAT_0009ca18);
      iVar2 = 0;
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar4,4,iVar3 + -0x48);
        *puVar5 = DAT_0009ca28;
        iVar2 = FUN_00234506(puVar5 + 10,&local_28,&local_24);
        iVar2 = iVar2 + -0x28;
      }
      *(int *)(iVar3 + -0x28) = iVar2;
      iVar2 = FUN_001c6b14(0x28,DAT_0009ca18);
      puVar5 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar2,8,iVar3 + -0x48);
        *puVar5 = DAT_0009ca2c;
      }
      *(undefined4 **)(iVar3 + -0x1c) = puVar5;
      iVar2 = FUN_001c6b14(0x28,DAT_0009ca18);
      puVar5 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)FUN_00132f98(iVar2,10,iVar3 + -0x48);
        *puVar5 = DAT_0009ca30;
      }
      *(undefined4 **)(iVar3 + -0x18) = puVar5;
      *(undefined1 *)(iVar3 + -0x14) = 1;
      iVar2 = FUN_0009c684(iVar6);
      if (iVar2 != 0) {
        FUN_0009c538(iVar6,0x3f);
      }
      goto LAB_0009c9e6;
    }
    iVar2 = DAT_0009ca34 + 0x50;
  }
  FUN_00002898(iVar2);
LAB_0009c9e6:
  FUN_001a2938(auStack_1c);
  return iVar6;
}

