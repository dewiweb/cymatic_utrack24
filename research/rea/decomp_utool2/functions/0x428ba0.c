// rea decompile_all
// name: FUN_00428ba0
// address: 0x428ba0
// body: available
// range: 0x428ba0-0x428c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00428ba0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  param_1 = param_1 + *(int *)(in_ECX + 0x78);
  *(int *)(in_ECX + 0x9c) = param_1;
  uVar4 = param_1 - 1;
  uVar4 = uVar4 | (int)uVar4 >> 1;
  uVar4 = uVar4 | (int)uVar4 >> 2;
  uVar4 = uVar4 | (int)uVar4 >> 4;
  uVar4 = uVar4 | (int)uVar4 >> 8;
  uVar4 = (int)uVar4 >> 0x10 | uVar4;
  *(uint *)(in_ECX + 0xa0) = uVar4;
  uVar4 = (uVar4 + 1) * *(int *)(in_ECX + 0x80);
  if (*(uint *)(in_ECX + 0x98) != uVar4) {
    if (uVar4 == 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x94));
      *(undefined4 *)(in_ECX + 0x94) = 0;
      *(undefined4 *)(in_ECX + 0x98) = 0;
    }
    else {
      if (*(int *)(in_ECX + 0x94) == 0) {
        FID_conflict__free((void *)0x0);
        uVar2 = FUN_004c5556(uVar4,1);
        *(undefined4 *)(in_ECX + 0x94) = uVar2;
      }
      else {
        iVar3 = FUN_004c553b(*(int *)(in_ECX + 0x94),uVar4);
        *(int *)(in_ECX + 0x94) = iVar3;
        uVar1 = *(uint *)(in_ECX + 0x98);
        if (uVar1 <= uVar4 && uVar4 - uVar1 != 0) {
          _memset((void *)(iVar3 + uVar1),0,uVar4 - uVar1);
        }
      }
      *(uint *)(in_ECX + 0x98) = uVar4;
    }
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x28))(*(int **)(in_ECX + 0xc));
  if (-1 < iVar3) {
    FUN_00428ca0();
    return 1;
  }
  return 0;
}

