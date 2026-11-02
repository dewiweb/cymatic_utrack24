// rea decompile_all
// name: FUN_004e661f
// address: 0x4e661f
// body: available
// range: 0x4e661f-0x4e66c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e661f(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_24 [16];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4e662b;
  if ((*(int *)(in_ECX + 0x7c) != param_1) || (*(char *)(in_ECX + 0x80) != (char)param_2)) {
    FUN_004c1613(in_ECX);
    *(int *)(in_ECX + 0x7c) = param_1;
    *(char *)(in_ECX + 0x80) = (char)param_2;
  }
  piVar2 = *(int **)(*(int *)(in_ECX + 0x78) + 0x78);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))(local_14,*(undefined4 *)(in_ECX + 0x7c));
    local_8 = 0;
    FUN_004c1531();
    local_8 = 0xffffffff;
    FUN_004c6b17();
    piVar1 = (int *)(in_ECX + 0x74);
    iVar3 = *piVar1;
    *piVar1 = 0;
    (**(code **)(*piVar2 + 0xc))(param_1,param_2,iVar3);
    FUN_004f6555();
    if (*piVar1 != 0) {
      FUN_004c1064(0xffffffff);
      FUN_004c2047(local_24);
      FUN_004c0c1f();
    }
  }
  return;
}

