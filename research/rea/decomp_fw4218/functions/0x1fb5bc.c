// rea decompile_all
// name: FUN_001fb5bc
// address: 0x1fb5bc
// body: available
// range: 0x1fb5bc-0x1fb681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fb5ee to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001fb5bc(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = FUN_001f0830(1,param_2 + param_3 + 0x14 & 0xffff,0);
  if (iVar2 != 0) {
    if ((uint)*(ushort *)(iVar2 + 10) < param_2 + 0x14) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001fb6b8,
                   s___check_that_first_pbuf_can_hold_001fb686 + 2,100,_DAT_001fb684);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    uVar1 = *(undefined2 *)(param_1 + 0x1a);
    puVar5 = *(undefined1 **)(iVar2 + 4);
    *puVar5 = (char)((ushort)uVar1 >> 8);
    puVar5[1] = (char)uVar1;
    uVar1 = *(undefined2 *)(param_1 + 0x1c);
    puVar5[2] = (char)((ushort)uVar1 >> 8);
    puVar5[3] = (char)uVar1;
    puVar5[4] = (char)param_4;
    puVar5[5] = (char)((uint)param_4 >> 8);
    puVar5[6] = (char)((uint)param_4 >> 0x10);
    puVar5[7] = (char)((uint)param_4 >> 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    puVar5[8] = (char)((uint)uVar3 >> 0x18);
    puVar5[9] = (char)((uint)uVar3 >> 0x10);
    puVar5[10] = (char)((uint)uVar3 >> 8);
    puVar5[0xb] = (char)uVar3;
    iVar4 = (param_2 >> 2) * 0x1000 + DAT_001fb6ec;
    puVar5[0xc] = (char)((uint)iVar4 >> 8);
    puVar5[0xd] = (char)iVar4;
    uVar1 = *(undefined2 *)(param_1 + 0x2e);
    puVar5[0xe] = (char)((ushort)uVar1 >> 8);
    puVar5[0xf] = (char)uVar1;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2e);
  }
  return iVar2;
}

