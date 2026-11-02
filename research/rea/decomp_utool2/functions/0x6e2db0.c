// rea decompile_all
// name: FUN_006e2db0
// address: 0x6e2db0
// body: available
// range: 0x6e2db0-0x6e2ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e2db0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(in_ECX + 0x80) == 0) {
    iVar6 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xc);
    iVar6 = in_ECX;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar6 = iVar3;
      iVar4 = *(int *)(iVar3 + 0xc);
    }
  }
  if (*(int *)(in_ECX + 0x84) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x84) + 8);
  }
  if (iVar6 != iVar4) {
    if ((*(int *)(in_ECX + 0x84) != 0) && (*(int *)(*(int *)(in_ECX + 0x84) + 8) != 0)) {
      if (*(int *)(in_ECX + 0x84) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x84) + 8);
      }
      if (*(int *)(iVar4 + 0x48) != 0) {
        FUN_00415ff0(-(uint)(*(int *)(in_ECX + 0x98) != 0) & *(int *)(in_ECX + 0x98) + 0x1cU);
      }
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0040de70(iVar6);
    }
    if (*(int *)(in_ECX + 0x84) != iVar6) {
      if (iVar6 != 0) {
        LOCK();
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        UNLOCK();
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x84);
      *(int *)(in_ECX + 0x84) = iVar6;
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar2 + 1;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    if ((*(int *)(in_ECX + 0x84) != 0) && (*(int *)(*(int *)(in_ECX + 0x84) + 8) != 0)) {
      uVar5 = -(uint)(*(int *)(in_ECX + 0x98) != 0) & *(int *)(in_ECX + 0x98) + 0x1cU;
      if (*(int *)(in_ECX + 0x84) != 0) {
        FUN_006e6260(uVar5);
        return;
      }
      FUN_006e6260(uVar5);
    }
  }
  return;
}

