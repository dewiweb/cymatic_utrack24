// rea decompile_all
// name: FUN_001dd4d8
// address: 0x1dd4d8
// body: available
// range: 0x1dd4d8-0x1dd579 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1dd506 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dd4d8(int param_1,undefined1 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 local_18;
  
  uVar5 = 3;
  iVar2 = FUN_001f0830(1,0x24,0);
  if (iVar2 != 0) {
    if (*(ushort *)(iVar2 + 10) < 0x24) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001dd5ac,
                   s___check_that_first_pbuf_can_hold_001dd57e + 2,0x132,_DAT_001dd57c);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    iVar3 = *(int *)(param_1 + 4);
    puVar4 = *(undefined1 **)(iVar2 + 4);
    *puVar4 = uVar5;
    puVar4[1] = param_2;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    FUN_000039e0(*(int *)(iVar2 + 4) + 8,*(undefined4 *)(param_1 + 4),0x1c);
    puVar4[2] = 0;
    puVar4[3] = 0;
    uVar1 = FUN_001de144(puVar4,*(undefined2 *)(iVar2 + 10));
    puVar4[2] = (char)uVar1;
    puVar4[3] = (char)((ushort)uVar1 >> 8);
    local_18 = *(undefined4 *)(iVar3 + 0xc);
    FUN_001ded64(iVar2,0,&local_18,0xff,0,1);
    FUN_001f0fa0(iVar2);
  }
  return;
}

