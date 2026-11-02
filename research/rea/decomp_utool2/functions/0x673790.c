// rea decompile_all
// name: FUN_00673790
// address: 0x673790
// body: available
// range: 0x673790-0x6737d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00673790(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 *local_8;
  
  if ((int *)*in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)*in_ECX + 0x14))();
    if (1 < iVar1) {
      piVar2 = (int *)(**(code **)(*(int *)*in_ECX + 8))(&local_8);
      iVar1 = *in_ECX;
      *in_ECX = *piVar2;
      *piVar2 = iVar1;
      if (local_8 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = local_8 + 1;
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_8)(1);
        }
      }
    }
  }
  return;
}

