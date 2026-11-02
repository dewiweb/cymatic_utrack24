// rea decompile_all
// name: FUN_004faaa8
// address: 0x4faaa8
// body: available
// range: 0x4faaa8-0x4fab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004faaa8(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_EDI;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4faab4;
  piVar1 = (int *)(unaff_ESI + 8);
  if (*piVar1 == 0) {
    FUN_0047e2f2();
    local_8 = 0;
    FUN_004fcf68(piVar1);
    FUN_004c4d7a();
  }
  *unaff_EDI = *piVar1;
  local_14 = *(int *)(*(int *)(unaff_ESI + 4) + 0xc);
  local_18 = *(int *)(*(int *)(unaff_ESI + 4) + 0x10);
  iVar2 = *(int *)(unaff_ESI + 0xc);
  unaff_EDI[2] = local_18;
  unaff_EDI[1] = local_14;
  unaff_EDI[3] = (int)((float)local_14 / (float)iVar2);
  unaff_EDI[4] = (int)((float)local_18 / (float)*(int *)(unaff_ESI + 0x10));
  FUN_00467eb1(local_1c);
  FUN_00467e6f();
  return;
}

