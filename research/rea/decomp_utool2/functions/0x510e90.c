// rea decompile_all
// name: FUN_00510e90
// address: 0x510e90
// body: available
// range: 0x510e90-0x510f41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510e90(void)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  int iStack_14;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    fVar2 = *(float *)(in_ECX + 0x34);
    if (fVar2 <= 0.0) {
      iVar1 = *(int *)(in_ECX + 0x14);
      iStack_14 = in_ECX + -0x70;
      uStack_18 = 0x510ecc;
      FUN_00510480();
      if ((fVar2 + *(float *)(iVar1 + 0x74)) - 1.0 <= (float)*(int *)(in_ECX + 0x24))
      goto LAB_00510f01;
      iVar1 = (int)(*(float *)(*(int *)(in_ECX + 0x14) + 0x74) / 20.0 +
                   (float)*(int *)(in_ECX + 0x24));
    }
    else {
      if (0x3f < *(int *)(in_ECX + 0x24)) goto LAB_00510f01;
      iVar1 = *(int *)(in_ECX + 0x24) + 1;
    }
    *(int *)(in_ECX + 0x24) = iVar1;
  }
  else {
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + -1;
  }
LAB_00510f01:
  if (*(int *)(in_ECX + 0x1c) == 0) {
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0x1c) = 0x14;
  }
  else {
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + -1;
  }
  if (*(int *)(in_ECX + 0x24) != *(int *)(in_ECX + 0x28)) {
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x24);
    FUN_006e6400(auStack_20);
    FUN_006ce9f0(1);
  }
  return;
}

