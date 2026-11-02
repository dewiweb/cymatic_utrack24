// rea decompile_all
// name: FUN_00471b40
// address: 0x471b40
// body: available
// range: 0x471b40-0x471bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471b40(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  
  in_ECX[2] = in_ECX[2] + -1;
  piVar2 = (int *)(*in_ECX + param_1 * 0x1c);
  puVar3 = (undefined4 *)*piVar2;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  if (0 < in_ECX[2] - param_1) {
    FUN_004c1df0(piVar2,piVar2 + 7,(in_ECX[2] - param_1) * 0x1c);
  }
  iVar7 = in_ECX[2];
  iVar4 = in_ECX[1];
  iVar5 = iVar7 * 2;
  iVar6 = 0;
  if (0 < iVar5) {
    iVar6 = iVar5;
  }
  if (iVar6 < iVar4) {
    if (iVar7 < 2) {
      iVar7 = 2;
    }
    if ((iVar7 < iVar4) && (iVar4 != iVar7)) {
      if (0 < iVar7) {
        FUN_00419e50(iVar7,iVar5);
        in_ECX[1] = iVar7;
        return;
      }
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
      in_ECX[1] = iVar7;
    }
  }
  return;
}

