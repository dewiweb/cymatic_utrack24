// rea decompile_all
// name: FUN_000ef70c
// address: 0xef70c
// body: available
// range: 0xef70c-0xef869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000ef70c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18 [2];
  
  iVar2 = FUN_00133810();
  iVar2 = FUN_0012e094(iVar2 + 4);
  iVar2 = FUN_001469f8(iVar2 + 4);
  iVar2 = FUN_0013f804(iVar2 + 4);
  puVar3 = (undefined4 *)FUN_00146fac(iVar2 + 4);
  puVar3[-4] = DAT_000ef86c;
  puVar3[-3] = DAT_000ef870;
  puVar3[-2] = DAT_000ef874;
  uVar1 = DAT_000ef884;
  puVar3[-1] = DAT_000ef878;
  puVar3[1] = 0;
  uVar5 = DAT_000ef87c;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = uVar5;
  uVar5 = DAT_000ef888;
  puVar3[5] = DAT_000ef880;
  puVar3[6] = uVar1;
  puVar3[7] = uVar5;
  puVar3[8] = 0;
  puVar3[4] = DAT_000ef88c;
  FUN_001a7b9c(puVar3 + 4,DAT_000ef890);
  uVar1 = DAT_000ef89c;
  uVar5 = DAT_000ef898;
  puVar3[10] = DAT_000ef894;
  puVar3[0xb] = uVar5;
  puVar3[0xc] = uVar1;
  puVar3[0xd] = 0;
  puVar3[9] = DAT_000ef8a0;
  FUN_001a7b9c(puVar3 + 9,DAT_000ef8a4);
  iVar2 = DAT_000ef8b0;
  uVar5 = DAT_000ef8ac;
  puVar3[0xf] = DAT_000ef8a8;
  puVar3[0x10] = uVar5;
  puVar3[0x11] = iVar2;
  puVar3[0x12] = 0;
  puVar3[0xe] = DAT_000ef8b4;
  FUN_001a7b9c(puVar3 + 0xe,iVar2 + -4);
  iVar2 = FUN_00070ef0(puVar3 + 0x13,s_StreamDeviceMgrImpl_000ef8bc,0,10,DAT_000ef8b8,0xe,0xe,0x800,
                       1,DAT_000ef8b8);
  puVar3 = (undefined4 *)FUN_000b1210(iVar2 + 0x114);
  *puVar3 = DAT_000ef8d0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  iVar2 = _DAT_000ef8d4;
  *(undefined4 **)(_DAT_000ef8d4 + 4) = puVar3 + -0x5c;
  iVar4 = FUN_001f01c4(0x3c,1);
  local_18[0] = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_00146fa0();
    local_18[0] = FUN_001a7b24(iVar4,uVar5,0xfffffffe);
  }
  FUN_00241b58(puVar3 + 3,local_18);
  uVar5 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar5,s_B__AudioHWService_000ef8d5 + 3,puVar3);
  if (iVar4 != 0) {
    FUN_0006f678(puVar3 + -0x45);
    FUN_00050c04(DAT_000ef8e8,0);
    if (((*(uint *)(iVar2 + 8) & 1) == 0) && (iVar2 = FUN_001c7162(DAT_000ef8ec), iVar2 != 0)) {
      uVar5 = FUN_00104f6c(DAT_000ef8f0);
      FUN_001c70ac(uVar5,DAT_000ef8f8,DAT_000ef8f4);
    }
  }
  return puVar3 + -0x5c;
}

