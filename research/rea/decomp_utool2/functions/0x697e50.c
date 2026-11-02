// rea decompile_all
// name: FUN_00697e50
// address: 0x697e50
// body: available
// range: 0x697e50-0x697fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697e50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int *in_ECX;
  int iVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = param_1;
  iStack_20 = 0x697e64;
  (**(code **)(*in_ECX + 0x14))();
  iVar5 = in_ECX[0x20];
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    if ((*(byte *)(*(int *)(in_ECX[0x1e] + iVar5 * 4) + 8) & 1) != 0) {
      iVar1 = *(int *)(in_ECX[0x1e] + iVar5 * 4);
      *(double *)(iVar1 + 0x18) = (double)*(int *)(iVar1 + 0xc);
    }
  }
  in_ECX[0x27] = 0;
  FUN_006e6400(&uStack_2c);
  FUN_006ce9f0(1);
  iStack_20 = 0;
  iVar5 = 0;
  if (0 < in_ECX[0x20]) {
    do {
      if ((*(byte *)(*(int *)(in_ECX[0x1e] + iVar5 * 4) + 8) & 1) != 0) {
        if (*(int *)(*(int *)(in_ECX[0x1e] + iVar5 * 4) + 4) == in_ECX[0x28]) goto LAB_00697efd;
        iStack_20 = iStack_20 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[0x20]);
  }
  iStack_20 = -1;
LAB_00697efd:
  iStack_24 = 0x697f05;
  FUN_00697fb0();
  iStack_20 = 1;
  iStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_28 = *(undefined4 *)(param_1 + 8);
  uStack_2c = 0x697f21;
  cVar4 = FUN_006d01e0();
  if (cVar4 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 8);
    iStack_24 = 0x697f30;
    iStack_20 = uVar2;
    iVar5 = FUN_00697ae0();
    if (iVar5 == 0) {
      iStack_24 = 0x697f3c;
      iStack_20 = uVar2;
      iVar5 = FUN_00698fa0();
      goto LAB_00697f40;
    }
  }
  iVar5 = 0;
LAB_00697f40:
  if (iVar5 != in_ECX[0x2a]) {
    in_ECX[0x2a] = iVar5;
    FUN_006e6400(&uStack_2c);
    FUN_006ce9f0(1);
  }
  iStack_24 = in_ECX[0x2a];
  if (((iStack_24 != 0) && (*(char *)(param_1 + 0x3d) == '\0')) &&
     (iStack_20 = param_1 + 0x10, (*(uint *)(param_1 + 0x10) >> 5 & 1) == 0)) {
    uStack_28 = 0x697f8b;
    (**(code **)(*in_ECX + 0xb0))();
  }
  puVar3 = (undefined4 *)in_ECX[0x24];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x24] = 0;
    iStack_20 = 1;
    iStack_24 = 0x697fa5;
    (**(code **)*puVar3)();
  }
  return;
}

