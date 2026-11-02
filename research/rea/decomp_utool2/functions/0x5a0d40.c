// rea decompile_all
// name: FUN_005a0d40
// address: 0x5a0d40
// body: available
// range: 0x5a0d40-0x5a0e6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0d40(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x38) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x34));
      *(undefined4 *)(in_ECX + 0x34) = 0;
      *(undefined4 *)(in_ECX + 0x38) = 0;
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    FUN_0040f7f0();
    if (*(int *)(in_ECX + 0x44) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x40));
      *(undefined4 *)(in_ECX + 0x40) = 0;
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    *(undefined4 *)(in_ECX + 0x48) = 0;
    ppuVar1 = (undefined **)**(int **)(in_ECX + 0x18);
    if (ppuVar1 != PanelImportComponent::vftable) {
      (*(code *)ppuVar1[3])(param_2);
      return;
    }
    FUN_004edc50(param_2,*(int **)(in_ECX + 0x18));
    return;
  }
  piVar2 = *(int **)(in_ECX + 0x34);
  piVar3 = piVar2;
  do {
    if (piVar3 == piVar2 + *(int *)(in_ECX + 0x3c)) {
LAB_005a0ddb:
      iVar4 = *(int *)(in_ECX + 0x3c) + 1;
      if (*(int *)(in_ECX + 0x38) < iVar4) {
        FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x3c) + 9 & 0xfffffff8);
      }
      iVar4 = *(int *)(in_ECX + 0x3c);
      *(int *)(in_ECX + 0x3c) = iVar4 + 1;
      piVar2 = (int *)(*(int *)(in_ECX + 0x34) + iVar4 * 4);
      if (piVar2 != (int *)0x0) {
        *piVar2 = param_1;
      }
      FUN_006363c0(param_2);
LAB_005a0e1e:
      ppuVar1 = (undefined **)**(int **)(in_ECX + 0x18);
      if (ppuVar1 != PanelImportComponent::vftable) {
        (*(code *)ppuVar1[2])(in_ECX + 0x40);
        return;
      }
      FUN_004edb40(in_ECX + 0x40,*(int **)(in_ECX + 0x18));
      return;
    }
    if (param_1 == *piVar3) {
      iVar4 = (int)piVar3 - (int)piVar2 >> 2;
      if (-1 < iVar4) {
        FUN_00459080(iVar4,param_2);
        goto LAB_005a0e1e;
      }
      goto LAB_005a0ddb;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

