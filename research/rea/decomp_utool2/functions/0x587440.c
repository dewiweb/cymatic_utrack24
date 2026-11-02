// rea decompile_all
// name: FUN_00587440
// address: 0x587440
// body: available
// range: 0x587440-0x587574 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587440(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  double dVar5;
  undefined4 local_10;
  
  local_10 = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  if (0 < *(int *)(in_ECX + 400)) {
    do {
      uVar1 = *(undefined4 *)(in_ECX + 0x98);
      if (local_10 < *(uint *)(in_ECX + 400)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x188) + local_10 * 4);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = FUN_005842c0();
      iVar3 = 0x28;
      if (0x28 < iVar2 + 0x2c) {
        iVar3 = iVar2 + 0x2c;
      }
      iVar2 = iVar3 + 0x18;
      if ((*(byte *)(iVar4 + 0x1fc) & 2) == 0) {
        iVar2 = iVar3;
      }
      FUN_006e9790(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),uVar1,iVar2);
      *(int *)(in_ECX + 0x194) = *(int *)(in_ECX + 0x194) + iVar2;
      local_10 = local_10 + 1;
    } while ((int)local_10 < *(int *)(in_ECX + 400));
  }
  iVar4 = *(int *)(in_ECX + 0x194);
  iVar3 = 0x14;
  if (0x14 < iVar4) {
    iVar3 = iVar4;
  }
  dVar5 = (double)iVar3;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if ((*(double *)(in_ECX + 0x118) != 0.0) || (*(double *)(in_ECX + 0x120) != dVar5)) {
    *(undefined8 *)(in_ECX + 0x118) = 0;
    *(double *)(in_ECX + 0x120) = dVar5;
    FUN_006b03b0(iVar4,*(undefined8 *)(in_ECX + 0x128),*(undefined8 *)(in_ECX + 0x130));
    FUN_006aff30();
  }
  FUN_005873b0();
  return;
}

