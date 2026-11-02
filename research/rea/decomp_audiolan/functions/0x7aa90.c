// rea decompile_all
// name: FUN_0007aa90
// address: 0x7aa90
// body: available
// range: 0x7aa90-0x7ab4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0007ab3e) */

undefined4 FUN_0007aa90(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x44);
  iVar2 = param_1 + 0x48;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return 0;
    }
    if ((cVar1 == '\x03') || (cVar1 != '\x04')) {
      iVar3 = DAT_0007ab50;
      if (*(int *)(param_2 + 4) != 0) {
        iVar3 = *(int *)(param_2 + 4);
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar4 = DAT_0007ab50;
      }
      iVar3 = FUN_00003960(iVar4,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  FUN_00065ce0(iVar2,param_2);
  (**(code **)(*(int *)(param_1 + 0x28) + 8))((int *)(param_1 + 0x28));
  iVar2 = *DAT_0007ab54;
  FUN_001a0700(iVar2 + 0x8c);
  if (*(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(iVar2 + 0x88) == 0) {
      FUN_00155e4c(param_1);
    }
    else {
      FUN_000da518(iVar2,param_1);
    }
  }
  else {
    FUN_000659b0();
    iVar3 = *(int *)(param_1 + 0x50);
    FUN_000689ac(iVar3,iVar3 + 0x5c,DAT_0007ab54[1],*(undefined4 *)(iVar3 + 0x68),0);
  }
  FUN_001a0d18(iVar2 + 0x8c);
  return 1;
}

