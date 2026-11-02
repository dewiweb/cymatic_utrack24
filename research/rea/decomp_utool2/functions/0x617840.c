// rea decompile_all
// name: FUN_00617840
// address: 0x617840
// body: available
// range: 0x617840-0x61793d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00617840(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(in_ECX + 0x20))
                      (*(undefined4 *)(in_ECX + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  uVar5 = in_EDX - *(int *)(in_ECX + 0x10);
  uVar4 = *(uint *)(iVar1 + 0x28);
  if (uVar5 < uVar4) {
    uVar4 = uVar4 - *(int *)(iVar1 + 0x30);
    uVar3 = uVar5;
    if (uVar4 <= uVar5) {
      uVar3 = uVar4;
    }
    FUN_004c2c30(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(in_ECX + 0xc) - uVar5,
                 uVar3);
    iVar2 = uVar5 - uVar3;
    if (iVar2 == 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar3;
      if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
        *(uint *)(iVar1 + 0x2c) = uVar3 + *(uint *)(iVar1 + 0x2c);
      }
      return 0;
    }
    FUN_004c2c30(*(undefined4 *)(iVar1 + 0x34),*(int *)(in_ECX + 0xc) - iVar2,iVar2);
    *(int *)(iVar1 + 0x30) = iVar2;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  FUN_004c2c30(*(undefined4 *)(iVar1 + 0x34),*(int *)(in_ECX + 0xc) - uVar4,uVar4);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return 0;
}

