// rea decompile_all
// name: FUN_00597f40
// address: 0x597f40
// body: available
// range: 0x597f40-0x5980ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597f40(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 unaff_EDI;
  uint uVar4;
  
  *(undefined1 *)(in_ECX + 0x22e0) = 1;
  FUN_004ea5c0(1,0);
  if ((*(byte *)(in_ECX + 0x309) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x309) = *(byte *)(in_ECX + 0x309) | 0x10;
    iVar1 = *(int *)(in_ECX + 0x2ac);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_00597fa6;
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_00597fa6;
      }
    }
    FUN_006cc240();
  }
LAB_00597fa6:
  if ((*(byte *)(in_ECX + 0x15c1) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x15c1) = *(byte *)(in_ECX + 0x15c1) | 0x10;
    iVar1 = *(int *)(in_ECX + 0x1564);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_00597fe3;
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_00597fe3;
      }
    }
    FUN_006cc240();
  }
LAB_00597fe3:
  if ((*(byte *)(in_ECX + 0x1011) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x1011) = *(byte *)(in_ECX + 0x1011) | 0x10;
    iVar1 = *(int *)(in_ECX + 0xfb4);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_00598020;
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_00598020;
      }
    }
    FUN_006cc240();
  }
LAB_00598020:
  (**(code **)(*(int *)(in_ECX + 0x1658) + 0x28))(0);
  (**(code **)(*(int *)(in_ECX + 0x1738) + 0x28))(1);
  (**(code **)(*(int *)(in_ECX + 0x1818) + 0x28))(1);
  uVar4 = CONCAT31((int3)((uint)unaff_EDI >> 8),*(byte *)(in_ECX + 0xb58) >> 1) & 0xffffff01;
  uVar3 = FUN_006e85c0(extraout_ECX,uVar4);
  uVar3 = FUN_00594190(in_ECX + 0xd0,in_ECX + 0x22e8,in_ECX + 0x22c0,in_ECX + 0x22c8,uVar3,uVar4);
  *(undefined4 *)(in_ECX + 0x22e4) = uVar3;
  return;
}

