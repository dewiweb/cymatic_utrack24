// rea decompile_all
// name: FUN_006940a0
// address: 0x6940a0
// body: available
// range: 0x6940a0-0x694183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006940a0(void)

{
  int *piVar1;
  int in_ECX;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_1c [24];
  
  FUN_00697280();
  *(undefined1 *)(in_ECX + 0x9c) = 0;
  FUN_0063eab0();
  if (*(int *)(in_ECX + 0x15c) != 0) {
    uStack_40 = 0x6940db;
    FID_conflict__free(*(void **)(in_ECX + 0x158));
    *(undefined4 *)(in_ECX + 0x158) = 0;
    *(undefined4 *)(in_ECX + 0x15c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x160) = 0;
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    if (*(int *)(in_ECX + 0xc) == 0) goto LAB_00694122;
    piVar1 = (int *)FUN_006d1d80();
  }
  else {
    piVar1 = (int *)FUN_0068db10();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))();
  }
LAB_00694122:
  piVar1 = *(int **)(in_ECX + 0xf0);
  if (piVar1 != (int *)0x0) {
    uStack_40 = 0x694139;
    (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))();
    uStack_40 = *(undefined4 *)(in_ECX + 0x100);
    puStack_48 = auStack_1c;
    uStack_44 = *(undefined4 *)(in_ECX + 0xfc);
    uStack_40 = FUN_0046fc10();
    uStack_44 = 0x69415c;
    (**(code **)(*piVar1 + 0xb0))();
  }
  uStack_40 = 0x694168;
  FUN_006cddc0();
  FUN_006e6400(&puStack_48);
  FUN_006ce9f0(1);
  return;
}

