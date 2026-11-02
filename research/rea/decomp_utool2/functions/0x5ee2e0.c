// rea decompile_all
// name: FUN_005ee2e0
// address: 0x5ee2e0
// body: available
// range: 0x5ee2e0-0x5ee361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005ee2e0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  uint in_EDX;
  uint uVar8;
  
  uVar6 = 0;
  uVar8 = 0;
  if (in_EDX != 0) {
    do {
      if ((uVar6 & 1) != 0) break;
      uVar6 = uVar6 | *(uint *)(in_ECX + uVar8 * 4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < in_EDX);
    if (uVar6 != 0) {
      iVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = (int)uVar6 >> 1) {
        iVar7 = iVar7 + 1;
      }
      goto LAB_005ee311;
    }
  }
  iVar7 = 0;
LAB_005ee311:
  if ((iVar7 != 0) && (uVar6 = 0, in_EDX != 0)) {
    if (7 < in_EDX) {
      do {
        piVar1 = (int *)(in_ECX + uVar6 * 4);
        iVar3 = piVar1[1];
        iVar4 = piVar1[2];
        iVar5 = piVar1[3];
        piVar2 = (int *)(in_ECX + uVar6 * 4);
        *piVar2 = *piVar1 >> iVar7;
        piVar2[1] = iVar3 >> iVar7;
        piVar2[2] = iVar4 >> iVar7;
        piVar2[3] = iVar5 >> iVar7;
        piVar1 = (int *)(in_ECX + 0x10 + uVar6 * 4);
        iVar3 = piVar1[1];
        iVar4 = piVar1[2];
        iVar5 = piVar1[3];
        piVar2 = (int *)(in_ECX + 0x10 + uVar6 * 4);
        *piVar2 = *piVar1 >> iVar7;
        piVar2[1] = iVar3 >> iVar7;
        piVar2[2] = iVar4 >> iVar7;
        piVar2[3] = iVar5 >> iVar7;
        uVar6 = uVar6 + 8;
      } while (uVar6 < (in_EDX & 0xfffffff8));
    }
    for (; uVar6 < in_EDX; uVar6 = uVar6 + 1) {
      piVar1 = (int *)(in_ECX + uVar6 * 4);
      *piVar1 = *piVar1 >> ((byte)iVar7 & 0x1f);
    }
  }
  return iVar7;
}

