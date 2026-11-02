// rea decompile_all
// name: FUN_00426220
// address: 0x426220
// body: available
// range: 0x426220-0x4262c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426220(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 *puVar6;
  
  if ((in_ECX != in_EDX) && (in_ECX + 1 != in_EDX)) {
    puVar6 = in_ECX;
    do {
      uVar1 = puVar6[1];
      iVar5 = FUN_00425020();
      if (iVar5 < 0) {
        FUN_004c1df0(in_ECX + 1,in_ECX,(4 - (int)in_ECX) + (int)puVar6);
        *in_ECX = uVar1;
      }
      else {
        uVar2 = *puVar6;
        iVar5 = FUN_00425020();
        puVar3 = puVar6 + 1;
        puVar4 = puVar6;
        while (iVar5 < 0) {
          *puVar3 = uVar2;
          uVar2 = puVar4[-1];
          iVar5 = FUN_00425020();
          puVar3 = puVar4;
          puVar4 = puVar4 + -1;
        }
        *puVar3 = uVar1;
      }
      puVar3 = puVar6 + 2;
      puVar6 = puVar6 + 1;
    } while (puVar3 != in_EDX);
  }
  return;
}

