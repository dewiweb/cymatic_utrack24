// rea decompile_all
// name: FUN_00042afc
// address: 0x42afc
// body: available
// range: 0x42afc-0x42c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00042afc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_20 [8];
  
  uVar1 = FUN_0018afcc();
  uVar2 = FUN_001a0808(uVar1,1);
  FUN_00003850(uVar2,uVar1,0x32);
  puVar3 = (undefined4 *)FUN_001a0808(0x20,1);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  FUN_0017ae30(puVar3,s_bootstrap_00042c28,0);
  uVar4 = FUN_001a0808(0xb8,1);
  FUN_000038a0(uVar4,0xb8);
  iVar5 = FUN_0017b1b0(uVar4,s__bootstrapThread_00042c37 + 1,_DAT_00042c34,puVar3,uVar2,uVar1,2,2,0,
                       1);
  if (iVar5 != 0) {
    FUN_00015210(s_Error__Could_not_create_boostrap_00042c48);
  }
  FUN_0017afd4(puVar3,0xffffffff);
  FUN_0017b4a0(uVar4,0xffffffff);
  FUN_0017bde0(uVar4);
  FUN_0017b348(uVar4);
  FUN_0019f30c(uVar2);
  FUN_0019f30c(uVar4);
  FUN_0017aec0(puVar3);
  FUN_0019f30c(puVar3);
  uVar1 = FUN_0017b3e4();
  FUN_0017b580(uVar1,1,auStack_20);
  FUN_0017bde0(uVar1);
  return;
}

