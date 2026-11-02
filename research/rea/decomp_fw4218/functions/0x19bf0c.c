// rea decompile_all
// name: FUN_0019bf0c
// address: 0x19bf0c
// body: available
// range: 0x19bf0c-0x19bfb3 inclusive
// range: 0x19c310-0x19c31f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_0019bf0c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [44];
  
  FUN_0017277c(auStack_50,param_2 + 7);
  FUN_0019c444(param_1,auStack_50);
  iVar1 = *param_2;
  if (iVar1 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        iVar3 = *param_2;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0xc);
      }
      *(uint *)(iVar2 + 0x5ec) =
           *(int *)(iVar2 + 0x5ec) + (uint)(0xfffffffe < *(uint *)(iVar2 + 0x5e8));
      *(uint *)(iVar2 + 0x5e8) = *(uint *)(iVar2 + 0x5e8) + 1;
      switch(*(uint *)(iVar1 + 0x10) & 0x3f) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = iVar3;
    } while (iVar3 != 0);
    return;
  }
  return;
}

