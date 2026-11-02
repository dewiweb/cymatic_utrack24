// rea decompile_all
// name: FUN_0017544c
// address: 0x17544c
// body: available
// range: 0x17544c-0x1754bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1754bc to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017544c(int *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (ushort *)(param_2 + -4);
  uVar3 = (uint)*(ushort *)(param_2 + -2);
  iVar2 = (int)puVar1 - (*puVar1 + 0x18);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(iVar2 + 0x10);
  }
  if (*param_1 == iVar2) {
    *(int *)(iVar2 + 0x10) = param_1[1];
  }
  if (((ushort *)(iVar2 + 0x18) <= puVar1) &&
     (uVar4 = *(uint *)(iVar2 + 0x10), puVar1 < (ushort *)(uVar4 + iVar2 + 0x18))) {
    uVar3 = *(int *)(iVar2 + 0x14) + uVar3;
    *(uint *)(iVar2 + 0x14) = uVar3;
    if (uVar3 <= uVar4) {
      if (uVar3 != uVar4) {
        return;
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*param_1 == iVar2) {
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          param_1[1] = 0;
          return;
        }
      }
      else if ((*param_1 != iVar2) && (*(int *)(iVar2 + 8) != 0)) {
        *(int *)(*(int *)(iVar2 + 8) + 0xc) = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) = *(undefined4 *)(iVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x001754a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(DAT_001754c0 + 4))(*(undefined4 *)(iVar2 + 4));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

