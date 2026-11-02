// rea decompile_all
// name: FUN_001b6d24
// address: 0x1b6d24
// body: available
// range: 0x1b6d24-0x1b6dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001b6d24(int param_1,undefined4 param_2,uint param_3,short param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  
  local_1c = (uint)(param_4 != 0 || param_3 != 0);
  FUN_0021d232(&local_18,param_1 + 0xc,&local_1c);
  local_28 = local_18;
  local_24 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = FUN_002249ec(&local_28,&local_24);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_001b7d28(*(undefined4 *)(local_28 + 0x14),param_2,param_5), iVar2 != 0)) {
    return 1;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  do {
    local_28 = iVar2;
    do {
      while( true ) {
        local_20 = *(undefined4 *)(param_1 + 0x1c);
        iVar2 = FUN_002249ec(&local_28,&local_20);
        if (iVar2 == 0) {
          return 0;
        }
        if (((*(uint *)(local_28 + 0x10) & 0xffff) == param_3) &&
           (iVar2 = FUN_001b7d28(*(undefined4 *)(local_28 + 0x14),param_2,param_5), iVar2 != 0)) {
          return 1;
        }
        iVar1 = *(int *)(local_28 + 0xc);
        iVar2 = local_28;
        if (*(int *)(local_28 + 0xc) == 0) break;
        do {
          local_28 = iVar1;
          iVar1 = *(int *)(local_28 + 8);
        } while (*(int *)(local_28 + 8) != 0);
      }
      do {
        local_28 = iVar2;
        iVar2 = *(int *)(local_28 + 4);
      } while (local_28 == *(int *)(iVar2 + 0xc));
    } while (*(int *)(local_28 + 0xc) == iVar2);
  } while( true );
}

