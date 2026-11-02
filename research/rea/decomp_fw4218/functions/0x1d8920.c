// rea decompile_all
// name: FUN_001d8920
// address: 0x1d8920
// body: available
// range: 0x1d8920-0x1d8a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d894a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1d895a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1d8990 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001d8920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined1 *param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001d8a64,s_netif____NULL_001d8a9c,DAT_001d8a98,
                 _DAT_001d8a2c);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  iVar1 = FUN_001f0830(3,0x2c,0);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  if (*(ushort *)(iVar1 + 10) < 0x2c) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001d8a64,
                 s___check_that_first_pbuf_can_hold_001d8a2e + 2,0x4b0,_DAT_001d8a2c);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  iVar3 = *(int *)(iVar1 + 4);
  *(char *)(iVar3 + 0x16) = (char)((uint)param_8 >> 8);
  *(byte *)(iVar3 + 0x17) = (byte)((uint)param_8 >> 0x10) | (byte)param_8;
  if (*(char *)(param_1 + 0x32) == '\x06') {
    if (*param_5 * 0x10000 - DAT_001d8ab0 == 0) {
      param_3 = DAT_001d8ab4;
    }
    FUN_001c6cb8(iVar3 + 0x18,param_4);
    FUN_001c6cb8(iVar3 + 0x22,param_6);
    FUN_001c6cb8(iVar3 + 2,param_3);
    FUN_001c6cb8(iVar3 + 8,param_2);
    *(char *)(iVar3 + 0x1e) = (char)*param_5;
    *(undefined1 *)(iVar3 + 0x1f) = *(undefined1 *)((int)param_5 + 1);
    *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)((int)param_5 + 2);
    *(undefined1 *)(iVar3 + 0x21) = *(undefined1 *)((int)param_5 + 3);
    *(undefined1 *)(iVar3 + 0x28) = *param_7;
    *(undefined1 *)(iVar3 + 0x29) = param_7[1];
    *(undefined1 *)(iVar3 + 0x2a) = param_7[2];
    *(undefined1 *)(iVar3 + 0x2b) = param_7[3];
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 1;
    *(undefined1 *)(iVar3 + 0x12) = 8;
    *(undefined1 *)(iVar3 + 0x13) = 0;
    *(undefined1 *)(iVar3 + 0x14) = 6;
    *(undefined1 *)(iVar3 + 0x15) = 4;
    *(undefined1 *)(iVar3 + 0xe) = 8;
    *(undefined1 *)(iVar3 + 0xf) = 6;
    uVar2 = (**(code **)(param_1 + 0x18))(param_1,iVar1);
    FUN_001f0fa0(iVar1);
    return uVar2;
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001d8a64,DAT_001d8aac,0x4b8,_DAT_001d8a2c);
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

