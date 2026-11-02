// rea decompile_all
// name: FUN_006b3c10
// address: 0x6b3c10
// body: available
// range: 0x6b3c10-0x6b3ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006b3c10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int *in_EDX;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar2 = in_ECX[2];
  uVar9 = uVar2 - 1;
  if (-1 < (int)uVar9) {
    iVar6 = *in_ECX;
    iVar3 = *in_EDX;
    piVar7 = (int *)(iVar6 + uVar9 * 4);
    do {
      if (*(int *)(*piVar7 + 8) == iVar3) {
LAB_006b3c77:
        uVar8 = 0;
        if (uVar9 < uVar2) {
          puVar1 = (undefined4 *)(iVar6 + uVar9 * 4);
          uVar8 = *puVar1;
          in_ECX[2] = uVar2 - 1;
          iVar6 = (uVar2 - 1) - uVar9;
          if (0 < iVar6) {
            FUN_004c1df0(puVar1,puVar1 + 1,iVar6 * 4);
          }
          iVar6 = in_ECX[2];
          if ((iVar6 * 2 < in_ECX[1]) && (iVar6 < in_ECX[1])) {
            FUN_00409cf0(iVar6);
          }
        }
        return uVar8;
      }
      while( true ) {
        iVar4 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && ((iVar4 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar4 == 0) goto LAB_006b3c77;
      }
      piVar7 = piVar7 + -1;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return 0;
}

