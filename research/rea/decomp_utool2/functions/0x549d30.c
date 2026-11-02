// rea decompile_all
// name: FUN_00549d30
// address: 0x549d30
// body: available
// range: 0x549d30-0x549df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00549d30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_ECX;
  uint uVar6;
  
  uVar6 = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 < 1) {
    return in_ECX & 0xffffff00;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  do {
    if (uVar6 < *(uint *)(in_ECX + 0x20)) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + uVar6 * 4);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar2 != *(int *)(iVar3 + 0x20)) {
      do {
        iVar4 = FUN_00443260();
        uVar5 = FUN_00443260();
        if ((iVar4 - uVar5 != 0) && (((int)(iVar4 - uVar5) >> 0x1f & 0xfffffffeU) != 0xffffffff))
        goto LAB_00549dce;
      } while (iVar4 != 0);
    }
    uVar5 = *(uint *)(iVar3 + 0x18);
    if ((*(uint *)(param_1 + 0x18) == uVar5) && (*(int *)(param_1 + 0x1c) == *(int *)(iVar3 + 0x1c))
       ) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
LAB_00549dce:
    uVar6 = uVar6 + 1;
    if (iVar1 <= (int)uVar6) {
      return uVar5 & 0xffffff00;
    }
  } while( true );
}

