// rea decompile_all
// name: FUN_005f5c90
// address: 0x5f5c90
// body: available
// range: 0x5f5c90-0x5f5e3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f5c90(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 in_EDX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  *(undefined4 *)(in_ECX[1] + 0x1a8) = 3;
  *(undefined4 *)(in_ECX[1] + 0x1ac) = in_EDX;
  *(uint *)(in_ECX[1] + 0x1b0) = param_1;
  *(uint *)(in_ECX[1] + 0x1b8) = param_1 / 0x12;
  uVar1 = *(uint *)(in_ECX[1] + 0x1b8);
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    if (0xaaaaaaa < uVar1) {
      iVar3 = 0;
      goto LAB_005f5d05;
    }
    iVar3 = uVar1 * 0x18;
  }
  iVar3 = FUN_004c553b(*(undefined4 *)(in_ECX[1] + 0x1bc),iVar3);
LAB_005f5d05:
  *(int *)(in_ECX[1] + 0x1bc) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)*in_ECX = 8;
  }
  else {
    local_8 = 0;
    if (*(int *)(in_ECX[1] + 0x1b8) != 0) {
      iVar3 = 0;
      do {
        iVar2 = FUN_005feec0(0x20);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_005feec0(0x20);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = *(int *)(in_ECX[1] + 0x1bc);
        *(undefined4 *)(iVar3 + iVar2) = local_10;
        *(undefined4 *)(iVar3 + 4 + iVar2) = local_c;
        iVar2 = FUN_005feec0(0x20);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_005feec0(0x20);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = *(int *)(in_ECX[1] + 0x1bc);
        *(undefined4 *)(iVar2 + 8 + iVar3) = local_18;
        *(undefined4 *)(iVar2 + 0xc + iVar3) = local_14;
        iVar2 = FUN_005feec0(0x10);
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(*(int *)(in_ECX[1] + 0x1bc) + 0x10 + iVar3) = local_1c;
        iVar3 = iVar3 + 0x18;
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(in_ECX[1] + 0x1b8));
    }
    if ((param_1 + *(int *)(in_ECX[1] + 0x1b8) * -0x12 == 0) || (iVar3 = FUN_005fed10(), iVar3 != 0)
       ) {
      return 1;
    }
  }
  return 0;
}

