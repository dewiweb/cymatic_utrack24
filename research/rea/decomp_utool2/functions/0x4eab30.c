// rea decompile_all
// name: FUN_004eab30
// address: 0x4eab30
// body: available
// range: 0x4eab30-0x4eabc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eab30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  undefined *puVar6;
  int local_8;
  
  piVar5 = &local_8;
  puVar6 = &DAT_00738bfc;
  local_8 = in_ECX;
  FUN_0061f730(piVar5,&DAT_00738bfc);
  FUN_0061fa00(piVar5,puVar6);
  piVar2 = *(int **)(param_1 + 0x58);
  piVar5 = piVar2 + *(int *)(param_1 + 0x60) * 6;
  do {
    if (piVar2 == piVar5) {
LAB_004eab76:
      ppuVar3 = &PTR_PTR_00c7ed58;
LAB_004eab7b:
      uVar4 = (**(code **)(*(int *)*ppuVar3 + 4))(ppuVar3 + 2);
      piVar5 = (int *)(local_8 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      (**(code **)(**(int **)(in_ECX + 8) + 0xb4))(uVar4);
      FUN_004ea0c0();
      return;
    }
    if (*piVar2 == local_8) {
      ppuVar3 = (undefined **)(piVar2 + 2);
      if (ppuVar3 != (undefined **)0x0) goto LAB_004eab7b;
      goto LAB_004eab76;
    }
    piVar2 = piVar2 + 6;
  } while( true );
}

