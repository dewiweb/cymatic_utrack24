// rea decompile_all
// name: FUN_00473dc5
// address: 0x473dc5
// body: available
// range: 0x473dc5-0x473dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x473df7 to 0x4740eb FUN_004740eb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00473dc5(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_EDI;
  
  if (*unaff_EDI == 0) {
    iVar2 = FUN_005af82d(0x2c);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_0047407a();
    }
    puVar1 = (undefined4 *)*unaff_EDI;
    if ((puVar1 != puVar3) && (*unaff_EDI = (int)puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_004740eb();
  return;
}

