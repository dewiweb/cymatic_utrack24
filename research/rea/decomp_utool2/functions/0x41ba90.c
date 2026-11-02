// rea decompile_all
// name: FUN_0041ba90
// address: 0x41ba90
// body: available
// range: 0x41ba90-0x41bb3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ba90(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int in_EDX;
  int iVar7;
  
  iVar5 = (int)(param_1 - 1) / 2;
  iVar3 = in_EDX;
  while (iVar3 < iVar5) {
    iVar7 = iVar3 * 2 + 2;
    piVar6 = (int *)(*(int *)(in_ECX + 4 + iVar3 * 8) + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(in_ECX + iVar7 * 4);
    piVar6 = (int *)(iVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    cVar4 = FUN_0041b940(iVar1);
    if (cVar4 != '\0') {
      iVar7 = iVar3 * 2 + 1;
    }
    uVar2 = *(undefined4 *)(in_ECX + iVar3 * 4);
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar7 * 4);
    *(undefined4 *)(in_ECX + iVar7 * 4) = uVar2;
    iVar3 = iVar7;
  }
  if ((iVar3 == iVar5) && ((param_1 & 1) == 0)) {
    uVar2 = *(undefined4 *)(in_ECX + iVar3 * 4);
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
    *(undefined4 *)(in_ECX + -4 + param_1 * 4) = uVar2;
  }
  FUN_0041bc20(in_EDX,param_2);
  return;
}

