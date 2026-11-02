// rea decompile_all
// name: FUN_005f0450
// address: 0x5f0450
// body: available
// range: 0x5f0450-0x5f0573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f0450(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar4;
  int in_EDX;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_8 = in_EDX;
  iVar2 = FUN_005fe2a0(&local_c);
  if (iVar2 == 0) {
    *(undefined4 *)*in_ECX = 8;
    return 0;
  }
  iVar2 = extraout_ECX;
  if (((undefined4 *)*in_ECX)[1] != 0) {
    *(undefined4 *)(in_ECX[1] + 0x2e14) = local_10;
    *(uint *)(in_ECX[1] + 0x2e1c) = local_c;
    iVar2 = in_ECX[1];
    if (*(int *)(iVar2 + 0x2de4) == 0) {
      *(undefined4 *)(iVar2 + 0x2de8) = 1;
    }
    else {
      iVar3 = FUN_005f6ab0();
      iVar2 = extraout_ECX_00;
      if (iVar3 == 0) {
        iVar2 = *(int *)(in_ECX[1] + 0x1ac8);
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        if (*(int *)*in_ECX != 4) {
          *(int *)*in_ECX = 3;
        }
        return 0;
      }
    }
  }
  iVar3 = FUN_005f01f0(local_c,local_8,iVar2);
  iVar2 = *(int *)(in_ECX[1] + 0x1ac8);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (iVar3 != 0) {
    *(undefined4 *)*in_ECX = 5;
    return 0;
  }
  if (local_8 != 0) {
    uVar1 = *(uint *)(in_ECX[1] + 0x1af0);
    uVar4 = local_c;
    if (uVar1 < local_c) {
      uVar4 = uVar1;
    }
    *(uint *)(in_ECX[1] + 0x1af0) = uVar4;
    uVar1 = *(uint *)(in_ECX[1] + 0x1af4);
    if (local_c < uVar1) {
      local_c = uVar1;
    }
    *(uint *)(in_ECX[1] + 0x1af4) = local_c;
  }
  return 1;
}

