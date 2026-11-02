// rea decompile_all
// name: FUN_0009baec
// address: 0x9baec
// body: available
// range: 0x9baec-0x9bdc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0009baec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined1 param_13)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r3;
  uint uVar8;
  int iVar9;
  undefined1 auStack_2c [8];
  
  puVar3 = (undefined4 *)
           FUN_0005f478(param_1,param_2,0,0,0,param_4,param_3,param_5,param_7,0,param_9);
  *puVar3 = _DAT_0009bdc4;
  puVar3[0x27] = 200;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  iVar4 = FUN_001f01c4(200,1);
  puVar3[0x29] = iVar4;
  puVar3[0x2a] = iVar4 + 200;
  puVar3[0x2b] = puVar3[0x29];
  puVar3[0x2c] = puVar3[0x29];
  *(undefined2 *)((int)puVar3 + 0xba) = 0;
  puVar3[0x31] = 0;
  FUN_001f0168(puVar3 + 0x30,s___MidiFileDecoder_0009bdc6 + 2);
  iVar4 = FUN_001c70d8(puVar3 + 0x39,DAT_0009bdd8,0x20,8);
  *(undefined1 *)(iVar4 + 0x100) = 0;
  *(undefined1 *)(iVar4 + 0x101) = 0;
  *(undefined4 *)(iVar4 + 0x104) = 0;
  uVar2 = DAT_0009bddc;
  *(undefined4 *)(iVar4 + 0x108) = 0;
  *(undefined4 *)(iVar4 + 0x10c) = 0;
  *(undefined4 *)(iVar4 + 0x114) = uVar2;
  *(undefined4 *)(iVar4 + 0x110) = 0;
  iVar4 = FUN_00232084(iVar4 + 0x120,param_6);
  iVar4 = FUN_00231ef4(iVar4 + 4,&DAT_0009bde0,auStack_2c);
  *(undefined4 *)(iVar4 + 4) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = param_3;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = param_8;
  iVar4 = FUN_001c70d8(iVar4 + 0x34,DAT_0009bde4,0x38,0x20);
  *(undefined1 *)(iVar4 + 0x70c) = 0;
  iVar9 = iVar4 + -0x23c;
  *(undefined1 *)(iVar4 + 0x70d) = 0;
  *(undefined1 *)(iVar4 + 0x70e) = param_13;
  *(undefined1 *)(iVar4 + 0x70f) = 0;
  *(undefined4 *)(iVar4 + 0x71c) = param_10;
  *(undefined4 *)(iVar4 + 0x710) = param_11;
  *(undefined4 *)(iVar4 + 0x714) = param_12;
  uVar5 = *(uint *)(iVar4 + -400);
  uVar8 = extraout_r3;
  if (*(int *)(iVar4 + -0x19c) != 0) {
    uVar8 = *(uint *)(iVar4 + -0x194);
  }
  uVar7 = 0;
  if (*(int *)(iVar4 + -0x19c) != 0) {
    do {
      uVar5 = uVar5 + 1;
      if (uVar8 <= uVar5) {
        uVar5 = uVar5 - *(int *)(iVar4 + -0x1a0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar4 + -0x19c));
  }
  *(undefined4 *)(iVar4 + -0x19c) = 0;
  *(undefined4 *)(iVar4 + -400) = *(undefined4 *)(iVar4 + -0x198);
  *(undefined4 *)(iVar4 + -0x18c) = *(undefined4 *)(iVar4 + -0x198);
  iVar6 = DAT_0009bde8;
  *(undefined2 *)(iVar4 + -0x188) = 0;
  lVar1 = (longlong)iVar6 * (longlong)(*(int *)(iVar4 + -0x18) * *(int *)(iVar4 + -0x20));
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  *(undefined2 *)(iVar4 + -0x186) = 0;
  *(undefined2 *)(iVar4 + -0x184) = 0;
  *(int *)(iVar4 + -0x1c) = (iVar6 >> 6) - (iVar6 >> 0x1f);
  iVar6 = FUN_001f01c4(0xe8,1,(int)lVar1);
  puVar3 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar3 = (undefined4 *)FUN_0005a544(iVar6,DAT_0009bdec,iVar9);
    *puVar3 = DAT_0009bdf0;
    FUN_0006f678(puVar3);
    *(undefined1 *)(puVar3 + 0x39) = 1;
  }
  *(undefined4 **)(iVar4 + -0x54) = puVar3;
  iVar6 = FUN_001f01c4(0xe8,1);
  puVar3 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar3 = (undefined4 *)FUN_0005a544(iVar6,DAT_0009bdf4,iVar9);
    *puVar3 = DAT_0009bdf8;
    FUN_0006f678(puVar3);
    *(undefined1 *)(puVar3 + 0x39) = 1;
  }
  *(undefined4 **)(iVar4 + -0x50) = puVar3;
  iVar6 = FUN_001f01c4(0xe8,1);
  puVar3 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar3 = (undefined4 *)FUN_0005a544(iVar6,DAT_0009bdfc,iVar9);
    *puVar3 = DAT_0009be00;
    FUN_0006f678(puVar3);
    *(undefined1 *)(puVar3 + 0x39) = 1;
  }
  *(undefined4 **)(iVar4 + -0x4c) = puVar3;
  iVar6 = FUN_001f01c4(0xe8,1);
  puVar3 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar3 = (undefined4 *)FUN_0005a544(iVar6,DAT_0009be04,iVar9);
    *puVar3 = DAT_0009be08;
    FUN_0006f678(puVar3);
    *(undefined1 *)(puVar3 + 0x39) = 1;
  }
  *(undefined4 **)(iVar4 + -0x48) = puVar3;
  return iVar9;
}

