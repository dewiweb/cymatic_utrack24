// rea decompile_all
// name: FUN_0018c4e8
// address: 0x18c4e8
// body: available
// range: 0x18c4e8-0x18c589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18c516 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018c4e8(int param_1,undefined1 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 local_18;
  
  uVar5 = 3;
  iVar2 = FUN_001a9890(1,0x24,0);
  if (iVar2 != 0) {
    if (*(ushort *)(iVar2 + 10) < 0x24) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0018c5bc,
                   s_o___check_that_first_pbuf_can_ho_0018c58c + 4,0x132,
                   s_o___check_that_first_pbuf_can_ho_0018c58c._0_4_);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    iVar3 = *(int *)(param_1 + 4);
    puVar4 = *(undefined1 **)(iVar2 + 4);
    *puVar4 = uVar5;
    puVar4[1] = param_2;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    FUN_00003628(*(int *)(iVar2 + 4) + 8,*(undefined4 *)(param_1 + 4),0x1c);
    puVar4[2] = 0;
    puVar4[3] = 0;
    uVar1 = FUN_0018d5b0(puVar4,*(undefined2 *)(iVar2 + 10));
    puVar4[2] = (char)uVar1;
    puVar4[3] = (char)((ushort)uVar1 >> 8);
    local_18 = *(undefined4 *)(iVar3 + 0xc);
    FUN_0018defc(iVar2,0,&local_18,0xff,0,1);
    FUN_001aa008(iVar2);
  }
  return;
}

