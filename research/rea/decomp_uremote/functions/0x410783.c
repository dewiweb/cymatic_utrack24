// rea decompile_all
// name: FUN_00410783
// address: 0x410783
// body: available
// range: 0x410783-0x4107cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00410783(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if ((unaff_ESI != (int *)0x0) && (unaff_EDI != (undefined4 *)0x0)) {
    iVar1 = thunk_FUN_00401000(unaff_ESI[1],unaff_EDI[1]);
    iVar2 = thunk_FUN_00401000(*unaff_ESI,*unaff_EDI);
    iVar3 = thunk_FUN_00401000(unaff_ESI[1],unaff_EDI[3]);
    iVar4 = thunk_FUN_00401000(*unaff_ESI,unaff_EDI[2]);
    *unaff_ESI = iVar1 + iVar2;
    unaff_ESI[1] = iVar3 + iVar4;
  }
  return;
}

