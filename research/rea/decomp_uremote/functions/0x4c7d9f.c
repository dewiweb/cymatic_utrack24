// rea decompile_all
// name: FUN_004c7d9f
// address: 0x4c7d9f
// body: available
// range: 0x4c7d9f-0x4c7e26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c7d9f(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4c7dab;
  FUN_004c3456();
  local_8 = 0;
  iVar1 = in_ECX[0x29];
  if ((iVar1 != 0) && (in_ECX[0x2f] != 0)) {
    FUN_004f0329();
    FUN_004eff07(iVar1,1);
  }
  (**(code **)(*in_ECX + 0xb4))(param_1);
  cVar2 = FUN_004c3462();
  if (cVar2 == '\0') {
    FUN_004f894b(local_14,FUN_004f9b3e,in_ECX);
  }
  FUN_00474d0f();
  return;
}

