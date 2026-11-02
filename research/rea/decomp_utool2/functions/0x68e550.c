// rea decompile_all
// name: FUN_0068e550
// address: 0x68e550
// body: available
// range: 0x68e550-0x68e61d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0068e604) */

void FUN_0068e550(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  longlong lVar4;
  undefined1 local_10 [12];
  
  if ((char)in_ECX[0x36] == '\0') {
    iVar1 = in_ECX[4];
    iVar2 = in_ECX[5];
    piVar3 = (int *)FUN_006cbf50(local_10);
    if ((((*piVar3 + iVar1 < in_ECX[0x31]) || (piVar3[1] + iVar2 < in_ECX[0x32])) ||
        (in_ECX[0x33] + in_ECX[0x31] <= *piVar3 + iVar1)) ||
       (in_ECX[0x34] + in_ECX[0x32] <= piVar3[1] + iVar2)) {
      FUN_006e8fd0(0);
      (**(code **)(*in_ECX + 0x28))(0);
      return;
    }
  }
  FUN_00633420();
  FUN_00633c20();
  lVar4 = FUN_006f55df();
  if (200 < lVar4) {
    FUN_006cddc0(0x4f83a04b);
  }
  return;
}

