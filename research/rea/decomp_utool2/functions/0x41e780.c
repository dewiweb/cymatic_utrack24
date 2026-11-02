// rea decompile_all
// name: FUN_0041e780
// address: 0x41e780
// body: available
// range: 0x41e780-0x41e86d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e780(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int *piVar7;
  int *in_ECX;
  int *in_EDX;
  int *piVar8;
  
  piVar7 = in_ECX;
  if (in_ECX != in_EDX) {
    while (piVar7 = piVar7 + 1, piVar7 != in_EDX) {
      puVar1 = (uint *)*piVar7;
      uVar2 = puVar1[1];
      uVar3 = *(uint *)*in_ECX;
      uVar4 = ((uint *)*in_ECX)[1];
      piVar8 = piVar7;
      if ((*puVar1 == uVar3) && (uVar2 == uVar4)) {
LAB_0041e806:
        while( true ) {
          puVar5 = (uint *)piVar8[-1];
          uVar2 = puVar1[1];
          uVar3 = puVar5[1];
          if ((*puVar1 == *puVar5) && (uVar2 == uVar3)) break;
          if (((int)uVar2 < (int)uVar3) || (((int)uVar2 <= (int)uVar3 && (*puVar1 <= *puVar5)))) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (-1 < (int)((uint)!bVar6 * 2 + -1)) break;
          *piVar8 = (int)puVar5;
          piVar8 = piVar8 + -1;
        }
        *piVar8 = (int)puVar1;
      }
      else {
        if (((int)uVar2 < (int)uVar4) || (((int)uVar2 <= (int)uVar4 && (*puVar1 <= uVar3)))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (-1 < (int)((uint)!bVar6 * 2 + -1)) goto LAB_0041e806;
        FUN_004c1df0(in_ECX + 1,in_ECX,(int)piVar7 - (int)in_ECX);
        *in_ECX = (int)puVar1;
      }
    }
  }
  return;
}

