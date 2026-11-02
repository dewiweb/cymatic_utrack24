// rea decompile_all
// name: FUN_0008264c
// address: 0x8264c
// body: available
// range: 0x8264c-0x82863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0008264c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_20;
  
  local_20 = param_4;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = FUN_0023b208(*DAT_00082864,param_4);
      if (*(char *)(iVar1 + 4) != '\x04') {
        if (param_2 == 0) {
          while (-1 < (int)local_20) {
            iVar1 = FUN_0023b208(*DAT_00082864,local_20);
            if (*(char *)(iVar1 + 4) == '\b') {
              uVar2 = FUN_0023b208(*DAT_00082864,local_20);
              iVar1 = FUN_000c0518(param_1,uVar2);
              if (iVar1 != 0) {
                iVar1 = FUN_0023b208(*DAT_00082864,local_20);
                *(undefined1 *)(iVar1 + 4) = 4;
                return local_20;
              }
              iVar1 = FUN_0023b208(*DAT_00082864,local_20);
              *(undefined1 *)(iVar1 + 4) = 1;
              FUN_00081d00(param_1,&local_20);
            }
            else {
              iVar1 = FUN_0023b208(*DAT_00082864,local_20);
              if (*(char *)(iVar1 + 4) == '\x04') {
                return local_20;
              }
              FUN_00081d00(param_1,&local_20);
            }
          }
          local_20 = 0xffffffff;
        }
        else {
          while (uVar3 = FUN_0022e20c(*DAT_00082864), local_20 < uVar3) {
            iVar1 = FUN_0023b208(*DAT_00082864,local_20);
            if (*(char *)(iVar1 + 4) == '\b') {
              uVar2 = FUN_0023b208(*DAT_00082864,local_20);
              iVar1 = FUN_000c0518(param_1,uVar2);
              if (iVar1 != 0) {
                iVar1 = FUN_0023b208(*DAT_00082864,local_20);
                *(undefined1 *)(iVar1 + 4) = 4;
                return local_20;
              }
              iVar1 = FUN_0023b208(*DAT_00082864,local_20);
              *(undefined1 *)(iVar1 + 4) = 1;
              FUN_00081d48(param_1,&local_20);
            }
            else {
              iVar1 = FUN_0023b208(*DAT_00082864,local_20);
              if (*(char *)(iVar1 + 4) == '\x04') {
                return local_20;
              }
              FUN_00081d48(param_1,&local_20);
            }
          }
          local_20 = 0xffffffff;
        }
      }
    }
    else {
      local_20 = 0xffffffff;
    }
  }
  return local_20;
}

