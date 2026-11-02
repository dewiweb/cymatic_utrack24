// rea decompile_all
// name: FUN_00643be0
// address: 0x643be0
// body: available
// range: 0x643be0-0x643c9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643be0(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int *in_ECX;
  char *pcVar6;
  
  uVar3 = FUN_00643ca0();
  if (uVar3 != param_1) {
    FUN_00644020();
    puVar2 = *(undefined4 **)(*in_ECX + 8);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(*in_ECX + 8) = 0;
      LOCK();
      piVar5 = puVar2 + 1;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
    if ((param_1 & 1) == 0) {
      pcVar6 = "Italic";
      pcVar4 = "Regular";
    }
    else {
      pcVar6 = "Bold Italic";
      pcVar4 = "Bold";
    }
    if ((param_1 >> 1 & 1) == 0) {
      pcVar6 = pcVar4;
    }
    FUN_0045c990(pcVar6);
    piVar5 = (int *)(*(int *)(*in_ECX + 0x10) + -8);
    *(uint *)(*in_ECX + 0x10) = param_1;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    *(byte *)(*in_ECX + 0x24) = (byte)(param_1 >> 2) & 1;
    *(undefined4 *)(*in_ECX + 0x20) = 0;
  }
  return;
}

