// rea decompile_all
// name: FUN_0063b8c0
// address: 0x63b8c0
// body: available
// range: 0x63b8c0-0x63b9dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063b8c0(void)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_0071f4f6;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = *(int *)(in_ECX + 0x44) - 1;
  if ((*(uint *)(in_ECX + 0x24) <= uVar1) ||
     (piVar6 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar1 * 4), piVar6 == (int *)0x0)) {
    return 0;
  }
  uVar2 = *(undefined1 *)(in_ECX + 0x49);
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x49) = 1;
  local_8 = 0;
  iVar5 = piVar6[2];
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + -1;
      goto LAB_0063b944;
    }
    cVar3 = (**(code **)(**(int **)(*piVar6 + iVar5 * 4) + 8))(uVar4);
  } while (cVar3 != '\0');
  FUN_00639860();
LAB_0063b944:
  *(undefined1 *)(in_ECX + 0x48) = 1;
  LOCK();
  iVar5 = *(int *)(in_ECX + 0x34);
  *(int *)(in_ECX + 0x34) = (int)&DAT_00bfe12c;
  UNLOCK();
  piVar6 = (int *)(iVar5 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar6 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      *piVar6 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  *(undefined1 *)(in_ECX + 0x49) = uVar2;
  ExceptionList = local_10;
  return 1;
}

