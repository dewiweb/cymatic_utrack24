// rea decompile_all
// name: FUN_0000c9f8
// address: 0xc9f8
// body: available
// range: 0xc9f8-0xcca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcb64 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0000c9f8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  FUN_001a0700();
  (**(code **)(*param_1 + 0x1b0))(param_1);
  FUN_0000b8d4(param_1);
  if ((param_3 == 1 || param_3 == 3) || (param_3 == 7 || param_3 == 9)) {
    (**(code **)(*param_1 + 0xe0))(param_1,param_13);
    (**(code **)(*param_1 + 0x18))(param_1,param_14,param_15);
    (**(code **)(*param_1 + 0x28))(param_1,param_10);
    iVar3 = FUN_0000a4b0(param_1 + 1,param_2,0,param_3,param_4,param_5,param_7,param_8,param_9,
                         param_14,param_15,param_10,0x10);
    if (iVar3 == 0) {
      FUN_0000b8d4(param_1);
    }
    else {
      iVar3 = param_1[7];
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      cVar1 = (char)param_1[3];
      if (cVar1 == '\x01') {
        *(undefined4 *)(iVar3 + 4) = 1;
        *(undefined4 *)(iVar3 + 0xc) = 1;
        *(undefined1 *)(iVar3 + 0x10) = 1;
        *(undefined4 *)(iVar3 + 0x14) = 4;
        *(undefined1 *)(iVar3 + 0x18) = 0;
      }
      else if (cVar1 == '\x03') {
        *(undefined4 *)(iVar3 + 4) = 2;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined1 *)(iVar3 + 0x10) = 1;
        *(undefined4 *)(iVar3 + 0x14) = 7;
        *(undefined1 *)(iVar3 + 0x18) = 0;
        *(undefined4 *)(iVar3 + 0x20) = 7;
        *(undefined1 *)(iVar3 + 0x24) = 1;
        *(undefined4 *)(iVar3 + 0x28) = 4;
        *(undefined1 *)(iVar3 + 0x2c) = 0;
      }
      else if (cVar1 == '\a' || cVar1 == '\t') {
        *(undefined4 *)(iVar3 + 0xc) = 5;
        *(undefined4 *)(iVar3 + 4) = 1;
        *(undefined1 *)(iVar3 + 0x10) = 1;
        *(undefined4 *)(iVar3 + 0x14) = 4;
        *(undefined1 *)(iVar3 + 0x18) = 0;
        iVar3 = param_1[8];
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0xc) = 10;
          *(undefined4 *)(iVar3 + 4) = 1;
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined1 *)(iVar3 + 0x10) = 1;
          *(undefined4 *)(iVar3 + 0x14) = 4;
          *(undefined1 *)(iVar3 + 0x18) = 0;
        }
      }
      (**(code **)(*param_1 + 0xd0))(param_1,param_11,param_12);
      if ((param_3 == 1 || param_3 == 7) || param_3 == 9) {
        (**(code **)(*param_1 + 0x48))(param_1,0xfffffffe);
      }
      iVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_7);
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_6), iVar3 != 0)) {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_001a0d18(iVar2 + 0x118);
        return 1;
      }
    }
  }
  FUN_001a0d18(iVar2 + 0x118);
  return 0;
}

