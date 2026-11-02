// rea decompile_all
// name: FUN_000a7010
// address: 0xa7010
// body: available
// range: 0xa7010-0xa710b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a7010(int param_1,int param_2)

{
  longlong lVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  
  iVar8 = param_1 + 4;
  FUN_001a0700(iVar8);
  psVar4 = *(short **)(param_1 + 0x2c);
  if (*(short **)(param_1 + 0x30) != psVar4) {
    psVar7 = *(short **)(param_1 + 0x30);
    psVar6 = psVar4;
    do {
      if (*psVar6 == param_2) {
        psVar2 = psVar6;
        if (psVar4 != psVar7) {
          while (psVar2 = psVar2 + 8, psVar2 != psVar7) {
            *psVar6 = *psVar2;
            FUN_000a5fb8(psVar6 + 2,psVar2 + 2);
            psVar6 = psVar6 + 8;
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0x30) + -0xc);
          lVar1 = (longlong)DAT_000a710c *
                  (longlong)(*(int *)(*(int *)(param_1 + 0x30) + -4) - iVar3);
          iVar5 = (int)((ulonglong)lVar1 >> 0x20);
          FUN_0010fa20(iVar3,(iVar5 >> 1) - (iVar5 >> 0x1f),0,(int)lVar1);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0x10;
        }
        FUN_001a0d18(iVar8);
        return 1;
      }
      psVar6 = psVar6 + 8;
    } while (psVar7 != psVar6);
  }
  FUN_001a0d18(iVar8);
  return 0;
}

