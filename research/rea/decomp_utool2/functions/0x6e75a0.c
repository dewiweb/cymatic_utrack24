// rea decompile_all
// name: FUN_006e75a0
// address: 0x6e75a0
// body: available
// range: 0x6e75a0-0x6e76a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e75a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_18 [20];
  
  uVar2 = FUN_0048d850();
  puVar3 = (undefined4 *)FUN_004107c0(local_18,uVar2);
  FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  iVar1 = *(int *)(in_ECX + 0x7c);
  iVar6 = *(int *)(in_ECX + 0x8c);
  if ((*(int *)(iVar1 + 0x90) != 0x14) || (*(int *)(iVar1 + 0x94) != iVar6)) {
    *(undefined4 *)(iVar1 + 0x90) = 0x14;
    *(int *)(iVar1 + 0x94) = iVar6;
    FUN_006abba0();
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  *(undefined1 *)(iVar1 + 0x334) = 0;
  if (*(int *)(iVar1 + 0x78) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar1 + 0x78) + 8);
  }
  iVar5 = *(int *)(iVar1 + 0x318);
  iVar7 = *(int *)(iVar6 + 0x14);
  iVar4 = *(int *)(iVar5 + 0x90);
  if (*(int *)(iVar5 + 0x90) < *(int *)(iVar1 + 0xb8)) {
    iVar4 = *(int *)(iVar1 + 0xb8);
  }
  iVar5 = *(int *)(iVar5 + 0x8c) * *(int *)(iVar5 + 0x88);
  iVar1 = *(int *)(iVar1 + 0xbc);
  if ((iVar5 + iVar7 < iVar1) && (iVar5 - iVar1 != 0 && iVar1 <= iVar5)) {
    iVar7 = iVar1 - iVar5;
  }
  FUN_006e9790(*(undefined4 *)(iVar6 + 0x10),iVar7,iVar4,iVar5);
  return;
}

