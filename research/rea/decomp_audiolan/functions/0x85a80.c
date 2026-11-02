// rea decompile_all
// name: FUN_00085a80
// address: 0x85a80
// body: available
// range: 0x85a80-0x85bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00085a80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_00003960(*param_2,&DAT_00085bb4);
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_0008b5d4();
    FUN_000b87ac(uVar2,0);
  }
  else {
    uVar2 = *param_2;
    iVar1 = FUN_00003960(uVar2,DAT_00085bbc);
    uVar3 = iVar1 != 0;
    if (((bool)uVar3) && (iVar1 = FUN_00003960(uVar2,DAT_00085bc0), iVar1 != 0)) {
      iVar1 = FUN_00003960(uVar2,DAT_00085bc4);
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      else {
        iVar1 = FUN_00003960(uVar2,DAT_00085bc8);
        if (iVar1 == 0) {
          uVar3 = 3;
        }
        else {
          iVar1 = FUN_00003960(uVar2,DAT_00085bcc);
          if (iVar1 == 0) {
            uVar3 = 4;
          }
          else {
            iVar1 = FUN_00003960(uVar2,DAT_00085bd0);
            if (iVar1 == 0) {
              uVar3 = 5;
            }
            else {
              iVar1 = FUN_00003960(uVar2,_DAT_00085bd4);
              if (iVar1 != 0) {
                FUN_000028a4(s__Unknown_frequency__s_00085bd7 + 1,*param_2);
                return 6;
              }
              uVar3 = 6;
            }
          }
        }
      }
    }
    FUN_000d9c50(auStack_20);
    uVar2 = thunk_FUN_0008b5d4();
    FUN_0008b520(uVar2,auStack_20,6,uVar3);
    uVar2 = thunk_FUN_0008b5d4();
    FUN_000b89fc(uVar2,auStack_20,2);
    FUN_000d9c80(auStack_20);
  }
  return 0;
}

