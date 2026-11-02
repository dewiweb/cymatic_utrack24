// rea decompile_all
// name: FUN_006acd30
// address: 0x6acd30
// body: available
// range: 0x6acd30-0x6ace1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006acd30(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  
  if ((*(int *)(in_ECX + 0x80) != 0) && (*(int *)(*(int *)(in_ECX + 0x80) + 8) != 0)) {
    if (*(int *)(in_ECX + 0x80) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(in_ECX + 0x80) + 8);
    }
    (**(code **)(*piVar7 + 0x28))(0);
    if (*(int *)(in_ECX + 0x80) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x80) + 8);
    }
    FUN_006cf2a0(uVar5);
    puVar2 = *(undefined4 **)(in_ECX + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x80) = 0;
      LOCK();
      piVar7 = puVar2 + 1;
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  FUN_006adff0();
  iVar1 = *(int *)(in_ECX + 0x7c);
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        FUN_004aed80();
        return;
      }
      iVar3 = *(int *)(*(int *)(in_ECX + 0x74) + iVar1 * 4);
    } while ((iVar3 == 0) || (puVar2 = *(undefined4 **)(iVar3 + 8), puVar2 == (undefined4 *)0x0));
    piVar8 = (int *)puVar2[0x16];
    piVar7 = piVar8 + puVar2[0x18] * 6;
    for (; piVar8 != piVar7; piVar8 = piVar8 + 6) {
      if (*piVar8 == DAT_00c8a978) {
        ppuVar6 = (undefined **)(piVar8 + 2);
        if (ppuVar6 != (undefined **)0x0) goto LAB_006acdf1;
        break;
      }
    }
    ppuVar6 = &PTR_PTR_00c7ed58;
LAB_006acdf1:
    cVar4 = (**(code **)(*(int *)*ppuVar6 + 0x14))(ppuVar6 + 2);
    if (cVar4 != '\0') {
      (**(code **)*puVar2)(1);
    }
  } while( true );
}

