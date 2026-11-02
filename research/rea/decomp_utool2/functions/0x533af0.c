// rea decompile_all
// name: FUN_00533af0
// address: 0x533af0
// body: available
// range: 0x533af0-0x533b6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00533af0(void)

{
  int iVar1;
  undefined *puVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  uVar3 = 0xffffffff;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    bVar5 = *(int *)(in_ECX + 0x4bc) != 0;
    puVar2 = PTR_DAT_00c7ed54;
    do {
      if (bVar5) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (*(undefined **)(iVar1 + 0xc) != puVar2) {
        iVar1 = FUN_0045c1e0(*(undefined4 *)(iVar1 + 0xc));
        puVar2 = PTR_DAT_00c7ed54;
        if (iVar1 != 0) {
          uVar3 = uVar4;
        }
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(in_ECX + 0x4bc);
    } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x4bc));
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(in_ECX + 0x4c0))) {
      return 1;
    }
  }
  return 0;
}

