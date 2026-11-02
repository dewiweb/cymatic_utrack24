// rea decompile_all
// name: FUN_00092100
// address: 0x92100
// body: available
// range: 0x92100-0x9221b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00092100(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)FUN_00067d70(param_1);
  *puVar1 = DAT_0009221c;
  puVar1[0x19] = 2;
  uVar2 = FUN_00230c00(auStack_18);
  iVar3 = FUN_00233ad0(puVar1 + 0x1a,auStack_14,uVar2);
  *(undefined1 *)(iVar3 + 0x1c) = 1;
  iVar3 = FUN_000b2938(iVar3 + 0x20);
  iVar3 = iVar3 + -0x88;
  FUN_00002898(s_Instantiating__s_HAL_0009222c,s_uTRACK24_00092220);
  FUN_00203e2c(auStack_24);
  uVar2 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar2,s_AudioHWService_00092244,auStack_24);
  if (iVar4 == 0) {
    FUN_000d04f8(auStack_24);
  }
  else {
    piVar5 = (int *)FUN_0022bc60(auStack_24);
    (**(code **)(*piVar5 + 0x1c))(piVar5,iVar3);
    FUN_00178f04();
    iVar4 = FUN_00091938(iVar3);
    if (iVar4 == 0) {
      FUN_00002898(DAT_00092254);
      FUN_000d04f8(auStack_24);
    }
    else {
      iVar4 = FUN_00091894(iVar3);
      if (iVar4 == 0) {
        FUN_000d04f8(auStack_24);
      }
      else {
        FUN_000d04f8(auStack_24);
      }
    }
  }
  return iVar3;
}

