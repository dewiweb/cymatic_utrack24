// rea decompile_all
// name: FUN_005c6e60
// address: 0x5c6e60
// body: available
// range: 0x5c6e60-0x5c6eae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6e60(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0;
  uVar8 = 0;
  iVar5 = in_ECX[2] + -1;
  if (-1 < iVar5) {
    piVar4 = (int *)(*in_ECX + iVar5 * 4);
    do {
      uVar2 = ((int *)*piVar4)[2];
      uVar1 = uVar2 - 1;
      if ((uVar1 < uVar2) && (iVar3 = *(int *)(*(int *)*piVar4 + uVar1 * 4), iVar3 != 0)) {
        dVar6 = *(double *)(iVar3 + 8);
      }
      else {
        dVar6 = 0.0;
      }
      if (dVar6 <= (double)CONCAT44(uVar8,uVar7)) {
        dVar6 = (double)CONCAT44(uVar8,uVar7);
      }
      piVar4 = piVar4 + -1;
      iVar5 = iVar5 + -1;
      uVar7 = SUB84(dVar6,0);
      uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    } while (-1 < iVar5);
  }
  return;
}

