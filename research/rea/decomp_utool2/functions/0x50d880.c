// rea decompile_all
// name: FUN_0050d880
// address: 0x50d880
// body: available
// range: 0x50d880-0x50d9dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050d880(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 local_8;
  
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x140)) {
    bVar4 = *(int *)(in_ECX + 0x140) != 0;
    do {
      if (bVar4) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x138) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (((*(byte *)(iVar2 + 0x69) & 0x10) == 0) &&
         ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
        if (uVar3 < *(uint *)(in_ECX + 0x140)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x138) + uVar3 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (((*(char *)(iVar2 + 0x7b8) == '\0') && (*(char *)(iVar2 + 0x7bb) == '\0')) &&
           ((*(char *)(iVar2 + 0x7ba) != '\0' || (*(char *)(iVar2 + 0x7b9) != '\0')))) {
          local_8 = 1;
        }
        else {
          local_8 = 0;
        }
        FUN_00409440(uVar3,local_8);
        if (*(char *)(iVar2 + 0x7b8) == '\0') {
          uVar5 = *(undefined4 *)(iVar2 + 0x7bc);
        }
        else {
          uVar5 = 0;
        }
        FUN_0050de00(uVar3,uVar5);
        if (uVar3 < *(uint *)(in_ECX + 0x140)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x138) + uVar3 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (((*(byte *)(iVar2 + 0x69) & 0x10) == 0) &&
           ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
          FUN_004095f0(uVar3);
        }
        *(undefined1 *)(in_ECX + 0xb9) = 1;
        FUN_00515db0(1);
      }
      else {
        FUN_00409440(uVar3,1);
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(in_ECX + 0x140);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x140));
  }
  return;
}

