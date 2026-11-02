// rea decompile_all
// name: FUN_00072510
// address: 0x72510
// body: available
// range: 0x72510-0x725ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00072510(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = *DAT_000725f0;
  if (iVar4 == 0) {
    return 1;
  }
  if (param_3 != 0) {
    iVar1 = FUN_00003d18(*param_2,&DAT_000725f4);
    if (iVar1 == 0) {
      *(undefined1 *)(iVar4 + 0x110) = 1;
    }
    else {
      iVar1 = FUN_00003d18(*param_2,&DAT_000725f8);
      if (iVar1 == 0) {
        *(undefined1 *)(iVar4 + 0x110) = 0;
      }
      else {
        iVar1 = FUN_00003d18(*param_2,&DAT_000725fc);
        if (iVar1 == 0) {
          *(undefined1 *)(iVar4 + 0x111) = 1;
        }
        else {
          iVar1 = FUN_00003d18(*param_2,&DAT_00072600);
          if (iVar1 == 0) {
            *(undefined1 *)(iVar4 + 0x111) = 0;
          }
          else {
            iVar1 = FUN_00003d18(*param_2,&DAT_00072604);
            if (iVar1 != 0) {
              return 2;
            }
            if (*(char *)(iVar4 + 0x111) == '\0') {
              pcVar2 = s_overwrite_00072610;
            }
            else {
              pcVar2 = s_insert_00072608;
            }
            FUN_00002898(s_Status__mode__s_0007261c,pcVar2);
            if (*(char *)(iVar4 + 0x110) == '\0') {
              puVar3 = &DAT_00072634;
            }
            else {
              puVar3 = &DAT_00072630;
            }
            FUN_00002898(s_bold__s_00072638,puVar3);
          }
        }
      }
    }
    return 0;
  }
  return 2;
}

