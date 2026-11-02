// rea decompile_all
// name: FUN_001fce48
// address: 0x1fce48
// body: available
// range: 0x1fce48-0x1fcf29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fce72 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fce48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = FUN_001f0830(1,0x14,0);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 10) < 0x14) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001fcf60,
                   s___check_that_first_pbuf_can_hold_001fcf2e + 2,0x4c0,_DAT_001fcf2c);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    puVar4 = *(undefined1 **)(iVar3 + 4);
    *puVar4 = (char)((uint)param_5 >> 8);
    puVar4[1] = (byte)((uint)param_5 >> 0x10) | (byte)param_5;
    puVar4[2] = (char)((uint)param_6 >> 8);
    puVar4[3] = (byte)((uint)param_6 >> 0x10) | (byte)param_6;
    puVar4[4] = (char)((uint)param_1 >> 0x18);
    puVar4[5] = (char)((uint)param_1 >> 0x10);
    puVar4[6] = (char)((uint)param_1 >> 8);
    puVar4[7] = (char)param_1;
    puVar4[8] = (char)((uint)param_2 >> 0x18);
    puVar4[9] = (char)((uint)param_2 >> 0x10);
    puVar4[10] = (char)((uint)param_2 >> 8);
    puVar4[0xb] = (char)param_2;
    uVar1 = DAT_001fcf94;
    puVar4[0xc] = (char)DAT_001fcf94;
    puVar4[0xd] = (char)((uint)uVar1 >> 8);
    uVar1 = DAT_001fcf98;
    puVar4[0xe] = (char)DAT_001fcf98;
    puVar4[0xf] = (char)((uint)uVar1 >> 8);
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    uVar2 = FUN_001de1a8(iVar3,param_3,param_4,6,*(undefined2 *)(iVar3 + 8));
    puVar4[0x10] = (char)uVar2;
    puVar4[0x11] = (char)((ushort)uVar2 >> 8);
    FUN_001ded64(iVar3,param_3,param_4,0xff,0,6);
    FUN_001f0fa0(iVar3);
  }
  return;
}

