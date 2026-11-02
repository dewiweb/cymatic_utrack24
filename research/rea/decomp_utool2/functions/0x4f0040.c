// rea decompile_all
// name: FUN_004f0040
// address: 0x4f0040
// body: available
// range: 0x4f0040-0x4f0123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f0040(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_8;
  
  FUN_006e9790(0,10,*(undefined4 *)(in_ECX + 0x18),0x14);
  iVar1 = *(int *)(in_ECX + 0x4fc);
  iVar2 = 0x28;
  local_8 = 0x28;
  if (iVar1 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    if (0 < iVar1) {
      bVar5 = iVar1 != 0;
      do {
        if (bVar5) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x4f4) + uVar4 * 4);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(in_ECX + 0x18) + -0x14 < *(int *)(iVar1 + 0x18) + iVar3) {
          iVar3 = 0;
          local_8 = local_8 + 0x14;
        }
        if (uVar4 < *(uint *)(in_ECX + 0x4fc)) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x4f4) + uVar4 * 4);
        }
        else {
          iVar1 = 0;
        }
        FUN_006e9790(iVar3,local_8,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
        if (uVar4 < *(uint *)(in_ECX + 0x4fc)) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x4f4) + uVar4 * 4);
        }
        else {
          iVar1 = 0;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 4 + *(int *)(iVar1 + 0x18);
        bVar5 = uVar4 < *(uint *)(in_ECX + 0x4fc);
        iVar2 = local_8;
      } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x4fc));
    }
    iVar2 = iVar2 + 0x1e;
  }
  FUN_006e9790(0,iVar2,*(undefined4 *)(in_ECX + 0x18),(*(int *)(in_ECX + 0x1c) - iVar2) + -10);
  (**(code **)(*(int *)(in_ECX + 0x168) + 0x84))();
  return;
}

