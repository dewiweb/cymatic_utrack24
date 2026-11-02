// rea decompile_all
// name: FUN_005d4950
// address: 0x5d4950
// body: available
// range: 0x5d4950-0x5d4a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_005d4950(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  
  if (param_2 < 0) goto LAB_005d498a;
  if ((0 < param_2) || (param_1 != 0)) {
    bVar6 = CARRY4(param_1,*(uint *)(in_ECX + 8));
    param_1 = param_1 + *(uint *)(in_ECX + 8);
    param_2 = param_2 + *(int *)(in_ECX + 0xc) + (uint)bVar6;
  }
  while( true ) {
    while( true ) {
      if (((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) &&
         ((param_2 < *(int *)(in_ECX + 0xc) ||
          ((param_2 <= *(int *)(in_ECX + 0xc) && (param_1 <= *(uint *)(in_ECX + 8))))))) {
        return 0xffffffffffffffff;
      }
LAB_005d498a:
      uVar4 = FUN_005ea230();
      if (-1 < (int)uVar4) break;
      puVar1 = (uint *)(in_ECX + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      *(int *)(in_ECX + 0xc) =
           (*(int *)(in_ECX + 0xc) - ((int)uVar4 >> 0x1f)) - (uint)(uVar2 < uVar4);
    }
    if (uVar4 != 0) {
      uVar2 = *(uint *)(in_ECX + 8);
      uVar3 = *(undefined8 *)(in_ECX + 8);
      *(uint *)(in_ECX + 8) = uVar4 + uVar2;
      *(uint *)(in_ECX + 0xc) =
           ((int)uVar4 >> 0x1f) + *(int *)(in_ECX + 0xc) + (uint)CARRY4(uVar4,uVar2);
      return uVar3;
    }
    if (param_1 == 0 && param_2 == 0) break;
    iVar5 = FUN_005d4a90();
    if (iVar5 == 0) {
      return 0xfffffffffffffffe;
    }
    if (iVar5 < 0) {
      return 0xffffffffffffff80;
    }
  }
  return 0xffffffffffffffff;
}

