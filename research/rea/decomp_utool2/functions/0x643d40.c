// rea decompile_all
// name: FUN_00643d40
// address: 0x643d40
// body: available
// range: 0x643d40-0x643d91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00643d40(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined4 **ppuVar4;
  int *piVar5;
  undefined4 *local_8;
  
  iVar3 = *in_ECX;
  if (*(int *)(iVar3 + 8) == 0) {
    ppuVar4 = &local_8;
    piVar5 = in_ECX;
    FUN_004681b0(ppuVar4);
    puVar2 = (undefined4 *)FUN_004682f0(ppuVar4,piVar5);
    uVar1 = *(undefined4 *)(*in_ECX + 8);
    *(undefined4 *)(*in_ECX + 8) = *puVar2;
    *puVar2 = uVar1;
    if (local_8 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = local_8 + 1;
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_8)(1);
      }
    }
    iVar3 = *in_ECX;
  }
  return *(undefined4 *)(iVar3 + 8);
}

